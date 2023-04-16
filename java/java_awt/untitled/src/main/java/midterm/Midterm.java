package midterm;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;


public class Midterm extends Frame implements ActionListener {

    /*
     * Things to-do:
     * 1. Unit Converter: Length, Mass, Volume
     * 2. Currency Converter: a. Dollar -> Peso b. any other currency
     * 3. Math Function: a. sqrt b. any other math function
     */

    // Components for Unit Converter
    Label lblUnitConverter = new Label("Unit Converter");
    Label lblLength = new Label("Length");
    Label lblMass = new Label("Mass");
    Label lblVolume = new Label("Volume");
    TextField txtLengthIn = new TextField(10);
    TextField txtMassIn = new TextField(10);
    TextField txtVolumeIn = new TextField(10);
    TextField txtLengthOut = new TextField(10);
    TextField txtMassOut = new TextField(10);
    TextField txtVolumeOut = new TextField(10);
    Choice chcLengthIn = new Choice();
    Choice chcMassIn = new Choice();
    Choice chcVolumeIn = new Choice();
    Choice chcLengthOut = new Choice();
    Choice chcMassOut = new Choice();
    Choice chcVolumeOut = new Choice();

    Button btnConvert1 = new Button("Convert");
    Button btnConvert2 = new Button("Convert");
    Button btnConvert3 = new Button("Convert");

    // Components for Currency Converter
    Label lblCurrencyConverter = new Label("Currency Converter");
    Label lblCurrency1 = new Label("Currency 1");
    Label lblCurrency2 = new Label("Currency 2");

    TextField txtCurrency1 = new TextField(10);
    TextField txtCurrency2 = new TextField(10);
    Choice chcCurrency = new Choice();
    Button btnConvert4 = new Button("Convert");

    // Components for Math Function
    Label lblMathFunction = new Label("Math Function");
    Label lblMathFunctionIn = new Label("Input Base Number");
    Label lblMathFunctionSub = new Label("Input Sub Number");
    Label lblMathFunctionOut = new Label("Output");
    CheckboxGroup cbgMathFunction = new CheckboxGroup();
    Checkbox cbSqrt = new Checkbox("Sqrt", cbgMathFunction, false);
    Checkbox cbSin = new Checkbox("Sin", cbgMathFunction, false);
    Checkbox cbCos = new Checkbox("Cos", cbgMathFunction, false);
    Checkbox cbTan = new Checkbox("Tan", cbgMathFunction, false);
    Checkbox cbRound = new Checkbox("Round", cbgMathFunction, false);
    TextField txtBaseIn = new TextField(10);
    TextField txtSubIn = new TextField(10);
    TextField txtOut = new TextField(10);
    Button btnConvert5 = new Button("Convert");

