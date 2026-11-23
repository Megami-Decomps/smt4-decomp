#include "common.h"
#include "shop/ShopScreen.h"

extern "C" {

void buttonHelpShowEntryDescription(u32 id);
void buttonHelpSetText(const s8 *text, u32 style);

/* Shows the item under the current category's cursor, or the empty help line when the category's list
 * is empty. */
void shopDrawSelectedItem(ShopScreen *screen)
{
    if (screen->slotInfo[screen->slot].range.count > 0) {
        buttonHelpShowEntryDescription(shopSelectedItem(screen)->id);
        return;
    }
    buttonHelpSetText(NULL, 0x323232FF);
}

} /* extern "C" */
