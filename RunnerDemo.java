class MyRunner implements Runnable{
    public void run(){
  	String s = Thread.currentThread().getName();
    for(int i=1;i<=10;i++)
     System.out.println(s + ": " + i);
   }
}
public class RunnerDemo{
  public static void main(String[] args){
     MyRunner r1=new  MyRunner();
     Thread t1=new Thread(r1,"线程1");
     Thread t2=new Thread(r1,"线程2");
     t1.start();
     t2.start();
     for(int i=1;i<=10;i++)
    	 System.out.println(Thread.currentThread().getName()+": "+i);
  }
}
