/* NON_MATCHING: only register assignment differs: retail builds the description through r1 and puts the constant 0 argument in r1 just before FUN_002b3acc, armcc here uses r0 and sets r1 early (and loads r8 later). */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gfx/ModelBoneLookup.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/asdMemoryGetAllocatorA.h"
#include "gfx/GfxSettings.h"

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

AsdMdlSceneNode *FUN_002b3acc(AsdMdlBuildDesc *desc, s32 mode, ModelBoneResource *resource, void *allocator);
void FUN_002fb604(AsdMdlSceneNode *sceneNode);
void asdMdlNodeBuildMotionTables(AsdMdlNode *node);
void FUN_001457ec(AsdMdlNode *node, u8 *data);
void *asdMemoryAlloc(u32 size, u32 alignment, u32 flags, u32 bytes, u32 enabled);

// Copy a model node: build the model for the copy (a shared or a fresh one), take a reference on
// the model data and give the copy its one-entry table.
void asdMdlNodeCopyData(AsdMdlNode *dest, AsdMdlNode *source, s32 mode)
{
    if (mode == 1) {
        AsdMdlSceneNode *sceneNode = source->sceneNode;
        sceneNode->skeleton->resource->flags |= 1;
        void *allocator = asdMemoryGetAllocatorA();
        ModelBoneResource *handle = source->sceneNode->boneResource;
        AsdMdlBuildDesc desc;
        desc.unk1c = source->sceneNode->skeleton;
        desc.unk14 = source->sceneNode;
        desc.unk18 = source->sceneNode;
        dest->sceneNode = FUN_002b3acc(&desc, 0, handle, allocator);
    } else if (mode == 0) {
        void *allocator = asdMemoryGetAllocatorA();
        ModelBoneResource *handle = source->sceneNode->boneResource;
        AsdMdlBuildDesc desc;
        desc.unk10 = 0x834;
        dest->sceneNode = FUN_002b3acc(&desc, 0, handle, allocator);
    }
    if (source->flags & 2) {
        FUN_002fb604(dest->sceneNode);
        dest->flags |= 2;
        g_gfxSettings.sharedModels++;
    }
    dest->file = source->file;
    dest->file->refCount++;
    dest->count = 1;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x1244);
    dest->table = (void **)asdMemoryAlloc(0x100, 0x100, 0, dest->count << 2, 1);
    dest->table[0] = dest->sceneNode;
    if (mode == 0) {
        asdMdlNodeBuildMotionTables(dest);
    }
    FUN_001457ec(dest, dest->file->data);
}
}
