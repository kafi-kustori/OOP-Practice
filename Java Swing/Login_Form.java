
import java.awt.Color;
import java.awt.Container;
import java.awt.Cursor;
import java.awt.Font;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JRadioButton;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class First {

    JFrame frame;

    public First() {

        // setting the window frame
        frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(650, 400);
        frame.setVisible(true);
        frame.setLocation(500, 200);
        frame.setTitle("CSE 1203");

        // setting the container
        Container c = frame.getContentPane();
        // c.setBackground(Color.DARK_GRAY);
        //Color color = new Color(200, 100, 0);
        // c.setBackground(color);
        c.setLayout(null);

        // working with Jlabel
        JLabel label = new JLabel();
        label.setText("Username");
        label.setBounds(50, 70, 90, 30);
        c.add(label);

        JLabel label3 = new JLabel();
        label3.setText("User Login Form");
        label3.setBounds(220, 20, 200, 30);
        label3.setForeground(Color.RED);
        c.add(label3);

        // setting fonts
        Font font = new Font("Arial", Font.BOLD, 25);
        label3.setFont(font);

        // Jtextfield
        JTextField text = new JTextField();
        // text.setText("enter your name ");
        text.setBounds(150, 70, 120, 30);
        text.setForeground(Color.BLUE);
        text.setBackground(Color.white);
        text.setEditable(true);
        c.add(text);

        JLabel label2 = new JLabel();
        label2.setText("Password");
        label2.setBounds(50, 120, 90, 30);
        c.add(label2);

        //JpasswordField
        JPasswordField text2 = new JPasswordField();
        text2.setBounds(150, 120, 120, 30);

        // text2.setForeground(Color.BLUE);
        text2.setBackground(Color.white);
        text2.setEchoChar('*');
        text2.setEchoChar((char) 0);
        text2.setEditable(true);
        c.add(text2);

        // Jbutton & Cursor class
        JButton btn = new JButton("Submit");
        btn.setBounds(250, 180, 90, 30);
        Cursor cursor = new Cursor(Cursor.HAND_CURSOR);
        btn.setCursor(cursor);
        btn.setEnabled(true);
        c.add(btn);

        // now it is  for clear  button
        JButton btn2 = new JButton("Clear");
        btn2.setBounds(350, 180, 90, 30);
        c.add(btn2);

        //Jradiobutton 
        JRadioButton rb1 = new JRadioButton();
        JRadioButton rb2 = new JRadioButton();
        //  ButtonGroup bg = new ButtonGroup();
        rb1.setBounds(400, 100, 100, 30);
        rb1.setText("Male");
        rb1.setBackground(Color.white);
        //c.add(rb1);

        rb2.setBounds(500, 100, 90, 30);
        rb2.setText("Female");
        rb2.setBackground(Color.WHITE);
        // c.add(rb2);

        // Jcheckbox
        JCheckBox cb = new JCheckBox("Agree");
        cb.setBounds(400, 60, 90, 30);
        cb.setBackground(Color.white);
        // c.add(cb);

        JCheckBox cb2 = new JCheckBox("Disagree");
        cb2.setBounds(500, 60, 90, 30);
        cb2.setBackground(Color.white);
        //c.add(cb2);

        //Jtextarea using
        //  JTextArea tx = new JTextArea();
        //tx.setBounds(500, 100, 90, 30);
        //tx.setBackground(Color.red);
        //c.add(tx);
        JTextArea tx = new JTextArea("            Welcome     ");
        tx.setBounds(220, 250, 200, 30); // Setting size and position
        tx.setForeground(Color.red);
        tx.setBackground(Color.yellow);
        tx.setFont(new Font("Arial", Font.BOLD, 20)); // Optional font styling
        c.add(tx);

        frame.repaint();

    }

    public static void main(String[] args) {

        First f = new First();

    }

}
