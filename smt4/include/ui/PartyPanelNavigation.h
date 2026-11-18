#ifndef SMT4_UI_PARTY_PANEL_NAVIGATION_H
#define SMT4_UI_PARTY_PANEL_NAVIGATION_H

struct GridNavigation;

extern "C" {
// Page actions share the cursor interface; these two actions do not inspect it.
void partyPanelToggleRefresh(GridNavigation *cursor);
void FUN_002932d8(GridNavigation *cursor);
}

#endif
