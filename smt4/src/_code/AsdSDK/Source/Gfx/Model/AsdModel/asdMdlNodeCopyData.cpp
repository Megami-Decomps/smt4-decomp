/* NON_MATCHING: only register assignment differs: retail builds the description through r1 and puts the constant 0 argument in r1 just before FUN_002b3acc, armcc here uses r0 and sets r1 early (and loads r8 later). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"

/* How a model is built: the default is a two-flag description with four- and eight-byte units. */
struct AsdMdlBuildDesc {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x04 */ u32 unit0;
    /* 0x08 */ u32 unit1;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ void *unk14;
    /* 0x18 */ void *unk18;
    /* 0x1C */ void *unk1c;

    AsdMdlBuildDesc() : unk00(1), unk01(1), unit0(4), unit1(8), unk0c(1), unk10(0), unk14(0), unk18(0), unk1c(0) {}
};

extern "C" {
struct AsdGfxSettings {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ s32 sharedModels;
};
extern AsdGfxSettings g_gfxSettings;

void *FUN_002b3acc(AsdMdlBuildDesc *desc, s32 mode, u32 value, void *allocator);
void FUN_002fb604(void *model);
void FUN_002a9244(AsdMdlNode *node);
void FUN_001457ec(AsdMdlNode *node, s32 value);
void *asdMemoryAlloc(u32 size, u32 alignment, u32 flags, u32 bytes, u32 enabled);

// Copy a model node: build the model for the copy (a shared or a fresh one), take a reference on
// the model data and give the copy its one-entry table.
void asdMdlNodeCopyData(AsdMdlNode *dest, AsdMdlNode *source, s32 mode)
{
    if (mode == 1) {
        AsdMdlResource *resource = source->resource;
        resource->state->flags->flags |= 1;
        void *allocator = asdMemoryGetAllocatorA();
        u32 handle = source->resource->unk008;
        AsdMdlBuildDesc desc;
        desc.unk1c = source->resource->state;
        desc.unk14 = source->resource;
        desc.unk18 = source->resource;
        dest->resource = (AsdMdlResource *)FUN_002b3acc(&desc, 0, handle, allocator);
    } else if (mode == 0) {
        void *allocator = asdMemoryGetAllocatorA();
        u32 handle = source->resource->unk008;
        AsdMdlBuildDesc desc;
        desc.unk10 = 0x834;
        dest->resource = (AsdMdlResource *)FUN_002b3acc(&desc, 0, handle, allocator);
    }
    if (source->unk00 & 2) {
        FUN_002fb604(dest->resource);
        dest->unk00 |= 2;
        g_gfxSettings.sharedModels++;
    }
    dest->data = source->data;
    (*(s32 *)dest->data)++;
    dest->count = 1;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x1244);
    dest->table = (void **)asdMemoryAlloc(0x100, 0x100, 0, dest->count << 2, 1);
    dest->table[0] = dest->resource;
    if (mode == 0) {
        FUN_002a9244(dest);
    }
    FUN_001457ec(dest, ((s32 *)dest->data)[3]);
}
}
