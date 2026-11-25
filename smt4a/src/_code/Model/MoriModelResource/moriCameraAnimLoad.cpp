/* NON_MATCHING: the table walk now uses the camera constructor's inline. Retail keeps the first
 * block's previous table in sl and the slot-4 NULL transfer source in a stack slot; this build
 * spills the previous table there instead, changing register allocation across the copies. */
#include "classes/Obj557af8.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdGfxContext.h"

#define MEMORY_DEFAULT 0x10000
#define MEMORY_MAIN 0x20000
#define MEMORY_EXTRA 0x30000

/* The table pointers of a loaded camera animation; slots 2-4 are replaced by the allocated blocks. */
struct CameraAnimTables {
    /* 0x00 */ const void *slots[6];
    /* 0x18 */ void *alignedA;
    /* 0x1C */ void *alignedB;
    /* 0x20 */ const void *alignedAMirror;
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
void _ZN18AsdAnimCameraState10InitializeEPK21AsdAnimCameraResourceP18AsdAnimCameraSetup(void *state, void *resource, CameraAnimTables *setup);

/* Loads a camera animation resource into `state`: points its six tables into the resource, then
 * allocates the animation blocks from the requested heaps (falling back to the resource itself when
 * the heap is not selectable or full) and flushes the blocks it copied. */
void moriCameraAnimLoad(u8 *state, u8 *resource, s32 kindC, s32 kindA, s32 kindB)
{
    CameraAnimState *anim = (CameraAnimState *)state;
    CameraAnimTables *t = &anim->tables;
    asdAnimCameraResolveTables((const AsdAnimCameraResource *)resource, t->slots);
    t->alignedA = NULL;
    t->alignedB = NULL;
    const void *previousA = NULL;
    if (*(s32 *)(resource + 0x2C) != 0) {
        previousA = t->slots[3];
        void *block = NULL;
        if (kindA != MEMORY_DEFAULT) {
            if (kindA == MEMORY_MAIN) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 131);
                block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x2C), 1);
            } else if (kindA == MEMORY_EXTRA) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 134);
                block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x2C), 1);
            }
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
        if (kindC != MEMORY_DEFAULT) {
            if (kindC == MEMORY_MAIN) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 188);
                block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x28), 1);
            } else if (kindC == MEMORY_EXTRA) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 191);
                block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x28), 1);
            }
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
        if (kindD != MEMORY_DEFAULT) {
            if (kindD == MEMORY_MAIN) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 218);
                block = asdMemoryAlloc(MEMORY_MAIN, 0x100, 0, *(u32 *)(resource + 0x3C), 1);
            } else if (kindD == MEMORY_EXTRA) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelResource.cpp", 221);
                block = asdMemoryAlloc(MEMORY_EXTRA, 0x100, 0, *(u32 *)(resource + 0x3C), 1);
            }
        }
        if (block != NULL) {
            t->alignedB = block;
            anim->fourthBlockCopy = block;
        } else {
            kindD = MEMORY_DEFAULT;
        }
    }
    _ZN18AsdAnimCameraState10InitializeEPK21AsdAnimCameraResourceP18AsdAnimCameraSetup(state + 0xC, resource, t);
    if (kindA != MEMORY_DEFAULT && *(s32 *)(resource + 0x2C) != 0)
        asdGxQueueMemoryTransfer(previousA, (void *)t->slots[3], *(u32 *)(resource + 0x2C));
    if (*(s32 *)(resource + 0x30) != 0 && kindB != MEMORY_DEFAULT)
        asdGxQueueMemoryTransfer(NULL, (void *)t->slots[4], *(u32 *)(resource + 0x30));
    if (kindC != MEMORY_DEFAULT && *(s32 *)(resource + 0x28) != 0)
        asdGxQueueMemoryTransfer(t->alignedAMirror, (void *)t->slots[2], *(u32 *)(resource + 0x28));
    if (kindD != MEMORY_DEFAULT && *(s32 *)(resource + 0x3C) != 0)
        asdGxQueueMemoryTransfer(t->alignedBMirror, t->alignedB, *(u32 *)(resource + 0x3C));
}

} /* extern "C" */
