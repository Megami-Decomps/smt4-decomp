#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/effBehavior.h"

extern "C" {

typedef struct Slot {
    u8 unk00[0x14];
    s32 value; /* 0x14 */
} Slot;


/* Forwards to the function that follows it in the binary. */
void refSlotAssign(Slot *slot, s32 value)
{
    slot->value = value;
    refCountIncrement(reinterpret_cast<int *>(value));
}

} /* extern "C" */
