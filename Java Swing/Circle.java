
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

class CirclePanel extends JPanel {

    int radius = 50;

    public void paint(Graphics g) {
        g.setColor(Color.RED);
        g.drawOval(220 - radius / 2, 125 - radius / 2, radius, radius);
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
    Font font = new Font("Arial", Font.BOLD, 20);
    JButton plus_btn = new JButton("+");
    JButton minus_btn = new JButton("-");
    JPanel bottom_panel;
    CirclePanel circlePanel;

    public MyFrame() {
        setBounds(100, 100, 500, 400);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setTitle("My app");
        c = getContentPane();
        c.setLayout(null);

        plus_btn.setBounds(150 + 10, 20, 50, 50);
        plus_btn.setFont(font);
        plus_btn.addActionListener(this);
        minus_btn.setBounds(125 + 10 + 100, 20, 50, 50);
        minus_btn.setFont(font);;
        minus_btn.addActionListener(this);

        bottom_panel = new JPanel();
        bottom_panel.setBounds(20, 275, 450, 80);
        bottom_panel.setLayout(null);
        bottom_panel.add(plus_btn);
        bottom_panel.add(minus_btn);
        bottom_panel.setBackground(Color.GRAY);
        c.add(bottom_panel);

        circlePanel = new CirclePanel();
        circlePanel.setBounds(20, 20, 450, 250 - 10);
        circlePanel.setBackground(Color.BLUE);
        circlePanel.setLayout(null);
        c.add(circlePanel);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource().equals(plus_btn)) {
            circlePanel.IncreaseSize();
        }
        if (e.getSource().equals(minus_btn)) {
            circlePanel.DecreaseSize();
        }
        repaint();
    }
}

public class p2_new {

    public static void main(String[] args) {
        MyFrame frame = new MyFrame();
    }
}
