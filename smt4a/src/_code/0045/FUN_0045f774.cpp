#include "common.h"

struct PointerSlot {
    u8 unk00[0x10];
    void *value; // 0x10
};

// Clear the pointer slot.
extern "C" void FUN_0045f774(PointerSlot *slot)
{
    slot->value = NULL;
}
