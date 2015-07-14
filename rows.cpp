#ifndef ROWS_CPP_INCLUDED
#define ROWS_CPP_INCLUDED

#include <gtk/gtk.h>
#include "buttons.h"

class Rows
{
public:
    static void main(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        GtkWidget *display = NULL;

        display = row_1(win, main_calc_box);
        row_2(win, main_calc_box, button, display);
        row_3(win, main_calc_box, button);
        row_4(win, main_calc_box, button);
        row_5(win, main_calc_box, button);
    }

private:
    static GtkWidget* row_1(GtkWidget *win, GtkWidget *main_calc_box)
    {
        GtkWidget *display = NULL;

        display = Display().main(win, main_calc_box);

        return display;
    }

    static void row_2(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button, GtkWidget *display)
    {
        ButtonRowOne().main(win, main_calc_box, button, display);
    }

    static void row_3(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        ButtonRowTwo().main(win, main_calc_box, button);
    }

    static void row_4(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        ButtonRowThree().main(win, main_calc_box, button);
    }

    static void row_5(GtkWidget *win, GtkWidget *main_calc_box, GtkWidget *button)
    {
        ButtonRowFour().main(win, main_calc_box, button);
    }
};

#endif
