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
	 jf = new JFrame("���Ե���ʱ");
	 begin = new JButton("��ʼ����");
	 end  = new JButton("��������");
	
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
     mt = new ClockDispaly(clock,1);   //���ÿ���ʱ��Ϊ1����
     begin.addActionListener(this);

	 end.addActionListener(this);
   }
   public static void main(String[] args){
	 new TestClock();	
   }	
   public void actionPerformed(ActionEvent e){
	  String s = e.getActionCommand();
	  if(s.equals("��ʼ����")){
		 begin.setEnabled(false); 
	     mt.start( );            //��������ʱ�߳�
      }      			
	  else   if(s.equals("��������")){
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
      	//������������������ʾ����С����λ��
      f.setMinimumIntegerDigits(2);
     int h,m,s; 
      while (testtime >= 0) {
         h = testtime /3600;
         m = testtime %3600/60;
         s = testtime %60;
         StringBuffer sb = new StringBuffer("");
    sb.append("����ʣ��ʱ��: "+f.format(h) + ": " + f.format(m)+ ": " + f.format(s));
         lefttimer.setText(sb.toString());
        try{
        	Thread.sleep(1000);	
        }catch (Exception ex) { }
        testtime  = testtime  - 1;
      }
     JOptionPane.showMessageDialog(null,"\t����ʱ�䵽,�������ԣ�");	
     System.exit(0);
   }
 }
