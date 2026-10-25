/* NON_MATCHING: structure matches retail; register allocation is permuted (retail keeps the part in r5 and the zero in r9, the kind in sl) and the inlined block clone narrows the handler index differently, as in FUN_00222180. */
#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "AsdSDK/Source/Gfx/Effect/effPartsBlock.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"

struct EffPartNode;

/* The part's list view: a doubly linked list of nodes. */
struct EffWords4 {
    u32 w[4];
};

struct EffPartList {
    /* 0x00 */ EffWords4 first;
    /* 0x10 */ EffWords4 second;
    /* 0x20 */ u8 unk20[0x48];
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u8 unk6c[8];
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u8 unk78[8];
    /* 0x80 */ s32 count;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ EffPartNode *tail;
    /* 0x8C */ EffPartNode *head;
};

/* One node of a part: a 0x90-byte part image, its data block and the list links. */
struct EffPartNode {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88;
    /* 0x89 */ u8 unk89;
    /* 0x8A */ u8 unk8a;
    /* 0x8B */ u8 unk8b[5];
    /* 0x90 */ EffBlock *block;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ EffPartNode *next;
    /* 0xB0 */ EffPartNode *previous;
    /* 0xB4 */ u8 unkB4[0xC];
};

struct EffOrientation {
    u32 x, y, z;
    f32 w;
};

extern "C" {
extern const char g_effPartsSourcePath[];
extern EffBlockHandler g_handlerTable[];
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 category, u32 track);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_002a3d58(void *part);
void FUN_002a3ab0(EffPartList *part, const EffOrientation *orientation);
void FUN_002a3958(EffPartList *part, const EffOrientation *orientation);
void FUN_002a36fc(EffPartList *part, f32 scale);
void FUN_002a353c(EffPartList *part, s32 value);

/* Create an empty part (the body of effPartCreate). */
static inline EffPartList *effPartNew(void)
{
    asdDebugTrace(g_effPartsSourcePath, 1463);
    EffPartList *part = (EffPartList *)memAlloc(0x10000, 0x100, 0, 0x90, 0x10, 1);
    memClear(part, 0x90);
    part->count = 0;
    part->unk84 = 0;
    FUN_002a3d58(part);
    return part;
}

/* Create a block like `source` with its own copy of the data object (the body of FUN_00222180). */
static inline EffBlock *effBlockClone(EffBlock *source)
{
    u16 kind = source->kind;
    asdDebugTrace(g_effPartsSourcePath, 46);
    EffBlock *block = (EffBlock *)memAlloc(0x10000, 0x100, 0, sizeof(EffBlock), 0x10, 1);
    block->flags = 0;
    block->unk08 = 0;
    block->unk0c = 0;
    block->dataA = NULL;
    block->sizeA = 0;
    block->ownedA = NULL;
    block->unk1c = 0;
    block->dataB = NULL;
    block->sizeB = 0;
    block->ownedB = NULL;
    block->id = 0xDC;
    block->kind = kind;
    block->tagA = source->tagA;
    block->tagB = source->tagB;
    block->unk08 = (u32)g_handlerTable[kind].clone((void *)source->unk08);
    return block;
}

// Copy a part: its header words, then a clone of every node in its list.
EffPartList *FUN_00248f70(EffPartList *source)
{
    EffPartList *part = effPartNew();
    part->first = source->first;
    part->second = source->second;
    part->unk74 = source->unk74;
    part->unk68 = source->unk68;
    for (EffPartNode *node = source->head; node != NULL; node = node->next) {
        asdDebugTrace(g_effPartsSourcePath, 1482);
        EffPartNode *copy = (EffPartNode *)memAlloc(0x10000, 0x100, 0, 0xC0, 0x10, 1);
        memClear(copy, 0xC0);
        memClear(copy, 0x90);
        copy->unk84 = 1;
        copy->unk88 = 8;
        copy->unk89 = 0;
        copy->unk8a = 0;
        FUN_002a3d58(copy);

        EffBlock *block = effBlockClone(node->block);
        copy->block = block;
        __aeabi_memcpy4(copy, node, 0x90);
        copy->next = NULL;
        if (part->tail != NULL) {
            part->tail->next = copy;
            copy->previous = part->tail;
        } else {
            part->head = copy;
            copy->previous = NULL;
        }
        part->tail = copy;
        part->count++;
    }
    f32 unitScale = 1.0f;
    EffOrientation orientation;
    orientation.x = 0;
    orientation.y = 0;
    orientation.z = 0;
    orientation.w = unitScale;
    FUN_002a3ab0(part, &orientation);
    FUN_002a3958(part, &orientation);
    FUN_002a36fc(part, unitScale);
    FUN_002a353c(part, -1);
    return part;
}

}
