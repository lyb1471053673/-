class ATMDemo1{
  public static void main(String [] args){	
    BankAccount visacard= new BankAccount();
    ATM 丈夫 = new ATM("丈夫",  visacard, 200);
    ATM 妻子 = new ATM("妻子",  visacard, 300);
	Thread t1 = new Thread(丈夫);
	Thread t2 = new Thread(妻子);
	System.out.println("当前帐户余额为:" +  visacard.getmoney());
	t1.start();
	t2.start();
  }              
}
class ATM implements Runnable{   //模拟ATM机或柜台存钱
  BankAccount  card;
  String name;
  long m;
  ATM(String n, BankAccount card, long m){	
	this.name = n;
   	this.card = card;
	this.m = m;  
  }
  public void run(){		
	card.save(name, m);	          //调用方法存钱
	System.out.println( name+"存入 "+m+" 后，帐户余额为 "+card.getmoney());
  } 
}
class BankAccount{	
  static long money=1000;         //设置帐户中的初始金额
  public void save(String s, long m){		//存錢
	  //   public  synchronized void save(String s, long m){
     System.out.println(s+"存入 "+m);
	 long tmpe = money;	         
     try{                        //模拟存钱所花费的时间
	      Thread.sleep(10);
		} catch(InterruptedException e)	{}
	 money = tmpe + m;	          //相加之后存回帐户
	}
  public long getmoney(){	       //获得当前帐户余额
	return  money;
  }
}
