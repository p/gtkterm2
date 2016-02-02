/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <pwd.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>
#include <vte/vte.h>

#include "prefs.h"
#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window (gtkTermPref* pref)
{
  GtkWidget *window;
  GdkPixbuf *window_icon_pixbuf;
  GtkWidget *vbox;
  GtkWidget *menubar;
  GtkWidget *menuitem1;
  GtkWidget *menuitem1_menu;
  GtkWidget *new_tab;
  GtkWidget *image12;
  GtkWidget *separatormenuitem1;
  GtkWidget *close_tab;
  GtkWidget *image13;
  GtkWidget *close_window;
  GtkWidget *image14;
  //GtkWidget *menuitem2;
  //GtkWidget *menuitem2_menu;
  //GtkWidget *copy;
  //GtkWidget *paste;
  GtkWidget *menuitem3;
  GtkWidget *menuitem3_menu;
  GtkWidget *next_tab;
  GtkWidget *prev_tab;
  GtkWidget *full_screen;
  GtkWidget *image15;
  //GtkWidget *hide_menu;
  GtkWidget *menuitem4;
  GtkWidget *menuitem4_menu;
  GtkWidget *info;
  GtkWidget *image16;
  GtkWidget *notebook;
  //GtkWidget *empty_notebook_page;
  //GtkWidget *label;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window, "window");
  gtk_window_set_title (GTK_WINDOW (window), _("GTKTerm2"));
  window_icon_pixbuf = create_pixbuf ("gtkterm2.png");
  if (window_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (window), window_icon_pixbuf);
      gdk_pixbuf_unref (window_icon_pixbuf);
    }

  vbox = gtk_vbox_new (FALSE, 0);
  gtk_widget_set_name (vbox, "vbox");
  gtk_widget_show (vbox);
  gtk_container_add (GTK_CONTAINER (window), vbox);

  if(pref->winPosX>0 || pref->winPosY>0)
  {
	  gtk_window_move(GTK_WINDOW (window), pref->winPosX, pref->winPosY);
  }
  if(pref->stealth==TRUE)
  {
	  gtk_window_set_decorated(GTK_WINDOW (window), FALSE);
	  gtk_window_set_has_frame(GTK_WINDOW(window), FALSE);
	  gtk_window_set_skip_taskbar_hint(GTK_WINDOW(window), TRUE);
  }

  menubar = gtk_menu_bar_new ();
  gtk_widget_set_name (menubar, "menubar");
  gtk_widget_show (menubar);
  gtk_box_pack_start (GTK_BOX (vbox), menubar, FALSE, FALSE, 0);

  menuitem1 = gtk_menu_item_new_with_mnemonic (_("_File"));
  gtk_widget_set_name (menuitem1, "menuitem1");
  gtk_widget_show (menuitem1);
  gtk_container_add (GTK_CONTAINER (menubar), menuitem1);

  menuitem1_menu = gtk_menu_new ();
  gtk_widget_set_name (menuitem1_menu, "menuitem1_menu");
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem1), menuitem1_menu);

  new_tab = gtk_image_menu_item_new_with_mnemonic (_("New Tab"));
  gtk_widget_set_name (new_tab, "new_tab");
  gtk_widget_show (new_tab);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), new_tab);
  gtk_widget_add_accelerator (new_tab, "activate", accel_group,
                              GDK_n, GDK_CONTROL_MASK,
                              GTK_ACCEL_VISIBLE);

  image12 = gtk_image_new_from_stock ("gtk-new", GTK_ICON_SIZE_MENU);
  gtk_widget_set_name (image12, "image12");
  gtk_widget_show (image12);
  gtk_image_menu_item_set_image (GTK_IMAGE_MENU_ITEM (new_tab), image12);

  separatormenuitem1 = gtk_menu_item_new ();
  gtk_widget_set_name (separatormenuitem1, "separatormenuitem1");
  gtk_widget_show (separatormenuitem1);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), separatormenuitem1);
  gtk_widget_set_sensitive (separatormenuitem1, FALSE);

  close_tab = gtk_image_menu_item_new_with_mnemonic (_("Close Tab"));
  gtk_widget_set_name (close_tab, "close_tab");
  gtk_widget_show (close_tab);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), close_tab);

  image13 = gtk_image_new_from_stock ("gtk-close", GTK_ICON_SIZE_MENU);
  gtk_widget_set_name (image13, "image13");
  gtk_widget_show (image13);
  gtk_image_menu_item_set_image (GTK_IMAGE_MENU_ITEM (close_tab), image13);

  close_window = gtk_image_menu_item_new_with_mnemonic (_("Close Window"));
  gtk_widget_set_name (close_window, "close_window");
  gtk_widget_show (close_window);
  gtk_container_add (GTK_CONTAINER (menuitem1_menu), close_window);

  image14 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_MENU);
  gtk_widget_set_name (image14, "image14");
  gtk_widget_show (image14);
  gtk_image_menu_item_set_image (GTK_IMAGE_MENU_ITEM (close_window), image14);

  menuitem3 = gtk_menu_item_new_with_mnemonic (_("_View"));
  gtk_widget_set_name (menuitem3, "menuitem3");
  gtk_widget_show (menuitem3);
  gtk_container_add (GTK_CONTAINER (menubar), menuitem3);

  menuitem3_menu = gtk_menu_new ();
  gtk_widget_set_name (menuitem3_menu, "menuitem3_menu");
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem3), menuitem3_menu);

  next_tab = gtk_image_menu_item_new_with_mnemonic (_("Next Tab"));
  gtk_widget_set_name (next_tab, "next_tab");
  gtk_widget_show (next_tab);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), next_tab);
  gtk_widget_add_accelerator (next_tab, "activate", accel_group,
                              GDK_Right, GDK_SHFIT_MASK,
                              GTK_ACCEL_VISIBLE);
  if (0) gtk_widget_add_accelerator (next_tab, "activate", accel_group,
                              GDK_KP_Right, GDK_SHIFT_MASK,
                              GTK_ACCEL_VISIBLE);

  prev_tab = gtk_image_menu_item_new_with_mnemonic (_("Previous Tab"));
  gtk_widget_set_name (prev_tab, "prev_tab");
  gtk_widget_show (prev_tab);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), prev_tab);
  gtk_widget_add_accelerator (prev_tab, "activate", accel_group,
                              GDK_Left, GDK_SHIFT_MASK,
                              GTK_ACCEL_VISIBLE);
  if (0) gtk_widget_add_accelerator (prev_tab, "activate", accel_group,
                              GDK_KP_Left, GDK_SHIFT_MASK,
                              GTK_ACCEL_VISIBLE);

  full_screen = gtk_image_menu_item_new_with_mnemonic (_("Full Screen"));
  gtk_widget_set_name (full_screen, "full_screen");
  gtk_widget_show (full_screen);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), full_screen);

  image15 = gtk_image_new_from_stock ("gtk-zoom-fit", GTK_ICON_SIZE_MENU);
  gtk_widget_set_name (image15, "image15");
  gtk_widget_show (image15);
  gtk_image_menu_item_set_image (GTK_IMAGE_MENU_ITEM (full_screen), image15);

  /*hide_menu = gtk_menu_item_new_with_mnemonic (_("Hide menu"));
  gtk_widget_set_name (hide_menu, "hide_menu");
  gtk_widget_show (hide_menu);
  gtk_container_add (GTK_CONTAINER (menuitem3_menu), hide_menu);*/

  menuitem4 = gtk_menu_item_new_with_mnemonic (_("_Help"));
  gtk_widget_set_name (menuitem4, "menuitem4");
  gtk_widget_show (menuitem4);
  gtk_container_add (GTK_CONTAINER (menubar), menuitem4);

  menuitem4_menu = gtk_menu_new ();
  gtk_widget_set_name (menuitem4_menu, "menuitem4_menu");
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (menuitem4), menuitem4_menu);

  info = gtk_image_menu_item_new_with_mnemonic (_("Info"));
  gtk_widget_set_name (info, "info");
  gtk_widget_show (info);
  gtk_container_add (GTK_CONTAINER (menuitem4_menu), info);
  gtk_widget_add_accelerator (info, "activate", accel_group,
                              GDK_F1, 0,
                              GTK_ACCEL_VISIBLE);

  image16 = gtk_image_new_from_stock ("gtk-dialog-info", GTK_ICON_SIZE_MENU);
  gtk_widget_set_name (image16, "image16");
  gtk_widget_show (image16);
  gtk_image_menu_item_set_image (GTK_IMAGE_MENU_ITEM (info), image16);

  g_signal_connect ((gpointer) menubar, "destroy",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) new_tab, "activate",
                    G_CALLBACK (on_new_tab_activate),
                    pref);
  g_signal_connect ((gpointer) next_tab, "activate",
                    G_CALLBACK (on_next_tab_activate),
                    pref);
  g_signal_connect ((gpointer) prev_tab, "activate",
                    G_CALLBACK (on_prev_tab_activate),
                    pref);
  g_signal_connect ((gpointer) close_tab, "activate",
                    G_CALLBACK (on_close_tab_activate),
                    pref);
  g_signal_connect ((gpointer) close_window, "activate",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) full_screen, "activate",
                    G_CALLBACK (on_full_screen_activate),
                    pref);
  /*g_signal_connect ((gpointer) hide_menu, "activate",
                    G_CALLBACK (on_hide_menu_activate),
                    NULL);*/
  g_signal_connect ((gpointer) info, "activate",
                    G_CALLBACK (on_info_activate),
                    NULL);
  if(0) g_signal_connect ((gpointer) window, "key-press-event",
                    G_CALLBACK (nb_handle_key),
                    pref);
	/* Connect to the "status-line-changed" signal. */
	/*g_signal_connect(G_OBJECT(widget), "status-line-changed",
			 G_CALLBACK(status_line_changed), widget);*/

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window, window, "window");
  GLADE_HOOKUP_OBJECT (window, vbox, "vbox");
  GLADE_HOOKUP_OBJECT (window, menubar, "menubar");
  GLADE_HOOKUP_OBJECT (window, menuitem1, "menuitem1");
  GLADE_HOOKUP_OBJECT (window, menuitem1_menu, "menuitem1_menu");
  GLADE_HOOKUP_OBJECT (window, new_tab, "new_tab");
  GLADE_HOOKUP_OBJECT (window, image12, "image12");
  GLADE_HOOKUP_OBJECT (window, separatormenuitem1, "separatormenuitem1");
  GLADE_HOOKUP_OBJECT (window, close_tab, "close_tab");
  GLADE_HOOKUP_OBJECT (window, image13, "image13");
  GLADE_HOOKUP_OBJECT (window, close_window, "close_window");
  GLADE_HOOKUP_OBJECT (window, image14, "image14");
  GLADE_HOOKUP_OBJECT (window, menuitem3, "menuitem3");
  GLADE_HOOKUP_OBJECT (window, menuitem3_menu, "menuitem3_menu");
  GLADE_HOOKUP_OBJECT (window, full_screen, "full_screen");
  GLADE_HOOKUP_OBJECT (window, image15, "image15");
