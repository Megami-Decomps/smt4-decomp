/* NON_MATCHING: uses the callable svcCloseHandle wrapper rather than retail's inlined SVC; native destructor scheduling differs. */
#include "common.h"
struct TransferMemoryOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 memoryBlock[20];
    /* 0x1C */ u32 firstHandle;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ u32 secondHandle;
};
extern "C" {
extern const u32 DAT_0055b3d0[];
s32 svcCloseHandle(u32 handle);
void nn_os_TransferMemoryBlock_Finalize(void *block);
TransferMemoryOwner *FUN_0043b55c(TransferMemoryOwner *object)
{
    object->vtable = DAT_0055b3d0;
    if (object->secondHandle) {
        svcCloseHandle(object->secondHandle);
        object->secondHandle = 0;
    }
    nn_os_TransferMemoryBlock_Finalize(object->memoryBlock);
    if (object->firstHandle) {
        svcCloseHandle(object->firstHandle);
        object->firstHandle = 0;
    }
    return object;
}
}
