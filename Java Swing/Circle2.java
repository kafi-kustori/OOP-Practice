
import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

class circle extends JPanel {

    int radius = 50;

    public void paint(Graphics g) {

        g.setColor(Color.BLACK);
        g.drawOval(50, 50, radius, radius);

    }

    public void IncreaseSize() {

        radius += 10;

    }

    public void DecreaseSize() {

        radius -= 10;

    }

}

class MyFrame extends JFrame implements ActionListener {

    Container c;
    circle d;
    Font font = new Font("Arial", Font.BOLD, 20);
    JButton plus = new JButton("+");
    JButton minus = new JButton("-");
    JPanel bottomJPanel;

    public MyFrame() {

        setBounds(100, 100, 500, 400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("My app");
        c = getContentPane();
        c.setLayout(null);

        plus.setBounds(120, 10, 50, 50);
        plus.setFont(font);
        plus.setBackground(Color.RED);
        plus.addActionListener(this);

        minus.setBounds(300, 10, 50, 50);
        minus.setFont(font);
        minus.setBackground(Color.RED);
        minus.addActionListener(this);

        JPanel bottomJPanel = new JPanel();
        bottomJPanel.setBounds(20, 250, 450, 80);
        bottomJPanel.setLayout(null);
        bottomJPanel.setBackground(Color.DARK_GRAY);
        bottomJPanel.add(plus);
        bottomJPanel.add(minus);
        c.add(bottomJPanel);

        d = new circle();
        d.setBounds(20, 20, 450, 200);
        d.setBackground(Color.GREEN);
        d.setLayout(null);
        c.add(d);

    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if (e.getSource().equals(plus)) {

            d.IncreaseSize();

        }

        if (e.getSource().equals(minus)) {

            d.DecreaseSize();

        }

        repaint();

    }

}

public class Practice {

    public static void main(String[] args) {

        MyFrame frame = new MyFrame();

    }

}
