module com.example.orderingsystem {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.orderingsystem to javafx.fxml;
    exports com.example.orderingsystem;
}