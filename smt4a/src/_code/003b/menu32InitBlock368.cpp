#include "shard/Shard003B.h"
#include "ui/UiSpriteState.h"

extern "C" {


void menu32InitBlock368(Menu32 *menu)
{
    if (menu == NULL) {
        return;
    }
    uiSpriteSelectAnim(menu->block368, 4);
    menu->unk3F4 = 0;
    menu->unk3F8 = 5;
}

} /* extern "C" */
