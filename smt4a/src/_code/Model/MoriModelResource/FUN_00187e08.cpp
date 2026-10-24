/* NON_MATCHING: readable rebuild of the camera animation resource setup (draft: the pointers returned by the allocator restored from the condition they feed); retail repeats each heap-kind selection inline with shared fallthrough jumps (the draft's gotos) and keeps the memory kinds in different registers than armcc here. */
#include "common.h"

#define MEMORY_DEFAULT 0x10000
#define MEMORY_MAIN 0x20000
#define MEMORY_EXTRA 0x30000

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
    /* 0x5C */ void *tables[6];   /* the six table pointers; slots 2-4 are replaced by the allocated blocks */
    /* 0x74 */ void *alignedA;
    /* 0x78 */ void *alignedB;
    /* 0x7C */ void *alignedAMirror;
    /* 0x80 */ void *alignedBMirror;
};

extern "C" {
void *asdMemoryAlloc(u32 kind, u32 alignment, u32 region, u32 size, u32 option);
void *asdMemoryAllocAligned(u32 kind, u32 alignment, u32 region, u32 size, u32 align, u32 option);
void FUN_0017cf74(void *from, void *to);
void _ZN18AsdAnimCameraState10InitializeEPK21AsdAnimCameraResourceP18AsdAnimCameraSetup(void *state, void *resource);

/* Whether a memory kind names one of the two selectable heaps. */
static __inline bool selectableKind(s32 kind)
{
    return kind == MEMORY_MAIN || kind == MEMORY_EXTRA;
}

/* Loads a camera animation resource into `state`: points its six tables into the resource, then
 * allocates the animation blocks from the requested heaps (falling back to the resource itself when
 * the heap is not selectable or full) and flushes the blocks it copied. */
void FUN_00187e08(u8 *state, u8 *resource, s32 kindC, s32 kindA, s32 kindB)
{
    CameraAnimState *anim = (CameraAnimState *)state;
    s32 *tableOffset = (s32 *)(resource + 8);
    s32 *tablePresent = (s32 *)(resource + 0x20);
    for (s32 i = 0; i < 6; i++)
        anim->tables[i] = tablePresent[i] != 0 ? resource + tableOffset[i] : NULL;
    anim->alignedA = NULL;
    anim->alignedB = NULL;
    void *previousA = NULL;
    if (*(s32 *)(resource + 0x2C) != 0) {
        previousA = anim->tables[3];
        void *block = selectableKind(kindA) ? asdMemoryAlloc(kindA, 0x100, 0, *(u32 *)(resource + 0x2C), 1) : NULL;
        if (block != NULL) {
            anim->tables[3] = block;
            anim->keyBlockCopy = block;
        } else {
            kindA = MEMORY_DEFAULT;
        }
    }
    if (*(s32 *)(resource + 0x30) != 0 && kindB != MEMORY_DEFAULT && selectableKind(kindB)) {
        void *block = asdMemoryAlloc(kindB, 0x100, 0, *(u32 *)(resource + 0x30), 1);
        if (block != NULL) {
            anim->tables[4] = block;
            anim->curveBlockCopy = block;
        }
    }
    void *aligned = asdMemoryAllocAligned(MEMORY_DEFAULT, 0x100, 0, *(u32 *)(resource + 0x38), 4, 1);
    anim->alignedA = aligned;
    anim->alignedBlockCopy = aligned;
    anim->alignedAMirror = anim->tables[2];
    if (*(s32 *)(resource + 0x28) != 0) {
        void *block = selectableKind(kindC) ? asdMemoryAlloc(kindC, 0x100, 0, *(u32 *)(resource + 0x28), 1) : NULL;
        if (block != NULL) {
            anim->tables[2] = block;
            anim->thirdBlockCopy = block;
        } else {
            kindC = MEMORY_DEFAULT;
        }
    }
    void *alignedB = asdMemoryAllocAligned(MEMORY_DEFAULT, 0x100, 0, *(u32 *)(resource + 0x3C), 0x10, 1);
    anim->alignedB = alignedB;
    anim->alignedBMirror = alignedB;
    anim->lastBlockCopy = alignedB;
    s32 kindD = kindC;
    if (*(s32 *)(resource + 0x3C) != 0) {
        void *block = selectableKind(kindC) ? asdMemoryAlloc(kindC, 0x100, 0, *(u32 *)(resource + 0x3C), 1) : NULL;
        if (block != NULL) {
            anim->alignedB = block;
            anim->fourthBlockCopy = block;
        } else {
            kindD = MEMORY_DEFAULT;
        }
    }
    _ZN18AsdAnimCameraState10InitializeEPK21AsdAnimCameraResourceP18AsdAnimCameraSetup(state + 0xC, resource);
    if (kindA != MEMORY_DEFAULT && *(s32 *)(resource + 0x2C) != 0)
        FUN_0017cf74(previousA, anim->tables[3]);
    if (*(s32 *)(resource + 0x30) != 0 && kindB != MEMORY_DEFAULT)
        FUN_0017cf74(NULL, anim->tables[4]);
    if (kindC != MEMORY_DEFAULT && *(s32 *)(resource + 0x28) != 0)
        FUN_0017cf74(anim->alignedAMirror, anim->tables[2]);
    if (kindD != MEMORY_DEFAULT && *(s32 *)(resource + 0x3C) != 0)
        FUN_0017cf74(anim->alignedBMirror, anim->alignedB);
}

} /* extern "C" */
