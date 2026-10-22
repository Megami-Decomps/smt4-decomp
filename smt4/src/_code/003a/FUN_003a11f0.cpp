#include "common.h"

extern "C" {

struct SelectMenu;
void selectMenuHandlePendingRequest(SelectMenu *menu);

/* Handles the menu's pending requests below. */
void FUN_003a11f0(SelectMenu *menu)
{
    selectMenuHandlePendingRequest(menu);
}

} /* extern "C" */
