#include <gtkmm.h>
#include <iostream>

class MarianaTrenchWeb : public Gtk::Window {
    public:
        MTWeb() {
            set_title("MarianaTrench");
            set_default_size(600, 800);
        }
};