    public Midterm() {
        setLayout(new FlowLayout(FlowLayout.CENTER, 10, 10));
        setFont(new Font("Monospaced", Font.PLAIN, 12));

        String[] length = {"cm", "m"};
        String[] mass = {"g", "kg"};
        String[] volume = {"ml", "l"};

        // Unit Converter
        txtMassIn.addActionListener(this);
        txtLengthIn.addActionListener(this);
        txtVolumeIn.addActionListener(this);
        txtLengthOut.addActionListener(this);
        txtMassOut.addActionListener(this);
        txtVolumeOut.addActionListener(this);
        btnConvert1.addActionListener(this);
        btnConvert2.addActionListener(this);
        btnConvert3.addActionListener(this);

        // all output will be non-editable
        txtLengthOut.setEditable(false);
        txtMassOut.setEditable(false);
        txtVolumeOut.setEditable(false);

        chcLengthIn.add(length[0]);
        chcLengthIn.add(length[1]);

        chcMassIn.add(mass[0]);
        chcMassIn.add(mass[1]);

        chcVolumeIn.add(volume[0]);
        chcVolumeIn.add(volume[1]);

        chcLengthOut.add(length[0]);
        chcLengthOut.add(length[1]);

        chcMassOut.add(mass[0]);
        chcMassOut.add(mass[1]);

        chcVolumeOut.add(volume[0]);
        chcVolumeOut.add(volume[1]);

        Panel pnlUnitConverter = new Panel();
        Panel pnlUnitConverterBlock = new Panel();
        pnlUnitConverter.setLayout(new GridLayout(3, 6, 10, 10));
        pnlUnitConverter.add(lblLength);
        pnlUnitConverter.add(txtLengthIn);
        pnlUnitConverter.add(chcLengthIn);
        pnlUnitConverter.add(txtLengthOut);
        pnlUnitConverter.add(chcLengthOut);
        pnlUnitConverter.add(btnConvert1);

        pnlUnitConverter.add(lblMass);
        pnlUnitConverter.add(txtMassIn);
        pnlUnitConverter.add(chcMassIn);
        pnlUnitConverter.add(txtMassOut);
        pnlUnitConverter.add(chcMassOut);
        pnlUnitConverter.add(btnConvert2);

        pnlUnitConverter.add(lblVolume);
        pnlUnitConverter.add(txtVolumeIn);
        pnlUnitConverter.add(chcVolumeIn);
        pnlUnitConverter.add(txtVolumeOut);
        pnlUnitConverter.add(chcVolumeOut);
        pnlUnitConverter.add(btnConvert3);

        pnlUnitConverterBlock.setLayout(new GridLayout(2, 1, 10, 10));
        pnlUnitConverterBlock.add(lblUnitConverter);
        pnlUnitConverterBlock.add(pnlUnitConverter);

        // Currency Converter
        chcCurrency.add("USD -> PHP");
        chcCurrency.add("PHP -> USD");
        chcCurrency.add("USD -> JPY");
        chcCurrency.add("JPY -> USD");

        txtCurrency1.addActionListener(this);
        txtCurrency2.addActionListener(this);
        btnConvert4.addActionListener(this);

        Panel pnlCurrencyConverter = new Panel();
        pnlCurrencyConverter.setLayout(new GridLayout(4, 2, 5, 5));
        pnlCurrencyConverter.add(lblCurrency1);
        pnlCurrencyConverter.add(txtCurrency1);
        pnlCurrencyConverter.add(lblCurrency2);
        pnlCurrencyConverter.add(txtCurrency2);
        pnlCurrencyConverter.add(chcCurrency);
        pnlCurrencyConverter.add(btnConvert4);

        Panel pnlCurrencyConverterBlock = new Panel();
        pnlCurrencyConverterBlock.setLayout(new GridLayout(2, 1, 10, 10));
        pnlCurrencyConverterBlock.add(lblCurrencyConverter);
        pnlCurrencyConverterBlock.add(pnlCurrencyConverter);

        // Math Component
        txtBaseIn.addActionListener(this);
        txtSubIn.addActionListener(this);
        txtOut.addActionListener(this);
        btnConvert5.addActionListener(this);

        txtOut.setEditable(false);

        Panel pnlCheckboxMathFunction = new Panel();
        pnlCheckboxMathFunction.setLayout(new GridLayout(5, 1, 1, 5));
        pnlCheckboxMathFunction.add(cbSqrt);
        pnlCheckboxMathFunction.add(cbSin);
        pnlCheckboxMathFunction.add(cbCos);
        pnlCheckboxMathFunction.add(cbTan);
        pnlCheckboxMathFunction.add(cbRound);

        Panel pnlIOMathFunction = new Panel();
        pnlIOMathFunction.setLayout(new GridLayout(6, 2, 1, 1));
        pnlIOMathFunction.add(lblMathFunctionIn);
        pnlIOMathFunction.add(txtBaseIn);
        pnlIOMathFunction.add(lblMathFunctionSub);
        pnlIOMathFunction.add(txtSubIn);
        pnlIOMathFunction.add(lblMathFunctionOut);
        pnlIOMathFunction.add(txtOut);
        pnlIOMathFunction.add(new Label());
        pnlIOMathFunction.add(btnConvert5);

        Panel pnlMathFunction = new Panel();
        pnlMathFunction.setLayout(new FlowLayout(FlowLayout.CENTER, 1, 1));
        pnlMathFunction.add(pnlCheckboxMathFunction);
        pnlMathFunction.add(pnlIOMathFunction);

        Panel pnlMathFunctionBlock = new Panel();
        pnlMathFunctionBlock.setLayout(new GridLayout(2, 1, 10, 10));
        pnlMathFunctionBlock.add(lblMathFunction);
        pnlMathFunctionBlock.add(pnlMathFunction);

        add(pnlUnitConverterBlock);
        add(pnlCurrencyConverterBlock);
        add(pnlMathFunctionBlock);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == btnConvert1) {
            double lengthIn = Double.parseDouble(txtLengthIn.getText());
            double lengthOut = 0;
            if (chcLengthIn.getSelectedItem().equals("cm")) {
                if (chcLengthOut.getSelectedItem().equals("cm")) {
                    lengthOut = lengthIn;
                } else if (chcLengthOut.getSelectedItem().equals("m")) {
                    lengthOut = lengthIn / 100;
                }
            } else if (chcLengthIn.getSelectedItem().equals("m")) {
                if (chcLengthOut.getSelectedItem().equals("cm")) {
                    lengthOut = lengthIn * 100;
                } else if (chcLengthOut.getSelectedItem().equals("m")) {
                    lengthOut = lengthIn;
                }
            }
            txtLengthOut.setText(String.valueOf(lengthOut));
        }
        if (e.getSource() == btnConvert2) {
            double massIn = Double.parseDouble(txtMassIn.getText());
            double massOut = 0;
            if (chcMassIn.getSelectedItem().equals("g")) {
                if (chcMassOut.getSelectedItem().equals("g")) {
                    massOut = massIn;
                } else if (chcMassOut.getSelectedItem().equals("kg")) {
                    massOut = massIn / 1000;
                }
            } else if (chcMassIn.getSelectedItem().equals("kg")) {
                if (chcMassOut.getSelectedItem().equals("g")) {
                    massOut = massIn * 1000;
                } else if (chcMassOut.getSelectedItem().equals("kg")) {
                    massOut = massIn;
                }
            }
            txtMassOut.setText(String.valueOf(massOut));
        }
        if (e.getSource() == btnConvert3) {
            double volumeIn = Double.parseDouble(txtVolumeIn.getText());
            double volumeOut = 0;
            if (chcVolumeIn.getSelectedItem().equals("ml")) {
                if (chcVolumeOut.getSelectedItem().equals("ml")) {
                    volumeOut = volumeIn;
                } else if (chcVolumeOut.getSelectedItem().equals("l")) {
                    volumeOut = volumeIn / 1000;
                }
            } else if (chcVolumeIn.getSelectedItem().equals("l")) {
                if (chcVolumeOut.getSelectedItem().equals("ml")) {
                    volumeOut = volumeIn * 1000;
                } else if (chcVolumeOut.getSelectedItem().equals("l")) {
                    volumeOut = volumeIn;
                }

            }
            txtVolumeOut.setText(String.valueOf(volumeOut));
        }
    }


    public static void main(String[] args) {
        Midterm AppWin = new Midterm();
        AppWin.setTitle("Midterm Hands-On Exercise");
        AppWin.setSize(700, 300);
        AppWin.setLocation(600, 400);
        AppWin.setResizable(true);
        AppWin.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });
        AppWin.show();
    }
}
