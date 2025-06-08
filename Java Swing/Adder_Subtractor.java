
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class LabTest2 {

    public static void main(String[] args) {
        JFrame frame = new JFrame("Lab test 2 ");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 250);
        frame.setLayout(null);

        JTextField num1Field = new JTextField();
        num1Field.setBounds(50, 50, 100, 30);

        JTextField num2Field = new JTextField();
        num2Field.setBounds(50, 90, 100, 30);

        JButton addButton = new JButton("Add");
        addButton.setBounds(220, 50, 100, 30);

        JButton subtractButton = new JButton("Subtract");
        subtractButton.setBounds(220, 90, 100, 30);

        JLabel resultLabel = new JLabel("Result: ");
        resultLabel.setBounds(150, 150, 200, 30);
        resultLabel.setFont(new Font("Arial", Font.BOLD, 20));

        addButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num1 = Integer.parseInt(num1Field.getText());
                int num2 = Integer.parseInt(num2Field.getText());
                int sum = num1 + num2;
                resultLabel.setText("Result: " + sum);
            }
        });

        subtractButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num1 = Integer.parseInt(num1Field.getText());
                int num2 = Integer.parseInt(num2Field.getText());
                int difference = num1 - num2;
                resultLabel.setText("Result: " + difference);
            }
        });

        frame.add(num1Field);
        frame.add(num2Field);
        frame.add(addButton);
        frame.add(subtractButton);
        frame.add(resultLabel);
        frame.setVisible(true);

    }
}
