#include "classes/AocMenu.h"

extern "C" void FUN_003912a4(AocMenu *menu);

/* The selection screen draw callback: its body is the next function (the tail call links as a nop). */
void AocMenu::drawSelection()
{
    FUN_003912a4(this);
}
