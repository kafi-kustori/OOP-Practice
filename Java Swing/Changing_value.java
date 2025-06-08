
import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class MyFrame1 extends JFrame implements ActionListener {

    Container c;
    JButton plus = new JButton("+");
    JButton minus = new JButton("-");
    JLabel counterLabel;
    int count = 0;

    public MyFrame1() {
        setBounds(100, 100, 500, 400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        c = getContentPane();
        c.setLayout(null);

        plus.setBounds(120, 180, 50, 50);
        plus.setFont(new Font("Arial", Font.BOLD, 20));
        plus.setBackground(Color.RED);
        plus.addActionListener(this);

        minus.setBounds(300, 180, 50, 50);
        minus.setFont(new Font("Arial", Font.BOLD, 20));
        minus.setBackground(Color.RED);
        minus.addActionListener(this);

        counterLabel = new JLabel(String.valueOf(count));
        counterLabel.setBounds(220, 100, 50, 50);
        counterLabel.setFont(new Font("Arial", Font.BOLD, 30));
        c.add(counterLabel);

        c.add(plus);
        c.add(minus);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource().equals(plus)) {
            count++;
            counterLabel.setText(String.valueOf(count));
        }

        if (e.getSource().equals(minus)) {
            if (count > 0) {
                count--;
                counterLabel.setText(String.valueOf(count));
            }
        }
    }

    public static void main(String[] args) {
        new MyFrame1();
    }
}
