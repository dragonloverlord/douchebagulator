#ifndef BUTTONROWTHREE_CPP_INCLUDED
#define BUTTONROWTHREE_CPP_INCLUDED

#include <gtk/gtk.h>
#include "buttons_deps.hpp"
#include "row_three_functions.hpp"

class ButtonRowThree
{
public:
    static void main(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button_1(win, main_calc_box, button, display);
        button_2(win, main_calc_box, button, display);
        button_3(win, main_calc_box, button, display);
        button_4(win, main_calc_box, button);
        button_5(win, main_calc_box, button);
    }
private:
    static void button_1(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("1");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button1r3().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 1, 3, 1, 1);
    }

    static void button_2(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("2");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button2r3().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 2, 3, 1, 1);
    }

    static void button_3(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("3");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button3r3().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 3, 3, 1, 1);
    }

    static void button_4(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        button = gtk_button_new_with_label("+");
        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(Calc().notDone), (gpointer) win);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 4, 3, 1, 1);
    }

    static void button_5(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        button = gtk_button_new_with_label("-");
        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(G_OBJECT(button), "clicked", G_CALLBACK(Calc().notDone), (gpointer) win);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 5, 3, 1, 1);
    }
};

#endif
