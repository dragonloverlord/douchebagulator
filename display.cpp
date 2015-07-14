#ifndef DISPLAY_CPP_INCLUDED
#define DISPLAY_CPP_INCLUDED

#include <gtk/gtk.h>

class Display
{
public:
    static GtkWidget* main(GtkWidget *win, GtkWidget *main_calc_box)
    {
        GtkWidget *display = NULL;
        GtkWidget *display_box = NULL;

        display = display_field(win, main_calc_box, display_box);

        return display;
    }

private:
    static GtkWidget* display_field(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *display_box)
    {
        display_box = gtk_entry_new();
        gtk_entry_set_text(GTK_ENTRY(display_box), "Go Away I'm Not In The Mood");
        g_object_set(G_OBJECT(display_box), "editable", FALSE, NULL);
        gtk_grid_attach(GTK_GRID(main_calc_box), display_box, 1, 0, 5, 1);

        return display_box;
    }
};

#endif
