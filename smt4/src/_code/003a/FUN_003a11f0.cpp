#include "common.h"

extern "C" {

struct SelectMenu;
void FUN_003a11f4(SelectMenu *menu);

/* Handles the menu's pending requests below. */
void FUN_003a11f0(SelectMenu *menu)
{
    FUN_003a11f4(menu);
}

} /* extern "C" */
