#include <gtkmm.h>
#include <iostream>

class MarianaTrenchWeb : public Gtk::Window {
    public:
        MarianaTrenchWeb() {
            set_title("MT web");
            set_default_size(800, 600);

            auto settings = Gtk::property_gtk_application_prefer_dark_theme() = true;

            mainBox.set_orientation(Gtk::Orientation::VERTICAL);
            set_child(mainBox);

            setup_header();
            setup_content();
        }
    
    private:
        Gtk::Box mainBox;
        Gtk::Box headerBox;
        Gtk::Button btn_back, btn_forward, btn_reload;
        Gtk::Entry addressBar;
        Gtk::Box contentArea;

        void setup_header() {

        }

        void setup_content() {

        }
}

int main(int argc, char* argv[]) {

    auto app = Gtk::Application::create("com.example.darkbrowser");
    BrowserWindow window;
    return app->run(window);

}