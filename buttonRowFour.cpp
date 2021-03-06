#ifndef BUTTONROWFOUR_CPP_INCLUDED
#define BUTTONROWFOUR_CPP_INCLUDED

#include <gtk/gtk.h>
#include "buttons_deps.hpp"

class ButtonRowFour
{
public:
    static void main(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        button_1(win, main_calc_box, button);
        button_2(win, main_calc_box, button);
        button_3(win, main_calc_box, button);
    }
private:
    static void button_1(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        button = gtk_button_new_with_label(".");
        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(Calc().notDone), (gpointer) win);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 1, 4, 2, 1);
    }

    static void button_2(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        button = gtk_button_new_with_label("0");
        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(Calc().notDone), (gpointer) win);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 3, 4, 1, 1);
    }

    static void button_3(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        button = gtk_button_new_with_label("Enter");
        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(Calc().notDone), (gpointer) win);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 4, 4, 2, 1);
    }
};

#endif