//  GLADE_HOOKUP_OBJECT (window, hide_menu, "hide_menu");
  GLADE_HOOKUP_OBJECT (window, menuitem4, "menuitem4");
  GLADE_HOOKUP_OBJECT (window, menuitem4_menu, "menuitem4_menu");
  GLADE_HOOKUP_OBJECT (window, info, "info");
  GLADE_HOOKUP_OBJECT (window, image16, "image16");

  notebook = gtk_notebook_new ();

  GLADE_HOOKUP_OBJECT (window, notebook, "notebook");

	gtk_notebook_set_tab_pos (GTK_NOTEBOOK (notebook), pref->notebookPanel);
	if (pref->showTabsByOneTerminal == 0)
    {
      gtk_notebook_set_show_tabs (GTK_NOTEBOOK (notebook), FALSE);
    }
	gtk_notebook_set_show_border(GTK_NOTEBOOK (notebook), FALSE);
  gtk_notebook_set_scrollable(GTK_NOTEBOOK(notebook), TRUE);
  gtk_widget_show (notebook);
  gtk_box_pack_start (GTK_BOX (vbox), notebook, TRUE, TRUE, 0);
  pref->notebook = notebook;
  GTK_WIDGET_UNSET_FLAGS (notebook, GTK_CAN_FOCUS);
  on_new_tab_activate((gpointer) new_tab, pref);

  gtk_window_add_accel_group (GTK_WINDOW (window), accel_group);


	if(pref->stealth==TRUE)
	{
		gtk_widget_hide(menubar);
	}

  return window;
}

