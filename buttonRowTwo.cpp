#ifndef BUTTONROWTWO_CPP_INCLUDED
#define BUTTONROWTWO_CPP_INCLUDED

#include <gtk/gtk.h>
#include "buttons_deps.hpp"
#include "row_two_functions.hpp"

class ButtonRowTwo
{
public:
    static void main(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button_1(win, main_calc_box, button, display);
        button_2(win, main_calc_box, button, display);
        button_3(win, main_calc_box, button, display);
        button_4(win, main_calc_box, button, display);
        button_5(win, main_calc_box, button, display);
    }

private:
    static void button_1(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("4");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button1r2().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 1, 2, 1, 1);
    }

    static void button_2(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("5");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button2r2().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 2, 2, 1, 1);
    }

    static void button_3(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("6");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button3r2().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 3, 2, 1, 1);
    }

    static void button_4(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("X");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button4r2().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 4, 2, 1, 1);
    }

    static void button_5(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        button = gtk_button_new_with_label("/");

        g_object_set_data(G_OBJECT(button), "win", win);
        g_object_set_data(G_OBJECT(button), "display", display);

        gtk_widget_set_hexpand(GTK_WIDGET(button), TRUE);
        gtk_widget_set_vexpand(GTK_WIDGET(button), TRUE);
        gtk_container_set_border_width(GTK_CONTAINER(button), 3);
        g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(Button5r2().main), (gpointer) button);
        gtk_grid_attach(GTK_GRID(main_calc_box), button, 5, 2, 1, 1);
    }
};

#endif
