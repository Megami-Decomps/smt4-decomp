#include "common.h"

extern "C" {

typedef struct AocMain {
    /* 0x000 */ u8 unk000[0x678];
    /* 0x678 */ void *loader;
} AocMain;

extern AocMain *g_aocMain;

extern void FUN_00169548(s32 arg);
extern void FUN_003a76a8(s32 arg);
extern void FUN_001386e8(s32 arg);
extern void FUN_00137ea0(s32 arg);
extern void deletingDtor_002e56ec(void *object, void *callback);
extern void FUN_00473710(AocMain *aoc);
extern void ownerReleaseResources(AocMain *aoc);

/* Shuts the add-on content main down: releases its subsystems, deletes the loader and finishes the block. */
void aocMainShutdown(void)
{
    AocMain *aoc;

    FUN_00169548(0);
    FUN_003a76a8(1);
    FUN_001386e8(4);
    FUN_00137ea0(4);
    aoc = g_aocMain;
    if (aoc->loader != NULL) {
        deletingDtor_002e56ec(aoc->loader, (void *)0x47D8E8);
        aoc->loader = NULL;
    }
    FUN_00473710(aoc);
    ownerReleaseResources(aoc);
}

} /* extern "C" */
