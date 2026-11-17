#include "ui/MessageMainA.h"
#include "shop/ShopItemDescription.h"

extern "C" {

/* Returns the banner window's choice result. */
u32 messageGetChoiceResult(void)
{
    return g_messageMain.banner->choiceResult;
}

} /* extern "C" */
