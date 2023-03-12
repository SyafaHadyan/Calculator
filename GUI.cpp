#include <nitisa/nitisa.h>
#include <Nitisa/Button.h>
#include <Nitisa/Window.h>
#include <Nitisa-14.0.0/nitisa/nitisa.h>

using namespace Nitisa;

class CalculatorWindow : public Window
{
private:
    TextField* input;
    Button* computeButton;
    Label* resultLabel;

public:
    CalculatorWindow()
    {
        // Set up the main window
        setTitle("Calculator");
        setSize(300, 150);
        setResizable(false);

        // Set up the input text field
        input = new TextField();
        input->setBounds(50, 20, 200, 30);
        addComponent(input);

        // Set up the compute button
        computeButton = new Button("Compute");
        computeButton->setBounds(100, 60, 100, 30);
        computeButton->setOnClick([&]() {
            // Get the input value
            double value = std::stod(input->getText().toStdString());

            // Compute the result
            double result = value * value;

            // Display the result
            resultLabel->setText(std::to_string(result));
        });
        addComponent(computeButton);

        // Set up the result label
        resultLabel = new Label("Result");
        resultLabel->setBounds(50, 100, 200, 30);
        addComponent(resultLabel);
    }
};

int main(int argc, char** argv)
{
    // Initialize the Nitisa framework
    Nitisa::init(argc, argv);

    // Create a new window
    CalculatorWindow window;

    // Run the event loop
    Nitisa::run();

    // Clean up the Nitisa framework
    Nitisa::cleanup();

    return 0;
}
