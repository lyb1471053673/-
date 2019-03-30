import java.text.NumberFormat;
import java.awt.event.*;
import javax.swing.*;
public class TestClock implements ActionListener {
   JFrame jf;
   JButton begin;
   JButton end;
   JButton pause;
   JPanel p1;
   JLabel clock;
   ClockDispaly mt;
   public TestClock(){ 
	 jf = new JFrame("考试倒计时");
	 begin = new JButton("开始考试");
	 end  = new JButton("结束考试");
	
	 p1=new  JPanel();
	 JLabel clock = new JLabel();
	 clock.setHorizontalAlignment(JLabel.CENTER);
	 p1.add(begin);

	 p1.add(end);
	 jf.add(p1,"North");
	 jf.add(clock,"Center");
	 jf.setSize(340,180);
	 jf.setLocation(500,300);
	 jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	 jf.setVisible(true);
     mt = new ClockDispaly(clock,1);   //设置考试时间为1分钟
     begin.addActionListener(this);

	 end.addActionListener(this);
   }
   public static void main(String[] args){
	 new TestClock();	
   }	
   public void actionPerformed(ActionEvent e){
	  String s = e.getActionCommand();
	  if(s.equals("开始考试")){
		 begin.setEnabled(false); 
	     mt.start( );            //启动倒计时线程
      }      			
	  else   if(s.equals("结束考试")){
         begin.setEnabled(false); 
 
         end.setEnabled(false);
         p1.setEnabled(false);
          mt.interrupt();
         System.exit(0);	
      }
   }		    		    
}
class ClockDispaly extends Thread{
   private JLabel lefttimer;

   private int testtime;	
   public ClockDispaly(JLabel lt,int time){
	  lefttimer = lt;
	  testtime = time*60;
   }	
   public void run( ){
      NumberFormat f = NumberFormat.getInstance();
      	//返回整数部分允许显示的最小整数位数
      f.setMinimumIntegerDigits(2);
     int h,m,s; 
      while (testtime >= 0) {
         h = testtime /3600;
         m = testtime %3600/60;
         s = testtime %60;
         StringBuffer sb = new StringBuffer("");
    sb.append("考试剩余时间: "+f.format(h) + ": " + f.format(m)+ ": " + f.format(s));
         lefttimer.setText(sb.toString());
        try{
        	Thread.sleep(1000);	
        }catch (Exception ex) { }
        testtime  = testtime  - 1;
      }
     JOptionPane.showMessageDialog(null,"\t考试时间到,结束考试！");	
     System.exit(0);
   }
 }
