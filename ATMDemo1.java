class ATMDemo1{
  public static void main(String [] args){	
    BankAccount visacard= new BankAccount();
    ATM �ɷ� = new ATM("�ɷ�",  visacard, 200);
    ATM ���� = new ATM("����",  visacard, 300);
	Thread t1 = new Thread(�ɷ�);
	Thread t2 = new Thread(����);
	System.out.println("��ǰ�ʻ����Ϊ:" +  visacard.getmoney());
	t1.start();
	t2.start();
  }              
}
class ATM implements Runnable{   //ģ��ATM�����̨��Ǯ
  BankAccount  card;
  String name;
  long m;
  ATM(String n, BankAccount card, long m){	
	this.name = n;
   	this.card = card;
	this.m = m;  
  }
  public void run(){		
	card.save(name, m);	          //���÷�����Ǯ
	System.out.println( name+"���� "+m+" ���ʻ����Ϊ "+card.getmoney());
  } 
}
class BankAccount{	
  static long money=1000;         //�����ʻ��еĳ�ʼ���
  public void save(String s, long m){		//���X
	  //   public  synchronized void save(String s, long m){
     System.out.println(s+"���� "+m);
	 long tmpe = money;	         
     try{                        //ģ���Ǯ�����ѵ�ʱ��
	      Thread.sleep(10);
		} catch(InterruptedException e)	{}
	 money = tmpe + m;	          //���֮�����ʻ�
	}
  public long getmoney(){	       //��õ�ǰ�ʻ����
	return  money;
  }
}
