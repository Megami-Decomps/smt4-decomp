/* Starts the closing animation of every loaded portrait sprite and clears the active flag. */
#include "battle/Talk/btlTalkBustUp.h"

extern "C" {

extern void spriteStartAnimationByIndex(UiSpriteState *sprite, s32 index);

void btlTalkBustUpReleaseAllSlots(void)
{
    BtlTalkBustUp *manager = g_btlTalkBustUp;
    s32 i;

    if (manager != NULL) {
        for (i = 0; i < 5; i++) {
            if (manager->sprites[i].resources != NULL) {
                spriteStartAnimationByIndex(&manager->sprites[i], 1);
            }
        }
        manager->active = 0;
    }
}

}
