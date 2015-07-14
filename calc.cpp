#ifndef CALC_CPP_INCLUDED
#define CALC_CPP_INCLUDED

#include <gtk/gtk.h>

class Calc
{
public:
    static void notDone(GtkWidget *wid, GtkWidget *win)
    {
        notDoneWin(wid, win);
    }
private:
    static void notDoneWin(GtkWidget *wid, GtkWidget *win)
    {
        GtkWidget *dialog = NULL;

        dialog = gtk_message_dialog_new(GTK_WINDOW(win), GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_CLOSE, "Not Implemented Yet!");
        gtk_window_set_position(GTK_WINDOW(dialog), GTK_WIN_POS_CENTER);
        gtk_dialog_run(GTK_DIALOG(dialog));
        gtk_widget_destroy(dialog);
    }
};

#endif
