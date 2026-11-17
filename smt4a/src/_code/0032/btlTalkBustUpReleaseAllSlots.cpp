/* Starts the closing animation of every loaded portrait sprite and clears the active flag. */
#include "ui/UiSpriteApi.h"
#include "battle/Talk/btlTalkBustUp.h"
#include "ui/UiControl.h"

extern "C" {

void btlTalkBustUpReleaseAllSlots(void)
{
    BtlTalkBustUp *manager = g_btlTalkBustUp;
    s32 i;

    if (manager != NULL) {
        for (i = 0; i < 5; i++) {
            if (manager->sprites[i].resources != NULL) {
                uiSpriteSelectAnim(&manager->sprites[i], 1);
            }
        }
        manager->active = 0;
    }
}

}
