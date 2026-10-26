#include "nn/os/HandleSlot.h"

struct HandleOwner4 {
    u32 unk00;
    HandleSlot slot;
};

extern "C" {
HandleOwner4 *FUN_00356314(HandleOwner4 *owner)
{
    HandleSlot *slot = closeSlot(&owner->slot);
    return (HandleOwner4 *)((u8 *)slot - 4);
}
}