GtkWidget*
create_window_about (void)
{
  GtkWidget *window_about;
  GdkPixbuf *window_about_icon_pixbuf;
  GtkWidget *vbox1;
  GtkWidget *notebook1;
  GtkWidget *label5;
  GtkWidget *label3;
  GtkWidget *label6;
  GtkWidget *label4;
  GtkWidget *window_about_close_button;

  window_about = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_name (window_about, "window_about");
  gtk_widget_set_size_request (window_about, 350, 250);
  gtk_window_set_title (GTK_WINDOW (window_about), _("About GTKTerm2"));
  gtk_window_set_resizable (GTK_WINDOW (window_about), FALSE);
  window_about_icon_pixbuf = create_pixbuf ("gtkterm2.png");
  if (window_about_icon_pixbuf)
    {
      gtk_window_set_icon (GTK_WINDOW (window_about), window_about_icon_pixbuf);
      gdk_pixbuf_unref (window_about_icon_pixbuf);
    }

  vbox1 = gtk_vbox_new (FALSE, 15);
  gtk_widget_set_name (vbox1, "vbox1");
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (window_about), vbox1);
  gtk_container_set_border_width (GTK_CONTAINER (vbox1), 15);

  notebook1 = gtk_notebook_new ();
  gtk_widget_set_name (notebook1, "notebook1");
  gtk_widget_show (notebook1);
  gtk_box_pack_start (GTK_BOX (vbox1), notebook1, TRUE, TRUE, 0);

  label5 = gtk_label_new (_("GTKTerm2 (v " VERSION ")\nCopyright (c) 2004 Oliver Feige"));
  gtk_widget_set_name (label5, "label5");
  gtk_widget_show (label5);
  gtk_container_add (GTK_CONTAINER (notebook1), label5);
  gtk_notebook_set_tab_label_packing (GTK_NOTEBOOK (notebook1), label5,
                                      TRUE, TRUE, GTK_PACK_START);
  gtk_widget_set_size_request (label5, 304, 48);
  GTK_WIDGET_SET_FLAGS (label5, GTK_CAN_FOCUS);
  gtk_label_set_selectable (GTK_LABEL (label5), TRUE);

  label3 = gtk_label_new (_("Information"));
  gtk_widget_set_name (label3, "label3");
  gtk_widget_show (label3);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label3);
  gtk_label_set_justify (GTK_LABEL (label3), GTK_JUSTIFY_LEFT);

  //label6 = gtk_label_new (_("Programmiert:\nOliver Feige <ofeige@gmx.de>\n\nIdee:\nOliver Feige <ofeige@gmx.de>\nStefan Bambach <sbambach@gmx.de>"));
  label6 = gtk_label_new (_("Programmer:\nOliver Feige <ofeige@gmx.de>\n\nIdea:\nOliver Feige <ofeige@gmx.de>\nStefan Bambach <sbambach@gmx.de>"));
  gtk_widget_set_name (label6, "label6");
  gtk_widget_show (label6);
  gtk_container_add (GTK_CONTAINER (notebook1), label6);
  gtk_notebook_set_tab_label_packing (GTK_NOTEBOOK (notebook1), label6,
                                      TRUE, TRUE, GTK_PACK_START);
  GTK_WIDGET_SET_FLAGS (label6, GTK_CAN_FOCUS);
  gtk_label_set_selectable (GTK_LABEL (label6), TRUE);

  label4 = gtk_label_new (_("Program of"));
  gtk_widget_set_name (label4, "label4");
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label4);
  gtk_label_set_justify (GTK_LABEL (label4), GTK_JUSTIFY_LEFT);

  window_about_close_button = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_set_name (window_about_close_button, "window_about_close_button");
  gtk_widget_show (window_about_close_button);
  gtk_box_pack_start (GTK_BOX (vbox1), window_about_close_button, FALSE, FALSE, 0);
  GTK_WIDGET_SET_FLAGS (window_about_close_button, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) window_about_close_button, "clicked",
                    G_CALLBACK (on_window_about_close_button_activate),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window_about, window_about, "window_about");
  GLADE_HOOKUP_OBJECT (window_about, vbox1, "vbox1");
  GLADE_HOOKUP_OBJECT (window_about, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window_about, label5, "label5");
  GLADE_HOOKUP_OBJECT (window_about, label3, "label3");
  GLADE_HOOKUP_OBJECT (window_about, label6, "label6");
  GLADE_HOOKUP_OBJECT (window_about, label4, "label4");
  GLADE_HOOKUP_OBJECT (window_about, window_about_close_button, "window_about_close_button");

  return window_about;
}

