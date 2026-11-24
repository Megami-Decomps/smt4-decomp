#include "classes/AocMenu.h"
#include "addon/aocMain.h"

/* Unless a content flag (bit 2 or 3) is set, returns to state 3 and deletes the child. */
void AocMenu::leaveWhenAocFree()
{
    if (!aocMainIsBusy(g_aocMain)) {
        aocMenuChangeStep(this, 3);
    }
}
