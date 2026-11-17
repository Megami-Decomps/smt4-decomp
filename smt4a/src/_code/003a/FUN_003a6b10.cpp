/* NON_MATCHING: scheduling only: same stores and calls, but retail loads g_messageMain first and interleaves the constant moves and the vstr differently. */
#include "ui/MessageMainA.h"
#include "sys/RuntimeObjects.h"

extern "C" {

void uiSpriteStateInitFromSource(void *record, u32 value0, u32 value4, void *source, u16 value38, f32 value20);

/* Shows the value popup on the banner window with `value` and its float form, and starts its sprite animation. */
u32 FUN_003a6b10(s32 value)
{
    MessageWindowA *banner = g_messageMain.banner;

    banner->popupShown = 1;
    banner->unk0170 = 20;
    f32 valueFloat = (f32)value;
    banner->popupValue = value;
    banner->unk0174 = 20;
    banner->unk018C = 0;
    banner->popupEnabled = 1;
    banner->popupValueCopy = value;
    banner->popupValueFloat = valueFloat;
    uiSpriteStateInitFromSource(&banner->sprites[17], 8, 0xffffffff, &banner->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[17], 0x17);
    uiSpriteSelectAnim(&banner->sprites[17], 6);
    return 1;
}

} /* extern "C" */
