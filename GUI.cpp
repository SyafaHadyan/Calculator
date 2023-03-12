#include <gtk/gtk.h>

class Calculator {
public:
    Calculator() {
        // Create the main window
        window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
        gtk_window_set_title(GTK_WINDOW(window), "Calculator");
        gtk_container_set_border_width(GTK_CONTAINER(window), 10);
        g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        // Create the input entry
        input = gtk_entry_new();
        gtk_entry_set_width_chars(GTK_ENTRY(input), 20);
        gtk_entry_set_alignment(GTK_ENTRY(input), 1.0);
        gtk_container_add(GTK_CONTAINER(window), input);

        // Create the compute button
        computeButton = gtk_button_new_with_label("Compute");
        g_signal_connect(computeButton, "clicked", G_CALLBACK(compute), this);
        gtk_container_add(GTK_CONTAINER(window), computeButton);

        // Create the result label
        resultLabel = gtk_label_new("Result");
        gtk_label_set_width_chars(GTK_LABEL(resultLabel), 20);
        gtk_label_set_alignment(GTK_LABEL(resultLabel), 1.0);
        gtk_container_add(GTK_CONTAINER(window), resultLabel);

        // Show all components
        gtk_widget_show_all(window);
    }

    static void compute(GtkWidget* widget, gpointer data) {
        // Get the input value
        Calculator* calculator = static_cast<Calculator*>(data);
        const gchar* inputText = gtk_entry_get_text(GTK_ENTRY(calculator->input));
        double value = atof(inputText);

        // Compute the result
        double result = value * value;

        // Set the result label
        gchar* resultText = g_strdup_printf("%g", result);
        gtk_label_set_text(GTK_LABEL(calculator->resultLabel), resultText);
        g_free(resultText);
    }

private:
    GtkWidget* window;
    GtkWidget* input;
    GtkWidget* computeButton;
    GtkWidget* resultLabel;
};

int main(int argc, char* argv[]) {
    // Initialize GTK library
    gtk_init(&argc, &argv);

    // Create the calculator GUI
    Calculator calculator;

    // Run the main loop
    gtk_main();

    return 0;
}
