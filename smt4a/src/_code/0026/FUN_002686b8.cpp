/* NON_MATCHING: retail reads unk7F4/unk7F5 through the hoisted `object + 0x700` base (r6) used for touchRegionCount; armcc here addresses them off object directly. */
#include "shard/Shard0033.h"

extern "C" {

extern Obj7ECRef g_useCounter;

void ifTouchRegionRemove(void);
void FUN_0019de98(void *target, u32 color);
void buttonHelpSetHelpState(s32 mode);
void buttonHelpSetMode(s32 mode);

/* Release every touch region, then close the overlay unless the screen is in mode 1 or 2. */
void FUN_002686b8(void)
{
    Obj7EC *object = g_useCounter.instance;
    object->unk744 = 4;
    for (s32 i = 0; i < object->touchRegionCount; ++i) {
        object->touchRegions[i] = -1;
        ifTouchRegionRemove();
    }
    if (object->unk74E == 2 || object->unk74E == 1) {
        return;
    }
    if (object->unk7F4 != 0) {
        if (object->unk7F5 != 0) {
            buttonHelpSetHelpState(1);
        } else {
            FUN_0019de98(object->unk7F6, 0xF4F4F4FF);
        }
        object->unk7F4 = 0;
    } else {
        buttonHelpSetMode(0);
    }
}

} /* extern "C" */
