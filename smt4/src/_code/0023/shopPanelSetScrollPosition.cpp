#include "shop/ShopPanel.h"

// Position the scrollbar at the first visible row and the cursor within that page.
extern "C" void shopPanelSetScrollPosition(ShopPanel *panel, s32 first, s32 selected)
{
    panel->firstRow = first;
    panel->selectedRow = selected;
}