GtkWidget* create_terminal (GtkWidget *notebook, GtkWidget *window, gtkTermPref *pref)
{
	GtkWidget *hbox, *scrollbar, *widget;
	const char *working_directory = NULL;
	char *args[] = {"--login", NULL};
	// char *env_add[] = {"FOO=BAR", "BOO=BIZ", NULL};
	char *env_add[] = {NULL};
	struct passwd *pw;
	GString *shell;

	/* Get Window from Notebook */
	//window = lookup_widget(GTK_WIDGET(notebook), "window");

	/* Create a box to hold everything. */
	hbox = gtk_hbox_new(0, 0);
	//gtk_container_add(GTK_CONTAINER(notebook), hbox);
	gtk_notebook_append_page(GTK_NOTEBOOK (notebook), hbox, NULL);

	/* Create the terminal widget and add it to the scrolling shell. */
	widget = vte_terminal_new();
	//gtk_widget_set_double_buffered(widget, dbuffer);
	//gtk_box_pack_start(GTK_BOX(hbox), widget, TRUE, TRUE, 0);

	gtk_container_set_focus_child(GTK_CONTAINER(notebook), widget);

	/* Connect to the "char_size_changed" signal to set geometry hints
	 * whenever the font used by the terminal is changed. */
	// OF if (geometry) {
		char_size_changed(widget, 0, 0, window);
		g_signal_connect(G_OBJECT(widget), "char-size-changed",
				 G_CALLBACK(char_size_changed), window);
	// OF }

	/* Connect to the "window_title_changed" signal to set the main
	 * window's title. */
	g_signal_connect(G_OBJECT(widget), "window-title-changed",
			 G_CALLBACK(window_title_changed), pref);

	//g_signal_connect(G_OBJECT(widget), "commit",
	//		 G_CALLBACK(commit), pref);

	/* Connect to the "eof" signal to quit when the session ends. */
	g_signal_connect(G_OBJECT(widget), "eof",
			 G_CALLBACK(destroy_and_quit_eof), pref);
	g_signal_connect(G_OBJECT(widget), "child-exited",
			 G_CALLBACK(destroy_and_quit_exited), pref);

	/* Connect to the "status-line-changed" signal. */
	g_signal_connect(G_OBJECT(widget), "status-line-changed",
			 G_CALLBACK(status_line_changed), widget);

	/* Connect to the "button-press" event. */
	g_signal_connect(G_OBJECT(widget), "button-press-event",
			 G_CALLBACK(button_pressed), widget);

	/* Connect to application request signals. */
	g_signal_connect(G_OBJECT(widget), "iconify-window",
			 G_CALLBACK(iconify_window), window);
	g_signal_connect(G_OBJECT(widget), "deiconify-window",
			 G_CALLBACK(deiconify_window), window);
	g_signal_connect(G_OBJECT(widget), "raise-window",
			 G_CALLBACK(raise_window), window);
	g_signal_connect(G_OBJECT(widget), "lower-window",
			 G_CALLBACK(lower_window), window);
	g_signal_connect(G_OBJECT(widget), "maximize-window",
			 G_CALLBACK(maximize_window), window);
	g_signal_connect(G_OBJECT(widget), "restore-window",
			 G_CALLBACK(restore_window), window);
	g_signal_connect(G_OBJECT(widget), "refresh-window",
			 G_CALLBACK(refresh_window), window);
	g_signal_connect(G_OBJECT(widget), "resize-window",
			 G_CALLBACK(resize_window), window);
	g_signal_connect(G_OBJECT(widget), "move-window",
			 G_CALLBACK(move_window), window);
/*	g_signal_connect(G_OBJECT(widget), "contents-changed",
			 G_CALLBACK(on_commit), pref);*/

	/* Connect to font tweakage. */
	g_signal_connect(G_OBJECT(widget), "increase-font-size",
			 G_CALLBACK(increase_font_size), window);
	g_signal_connect(G_OBJECT(widget), "decrease-font-size",
			 G_CALLBACK(decrease_font_size), window);

	if (pref->terminalScrollbar == 0 || pref->maxScrollbackBuffer == 0 || pref->stealth == TRUE)
	{
		gtk_box_pack_start (GTK_BOX (hbox), widget, TRUE, TRUE, 0);
	}
	else
	{
		/* Create the scrollbar for the widget. */
		scrollbar = gtk_vscrollbar_new((VTE_TERMINAL(widget))->adjustment);
		if (pref->terminalScrollbar == 1)
		{
			gtk_box_pack_start (GTK_BOX (hbox), scrollbar, FALSE, TRUE, 0);
			gtk_box_pack_start (GTK_BOX (hbox), GTK_WIDGET(widget), TRUE, TRUE, 0);
		}
		else
		{
			gtk_box_pack_start (GTK_BOX (hbox), widget, TRUE, TRUE, 0);
			gtk_box_pack_start (GTK_BOX (hbox), scrollbar, FALSE, TRUE, 0);
		}
		gtk_widget_show (scrollbar);
	}


	/* Set some defaults. */
	vte_terminal_set_audible_bell(VTE_TERMINAL(widget), pref->beep);
	vte_terminal_set_cursor_blinks(VTE_TERMINAL(widget), pref->blink);
	vte_terminal_set_scroll_on_output(VTE_TERMINAL(widget), pref->scrollOnOutput);
	vte_terminal_set_scroll_on_keystroke(VTE_TERMINAL(widget), pref->scrollOnKeyStroke);
	vte_terminal_set_scrollback_lines(VTE_TERMINAL(widget), pref->maxScrollbackBuffer);
	vte_terminal_set_mouse_autohide(VTE_TERMINAL(widget), TRUE);
	vte_terminal_set_word_chars (VTE_TERMINAL(widget), pref->worldClass);
	vte_terminal_set_size (VTE_TERMINAL(widget), pref->termX, pref->termY);
	// OF if (background != NULL) {
	// OF 	vte_terminal_set_background_image_file(VTE_TERMINAL(widget),
	// OF 					       background);
	// OF }
	if (pref->transparent)
	{
		vte_terminal_set_background_transparent(VTE_TERMINAL(widget), TRUE);
		vte_terminal_set_background_saturation(VTE_TERMINAL(widget), (double) pref->opacity);
	}
	// OF vte_terminal_set_background_tint_color(VTE_TERMINAL(widget), &tint);
	vte_terminal_set_colors(VTE_TERMINAL(widget), &pref->fore[0], &pref->back[0], pref->colors, 16);
	// OF if (terminal != NULL) {
	// OF 	vte_terminal_set_emulation(VTE_TERMINAL(widget), terminal);
	// OF }

	/* Mess with our fontconfig setup. */
	mess_with_fontconfig();

	/* Set the default font. */
	// OF if (font != NULL) {
	vte_terminal_set_font_from_string(VTE_TERMINAL(widget), pref->terminalFont);
	// OF }

	/* Match "abcdefg". */
	//vte_terminal_match_add(VTE_TERMINAL(widget), "abcdefg");
	// OF if (dingus) {
	// OF if (FALSE) {
		// OF i = vte_terminal_match_add(VTE_TERMINAL(widget), DINGUS1);
		// OF gumby = gdk_cursor_new(GDK_GUMBY);
		// OF vte_terminal_match_set_cursor(VTE_TERMINAL(widget), i, gumby);
		// OF gdk_cursor_unref(gumby);
		// OF hand = gdk_cursor_new(GDK_HAND1);
		// OF i = vte_terminal_match_add(VTE_TERMINAL(widget), DINGUS2);
		// OF vte_terminal_match_set_cursor(VTE_TERMINAL(widget), i, hand);
		// OF gdk_cursor_unref(hand);
	// OF }

	// OF if (console) {
// OF 	if (FALSE) {
		/* Open a "console" connection. */
// OF 		int consolefd = -1, yes = 1, watch;
// OF 		GIOChannel *channel;
// OF 		consolefd = open("/dev/console", O_RDONLY | O_NOCTTY);
// OF 		if (consolefd != -1) {
			/* Assume failure. */
// OF 			console = FALSE;
#ifdef TIOCCONS
			if (ioctl(consolefd, TIOCCONS, &yes) != -1) {
				/* Set up a listener. */
				channel = g_io_channel_unix_new(consolefd);
				watch = g_io_add_watch(channel,
						       G_IO_IN,
						       read_and_feed,
						       widget);
				g_signal_connect(G_OBJECT(widget),
						 "eof",
						 G_CALLBACK(disconnect_watch),
						 GINT_TO_POINTER(watch));
				g_signal_connect(G_OBJECT(widget),
						 "child-exited",
						 G_CALLBACK(disconnect_watch),
						 GINT_TO_POINTER(watch));
				g_signal_connect(G_OBJECT(widget),
						 "realize",
						 G_CALLBACK(take_xconsole_ownership),
						 NULL);
#ifdef VTE_DEBUG
				vte_terminal_feed(VTE_TERMINAL(widget),
						  "Console log for ...\r\n",
						  -1);
#endif
				/* Record success. */
				console = TRUE;
			}
#endif
// OF 		} else {
			/* Bail back to normal mode. */
// OF 			g_warning(_("Could not open console.\n"));
// OF 			close(consolefd);
// OF 			console = FALSE;
// OF 		}
// OF 	}



	// OF if (!console) {
	if (!FALSE)
	{
		if(pref->login_shell == TRUE)
		{
			pw = getpwuid (getuid ());
			if (pw)
			{
				shell = g_string_new (pw->pw_shell);
			}
			else
			{
				shell = g_string_new ("/bin/sh");
			}
			vte_terminal_fork_command(VTE_TERMINAL(widget), shell->str, args, env_add, working_directory, TRUE, TRUE, TRUE);
		}
		else
		{
			vte_terminal_fork_command(VTE_TERMINAL(widget), NULL, NULL, env_add, working_directory, TRUE, TRUE, TRUE);
		}
	}

	/* Go for it! */
	gtk_widget_show_all(window);

	return widget;
}
