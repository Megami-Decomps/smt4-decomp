#include "common.h"

extern "C" {

void onlineInstantiationContextClearByIndex(void *object, u32 a, u32 b, s32 flag);
void onlineInstantiationContextClearSlot(u8 *slot);

/* With `flag` set forwards to onlineInstantiationContextClearByIndex, otherwise clears the slot at +4. */
void FUN_00107008(u8 *object, u32 a, u32 b, s32 flag)
{
    if (flag != 0) {
        onlineInstantiationContextClearByIndex(object, a, b, flag);
        return;
    }
    onlineInstantiationContextClearSlot(object + 4);
}

} /* extern "C" */
