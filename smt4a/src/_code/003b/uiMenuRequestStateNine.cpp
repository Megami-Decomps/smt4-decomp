/* NON_MATCHING: retail uses `push {r4, lr}` where armcc emits `bxeq lr`. */
#include "common.h"

extern "C" {

struct Menu { u8 unk0000[0x387c]; u32 state; };
void statusIconSetKind(Menu *menu, s32 state);

s32 uiMenuRequestStateNine(Menu *menu)
{
    if (menu->state == 39) {
        return 0;
    }
    statusIconSetKind(menu, 9);
    return 1;
}

} /* extern "C" */
