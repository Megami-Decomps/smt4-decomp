#include "classes/AocMenu.h"

extern "C" void aocListMenuDrawRows(AocMenu *menu);

/* The selection screen draw callback: its body is the next function (the tail call links as a nop). */
void AocMenu::drawSelection()
{
    aocListMenuDrawRows(this);
}
