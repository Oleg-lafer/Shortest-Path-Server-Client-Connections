#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>
#include <iostream>
#include <cstring>
#include <cstdlib>

// Function to simulate sending a request (placeholder)
void sendRequest(const QString& serverIP, int port, int start, int end) {
    // Here you would implement the actual socket communication
    std::cout << "Sending request to " << serverIP.toStdString() 
              << " on port " << port 
              << " with range: " << start << " to " << end << std::endl;
    // Simulate a response
    QMessageBox::information(nullptr, "Response", "Request sent successfully!");
}

// Main GUI application
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("TCP Client GUI");

    QVBoxLayout *layout = new QVBoxLayout;

    QLabel *label = new QLabel("Enter Server IP:");
    QLineEdit *ipInput = new QLineEdit;
    layout->addWidget(label);
    layout->addWidget(ipInput);

    label = new QLabel("Enter Port:");
    QLineEdit *portInput = new QLineEdit;
    layout->addWidget(label);
    layout->addWidget(portInput);

    label = new QLabel("Enter Start Value:");
    QLineEdit *startInput = new QLineEdit;
    layout->addWidget(label);
    layout->addWidget(startInput);

    label = new QLabel("Enter End Value:");
    QLineEdit *endInput = new QLineEdit;
    layout->addWidget(label);
    layout->addWidget(endInput);

    QPushButton *sendButton = new QPushButton("Send Request");
    layout->addWidget(sendButton);

    QObject::connect(sendButton, &QPushButton::clicked, [&]() {
        QString serverIP = ipInput->text();
        int port = portInput->text().toInt();
        int start = startInput->text().toInt();
        int end = endInput->text().toInt();
        sendRequest(serverIP, port, start, end);
    });

    window.setLayout(layout);
    window.show();

    return app.exec();
}