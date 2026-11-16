#include "classes/AocMenu.h"

extern "C" void aocListMenuDrawRows(AocMenu *menu);

// The linker elides this tail branch into the next draw implementation.
void AocMenu::drawSelection()
{
    aocListMenuDrawRows(this);
}
