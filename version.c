#include <iostream>
#include <gtk/gtk.h>

int main(int argc, char *argv[]) {

    gtk_init(&argc, &argv);

    std::cout<<"GTK+ version: %d.%d.%d\n"<< gtk_major_version<<std::endl;
    std::cout<<"Glib version: %d.%d.%d\n"<< glib_major_version<<std::endl;    
        
    return 0;
}
