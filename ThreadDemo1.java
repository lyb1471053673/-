package pack;
class MyThread extends Thread{
   public void run(){
	    for(int i=1;i<=10;i++)
	      System.out.println(this.getName()+": "+i);
	   }
	}
	public class ThreadDemo1{
	  public static void main(String[] args){
	     MyThread t=new MyThread();
	     t.start();      
	  }
	}
