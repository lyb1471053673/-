class SleepDemo extends Thread{
   public void  run(){
  	  for(int i=0;i<10;i++){	  
  	    System.out.println(i);
  	    try{
  	   	  sleep(1000);
  	   }catch(InterruptedException  e){} 
     }
    }
    public static void main(String args[]){
      SleepDemo t=new SleepDemo();
      t.start();
    }
}