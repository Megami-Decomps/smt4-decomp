#include "common.h"
#include "classes/Obj536044.h"
#include "shop/ShopSelectedItem.h"

extern "C" {

void screenShowMessage(s32 id);
void buttonHelpSetText(const s8 *text, u32 color);

/* Shows the message of the item under the active category's cursor, or the empty help line when the
 * category's list is empty. */
void shopDrawSelectedItem(Obj536044 *shop)
{
    if (shop->slotInfo[shop->slot].range.count > 0) {
        screenShowMessage(shop->selectedItem()->id);
        return;
    }
    buttonHelpSetText(NULL, 0x323232FF);
}

} /* extern "C" */
