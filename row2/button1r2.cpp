#ifndef BUTTON1R2_CPP_INCLUDED
#define BUTTON1R2_CPP_INCLUDED

#include <gtk/gtk.h>

class Button1r2
{
public:
    static void main(GtkButton *wid, GObject *data)
    {
        gpointer win = g_object_get_data(G_OBJECT(data), "win");
        gpointer display = g_object_get_data(G_OBJECT(data), "display");
        buttonFunc(win, display);
    }

private:
    static void buttonFunc(gpointer win, gpointer display)
    {
        gtk_entry_set_text(GTK_ENTRY(display), "404 NOT FOUND");
    }
};

#endif
