#include "common.h"

extern "C" {

void FUN_00168980(void);
void FUN_0035b304(void);
void FUN_0037b450(void);
void texOwner1480Free(u32 *member);
void FUN_00493154(void);
void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);

typedef struct Scene {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x64];
    /* 0x68 */ u32 member68[1];
} Scene;
extern Scene *DAT_00587f28;

/* Shuts the scene down: runs the four clean-up calls, then stops its job, destroys its member and frees it. */
void FUN_00212170(void)
{
    FUN_00168980();
    FUN_00493154();
    FUN_0035b304();
    FUN_0037b450();
    if (DAT_00587f28 != NULL) {
        jobStop(DAT_00587f28->job, 0);
        texOwner1480Free(DAT_00587f28->member68);
        asdMemFree(DAT_00587f28);
        DAT_00587f28 = NULL;
    }
}

} /* extern "C" */
