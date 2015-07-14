#include <cstdlib>
#include <gtk/gtk.h>
#include "rows.h"

int main (int argc, char *argv[])
{
    GtkWidget *button = NULL;
    GtkWidget *win = NULL;
    GtkWidget *main_calc_box = NULL;

    g_log_set_handler("Gtk", G_LOG_LEVEL_WARNING, (GLogFunc) gtk_false, NULL);
    gtk_init(&argc, &argv);
    g_log_set_handler("Gtk", G_LOG_LEVEL_WARNING, g_log_default_handler, NULL);

    win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_container_set_border_width(GTK_CONTAINER (win), 8);
    gtk_window_set_title(GTK_WINDOW(win), "Douchebagulator");
    gtk_window_set_position(GTK_WINDOW(win), GTK_WIN_POS_CENTER);
    gtk_widget_set_size_request(GTK_WIDGET(win), 316, 366);
    gtk_widget_realize(win);
    g_signal_connect(win, "destroy", gtk_main_quit, NULL);

    main_calc_box = gtk_grid_new();
    gtk_widget_set_hexpand(GTK_WIDGET(main_calc_box), TRUE);
    gtk_widget_set_vexpand(GTK_WIDGET(main_calc_box), TRUE);
    gtk_container_add(GTK_CONTAINER(win), main_calc_box);

    Rows().main(win, main_calc_box, button);

    gtk_widget_show_all (win);
    gtk_main ();
    std::exit(0);
}
