/* NON_MATCHING: retail's function symbol excludes the string literal armcc emits right after the function; the code itself is identical and fdiff only reports the trailing literal-pool row(s) */
/* Builds the file path for the current entry and starts loading it, then switches to state 4 (only if the resource is ready). */
#include "common.h"

extern "C" {

typedef struct Loader {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ u32 state;
    /* 0x02C */ u32 stateStep;
    /* 0x030 */ u8 unk030[0x6C];
    /* 0x09C */ u8 resource[0xCC0];
    /* 0xD5C */ s32 pathBase;
    /* 0xD60 */ u8 unkD60[0x0C];
    /* 0xD6C */ u32 listener;
    /* 0xD70 */ u8 unkD70[4];
    /* 0xD74 */ u32 target;
} Loader;

extern s32 FUN_0022b14c(void *resource);
extern void FUN_002be624(u8 *buffer, const char *format, s32 arg);
extern u32 FUN_00290d74(u32 listener, u8 *buffer);
extern void FUN_00296f4c(u32 target, u32 handle);

void FUN_003ba460(Loader *loader)
{
    u8 path[32];

    if (FUN_0022b14c(loader->resource) != 0) {
        FUN_002be624(path, "%s", loader->pathBase + 0x20);
        FUN_00296f4c(loader->target, FUN_00290d74(loader->listener, path));
        loader->state = 4;
        loader->stateStep = 0;
    }
}

}
