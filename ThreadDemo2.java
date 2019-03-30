package pack2;
class MyThread extends Thread{
   MyThread(String  str)
   {super(str);
   }
   public void run(){
    for(int i=1;i<=5;i++)
     System.out.println(this.getName()+": "+i);
   }
}
public class ThreadDemo2{
  public static void main(String[] args){
     MyThread t1=new MyThread("线程1");
     MyThread t2=new MyThread("线程2");
     t1.start();
     t2.start();
     for(int i=1;i<=5;i++)
       System.out.println(Thread.currentThread().getName()+": "+i);
  }
}
