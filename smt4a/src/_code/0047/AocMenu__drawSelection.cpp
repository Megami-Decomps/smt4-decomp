#include "classes/AocMenu.h"

extern "C" void FUN_0047a484(AocMenu *menu);

// The linker elides this tail branch into the next draw implementation.
void AocMenu::drawSelection()
{
    FUN_0047a484(this);
}
