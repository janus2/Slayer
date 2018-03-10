// SettingsWindow.h
// Generated by Interface Elements (Window v2.2) on Jan 3 1999
// This is a user written class and will not be overwritten.

#ifndef _SETTINGSWINDOW_H_
#define _SETTINGSWINDOW_H_

#include "SettingsWindowDefs.h"
#include "Options.h"
#include <InterfaceKit.h>

class SettingsWindow : public BWindow
{
	BTextControl *refresh;
	BCheckBox	*save_window;
	BCheckBox	*save_workspace;
	BRadioButton *current_workspace,
		*all_workspaces,
		*saved_workspace;
	BMenuField* workspaces_field;
	Options saved_options;
	void OptionsToDialog();
	void SetRefreshDelay();
public:
	SettingsWindow(const char* title);
	~SettingsWindow(void);

	virtual void MessageReceived(BMessage *message);
	virtual void Quit();
};

#endif
