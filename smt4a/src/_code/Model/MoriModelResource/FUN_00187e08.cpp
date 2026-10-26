/* NON_MATCHING: allocation sites now repeat the heap-kind selection inline with their asdDebugTrace(MoriModelResource.cpp, line) calls like retail (lines 131/134, 159/162, 176, 188/191, 208, 218/221); remaining differences are register numbering and the shared fallthrough jumps */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

#define MEMORY_DEFAULT 0x10000
#define MEMORY_MAIN 0x20000
#define MEMORY_EXTRA 0x30000

/* The table pointers of a loaded camera animation; slots 2-4 are replaced by the allocated blocks. */
struct CameraAnimTables {
    /* 0x00 */ void *slots[6];
    /* 0x18 */ void *alignedA;
    /* 0x1C */ void *alignedB;
    /* 0x20 */ void *alignedAMirror;
    /* 0x24 */ void *alignedBMirror;
};

/* The loaded camera animation state (only the fields set here). */
struct CameraAnimState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 stateBlock[0x38];
    /* 0x44 */ void *keyBlockCopy;
    /* 0x48 */ void *curveBlockCopy;
    /* 0x4C */ void *alignedBlockCopy;
    /* 0x50 */ void *thirdBlockCopy;
    /* 0x54 */ void *fourthBlockCopy;
    /* 0x58 */ void *lastBlockCopy;
    /* 0x5C */ CameraAnimTables tables;
};

extern "C" {
void *asdMemoryAlloc(u32 kind, u32 alignment, u32 region, u32 size, u32 option);
void *asdMemoryAllocAligned(u32 kind, u32 alignment, u32 region, u32 size, u32 align, u32 option);
void FUN_0017cf74(void *from, void *to);
void _ZN18AsdAnimCameraState10InitializeEPK21AsdAnimCameraResourceP18AsdAnimCameraSetup(void *state, void *resource);

/* Loads a camera animation resource into `state`: points its six tables into the resource, then
 * allocates the animation blocks from the requested heaps (falling back to the resource itself when
 * the heap is not selectable or full) and flushes the blocks it copied. */
void FUN_00187e08(u8 *state, u8 *resource, s32 kindC, s32 kindA, s32 kindB)
{
    CameraAnimState *anim = (CameraAnimState *)state;
    CameraAnimTables *t = &anim->tables;
    s32 *tableOffset = (s32 *)(resource + 8);
    s32 *tablePresent = (s32 *)(resource + 0x20);
    for (s32 i = 0; i < 6; i++)
        t->slots[i] = tablePresent[i] != 0 ? resource + tableOffset[i] : NULL;
    t->alignedA = NULL;
    t->alignedB = NULL;
    void *previousA = NULL;
    if (*(s32 *)(resource + 0x2C) != 0) {
        previousA = t->slots[3];
        void *block = NULL;
        if (kindA == MEMORY_MAIN) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 131);
            block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x2C), 1);
        } else if (kindA == MEMORY_EXTRA) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 134);
            block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x2C), 1);
        }
        if (block != NULL) {
            t->slots[3] = block;
            anim->keyBlockCopy = block;
        } else {
            kindA = MEMORY_DEFAULT;
        }
    }
    if (*(s32 *)(resource + 0x30) != 0 && kindB != MEMORY_DEFAULT) {
        void *block = NULL;
        if (kindB == MEMORY_MAIN) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 159);
            block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x30), 1);
        } else if (kindB == MEMORY_EXTRA) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 162);
            block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x30), 1);
        }
        if (block != NULL) {
            t->slots[4] = block;
            anim->curveBlockCopy = block;
        }
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 176);
    void *aligned = asdMemoryAllocAligned(MEMORY_DEFAULT, 0x100, 0, *(u32 *)(resource + 0x38), 4, 1);
    t->alignedA = aligned;
    anim->alignedBlockCopy = aligned;
    t->alignedAMirror = t->slots[2];
    if (*(s32 *)(resource + 0x28) != 0) {
        void *block = NULL;
        if (kindC == MEMORY_MAIN) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 188);
            block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x28), 1);
        } else if (kindC == MEMORY_EXTRA) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 191);
            block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x28), 1);
        }
        if (block != NULL) {
            t->slots[2] = block;
            anim->thirdBlockCopy = block;
        } else {
            kindC = MEMORY_DEFAULT;
        }
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 208);
    void *alignedB = asdMemoryAllocAligned(MEMORY_DEFAULT, 0x100, 0, *(u32 *)(resource + 0x3C), 0x10, 1);
    t->alignedB = alignedB;
    t->alignedBMirror = alignedB;
    anim->lastBlockCopy = alignedB;
    s32 kindD = kindC;
    if (*(s32 *)(resource + 0x3C) != 0) {
        void *block = NULL;
        if (kindD == MEMORY_MAIN) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 218);
            block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x3C), 1);
        } else if (kindD == MEMORY_EXTRA) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 221);
            block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x3C), 1);
        }
        if (block != NULL) {
            t->alignedB = block;
            anim->fourthBlockCopy = block;
        } else {
            kindD = MEMORY_DEFAULT;
        }
    }
    _ZN18AsdAnimCameraState10InitializeEPK21AsdAnimCameraResourceP18AsdAnimCameraSetup(state + 0xC, resource);
    if (kindA != MEMORY_DEFAULT && *(s32 *)(resource + 0x2C) != 0)
        FUN_0017cf74(previousA, t->slots[3]);
    if (*(s32 *)(resource + 0x30) != 0 && kindB != MEMORY_DEFAULT)
        FUN_0017cf74(NULL, t->slots[4]);
    if (kindC != MEMORY_DEFAULT && *(s32 *)(resource + 0x28) != 0)
        FUN_0017cf74(t->alignedAMirror, t->slots[2]);
    if (kindD != MEMORY_DEFAULT && *(s32 *)(resource + 0x3C) != 0)
        FUN_0017cf74(t->alignedBMirror, t->alignedB);
}

} /* extern "C" */
