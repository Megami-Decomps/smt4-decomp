#include "shard/Shard0031.h"

extern "C" {

extern s32 onlineObjectThreadRootStart(ObjectThreadRoot *root, s32 priority);

/* Stores the thread's start parameters, then starts it. */
void onlineObjectThreadRootSetupStart(ObjectThreadRoot *root, u32 arg2C, u32 arg24, u32 arg28, u32 arg30, s32 priority)
{
    root->unk30 = arg30;
    root->unk28 = arg28;
    root->unk24 = arg24;
    root->unk2C = arg2C;
    onlineObjectThreadRootStart(root, priority);
}

} /* extern "C" */
