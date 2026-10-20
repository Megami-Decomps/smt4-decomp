#include "shard/Shard003C.h"

extern "C" {

typedef struct JobBlock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ HandleSet *set;
} JobBlock;

extern s32 scrGetArg(s32 index);
extern void asdMemFree(void *ptr);
extern s32 FUN_00162ea4(void);
extern void handleSetReset(HandleSet *set);

/* Script command: frees the job block when it is empty (returns 1), else releases its handle set once ready. */
u32 scrCommReleaseJobBlock(s32 argIndex)
{
    JobBlock *block = (JobBlock *)scrGetArg(argIndex);
    u32 result;

    if (block == NULL) {
        result = 1;
    } else {
        if (block->unk00 == 0) {
            asdMemFree(block);
            return 1;
        }
        if (FUN_00162ea4() != 0) {
            handleSetReset(block->set);
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
