#include "nn/os/HandleSlot.h"

struct TransferMemoryOwner {
    u8 unk00[0x14];
    HandleSlot slot;
};

extern "C" {
void nn_os_TransferMemoryBlock_Finalize(TransferMemoryOwner *owner);

TransferMemoryOwner *FUN_0042d03c(TransferMemoryOwner *owner)
{
    nn_os_TransferMemoryBlock_Finalize(owner);
    HandleSlot *slot = closeSlot(&owner->slot);
    return (TransferMemoryOwner *)((u8 *)slot - 0x14);
}
}
