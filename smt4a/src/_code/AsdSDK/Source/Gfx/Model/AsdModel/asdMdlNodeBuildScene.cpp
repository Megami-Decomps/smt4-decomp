/* NON_MATCHING: register allocation, builder and MoveArray initialization, and dictionary-loop scheduling differ. */
#include <string.h>
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Model/AsdGraphicsMesh.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/Model/AsdScene.h"
#include "AsdSDK/Source/Gfx/Model/AsdSceneNodeArray.h"
#include "gfx/GfxSettings.h"
#include "gfx/ModelBoneLookup.h"
#include "gfx/VertexBufferTable.h"
#include "nw/gfx/SceneBuilder.h"
#include "runtime/String.h"
#include "shard/W5_W5Match7_FlagBanks.h"

using nw::gfx::SceneNode;
using nw::gfx::SceneBuilderParams;
using nw::gfx::SkeletalModelParams;
using nw::ut::RuntimeTypeInfo;
using nw::ut::MoveArray;

extern "C" {

extern const RuntimeTypeInfo DAT_005c0f30;
extern const RuntimeTypeInfo DAT_005c0f34;
extern const char *const DAT_005b3cc8[3];
extern SceneNode *DAT_005b3c90[2];

void FUN_001b4288(VertexBufferTable *file, u32 value);
void graphicsResourceSetLeafValue(GraphicsResourceFile *file, u32 value);
void FUN_001b451c(GraphicsResourceFile *file, u32 memoryFlags);
u32 nw_gfx_res_ResGraphicsFile_Setup(GraphicsResourceFile *file, AsdAllocator *allocator, RelativeResourceBlob *reference);
SceneNode *FUN_001b6d08(SkeletalModelParams *params, void *memory, RelativeResourceRecord *resource, AsdAllocator *allocator);
u32 asdModelApplyShadowMaterials(SceneNode *object);
ResDicPatriciaNode *nw_ut_ResDicPatricia_Get(ResDicPatricia **dictionary, const char *name, u32 length);

/* Builds and attaches the model nodes described by a graphics file. */
void asdMdlNodeBuildScene(GraphicsResourceFile *file, AsdMdlNode *node, u32 memoryFlags, AsdMdlNode *source)
{
    enum { MODEL_MEMORY_A = 0x02020000, MODEL_MEMORY_B = MODEL_MEMORY_A + 0x10000 };
    if (memoryFlags & 8) {
        FUN_001b4288((VertexBufferTable *)file, MODEL_MEMORY_A);
    } else if (memoryFlags & 0x40) {
        FUN_001b4288((VertexBufferTable *)file, MODEL_MEMORY_B);
    }
    if (memoryFlags & 0x20) {
        graphicsResourceSetLeafValue(file, MODEL_MEMORY_A);
    } else if (memoryFlags & 0x100) {
        graphicsResourceSetLeafValue(file, MODEL_MEMORY_B);
    }
    if (memoryFlags & 0x10) {
        FUN_001b451c(file, MODEL_MEMORY_A);
    } else if (memoryFlags & 0x80) {
        FUN_001b451c(file, MODEL_MEMORY_B);
    }

    u32 status = nw_gfx_res_ResGraphicsFile_Setup(file, asdMemoryGetDefaultAllocator(), file->data);
    if ((s32)(status & 0x80000000) < 0 && (status & 2)) {
        RelativeResourceBlob *reference = (RelativeResourceBlob *)g_gfxSettings.resGraphicsFile;
        nw_gfx_res_ResGraphicsFile_Setup(file, asdMemoryGetDefaultAllocator(), reference);
    }

    MoveArray<SceneNode *> objects;
    objects.allocator = (AsdAllocatorObject *)asdMemoryGetDefaultAllocator();
    objects.begin = objects.end = NULL;
    objects.capacityFlags = 0x40000000;
    bool appliedShadow = false;
    node->count = file->data->models.modelCount;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 4068);
    node->table = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->count * sizeof(*node->table), 1);

    s32 index = 0;
    GraphicsModelDictionaryEntry *entry = file->begin();
    GraphicsModelDictionaryEntry *end = entry != NULL ? entry + node->count : NULL;
    for (; entry != end; ++entry) {
        SceneNode *object;
        RelativeResourceRecord *resource = entry->model.get();
        if (source != NULL) {
            AsdMdlSceneNode *sourceScene = source->sceneNode;
            AsdAllocator *allocator = asdMemoryGetAllocatorA();
            SkeletalModelParams params;
            params.enabled = 1;
            params.unk01 = 1;
            params.unk04 = 4;
            params.unk08 = 8;
            params.unk0C = 1;
            params.unk10 = 0;
            params.unk14 = 0;
            params.unk18 = 0;
            params.sharedSkeleton = sourceScene->skeleton;
            object = FUN_001b6d08(&params, NULL, resource, allocator);
        } else {
            AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
            AsdAllocator *deviceAllocator = asdMemoryGetAllocatorA();
            SceneBuilderParams params;
            params.resource = resource;
            params.enabled = 1;
            params.unk08 = 8;
            params.unk0C = 4;
            params.unk10 = 4;
            params.unk14 = 0;
            params.unk18 = 0;
            params.unk1C = 4;
            params.unk20 = 0;
            params.unk24 = 1;
            object = nw::ut::DynamicCast<SceneNode>(nw_gfx_SceneBuilder_CreateObject(&params, allocator, deviceAllocator),
                                                    &DAT_005c0f30);
        }
        if (asdModelApplyShadowMaterials(object)) {
            appliedShadow = true;
            node->flags |= 2;
        }
        s32 capacity = objects.capacity();
        if (objects.size() < capacity || FUN_001aa528(&objects, capacity != 0 ? capacity * 2 : 1)) {
            new (objects.end) SceneNode *(object);
            ++objects.end;
        }
        node->table[index++] = nw::ut::DynamicCast<SceneNode>(object, &DAT_005c0f34);
    }
    if (appliedShadow) {
        ++g_gfxSettings.sharedModels;
    }

    node->sceneNode = (AsdMdlSceneNode *)node->table[0];
    if (index != 0) {
        ModelBoneResource *resource = ModelBoneResource::cast(node->sceneNode->boneResource);
        ModelBoneSkeleton *skeleton = resource->skeleton.get();
        memset(node->specialBones, -1, sizeof(node->specialBones));
        for (s32 i = 0; i < skeleton->boneCount; ++i) {
            ResDicPatricia *dictionary = skeleton->dictionary.get();
            const ResDicPatriciaName *entry = dictionary != NULL ? dictionary->nodes[i + 1].name.get() : NULL;
            const char *name = entry->text.get();
            for (s32 key = 0; key < 3; ++key) {
                if (libc_strncmp(name, DAT_005b3cc8[key], strlen(DAT_005b3cc8[key])) == 0) {
                    ResDicPatricia *bones = skeleton->dictionary.get();
                    const char *prefix = DAT_005b3cc8[key];
                    s32 bone = -1;
                    if (bones != NULL && prefix != NULL) {
                        ResDicPatriciaNode *found = nw_ut_ResDicPatricia_Get(&bones, prefix, strlen(prefix));
                        if (found != NULL) {
                            bone = found - bones->nodes;
                        }
                    }
                    node->specialBones[key] = bone;
                    break;
                }
            }
        }
    }

    if (g_gfxSettings.unk03) {
        s32 count = node->sceneNode->meshesEnd - node->sceneNode->meshesBegin;
        RelativeResourceBlob *reference = (RelativeResourceBlob *)g_gfxSettings.resGraphicsFile;
        GraphicsShaderDictionary *shaders = reference->shaders.get();
        GraphicsShaderResource *shader = shaders != NULL ? shaders->first.get() : NULL;
        void *binary = shader->binary.get()->data.get();
        for (s32 i = 0; i < count; ++i) {
            AsdGraphicsMesh *mesh = node->sceneNode->meshesBegin[i];
            mesh->shader = binary;
            mesh->resource->unk2A4 = 0;
        }
    }

    for (SceneNode **parent = objects.begin; parent != objects.end; ++parent) {
        for (SceneNode **child = objects.begin; child != objects.end; ++child) {
            sceneNodeAttachDeclaredChild(*parent, *child);
        }
    }
    SceneNode *root = DAT_005b3c90[node->unk90];
    for (SceneNode **object = objects.begin; object != objects.end; ++object) {
        SceneNode *child = *object;
        if (child->parent != NULL || nw::gfx::sceneNodeIsCircularReference(root, child)) {
            continue;
        }
        if (child->parent != NULL) {
            continue;
        }
        MoveArray<SceneNode *> &children = root->children.nodes;
        s32 capacity = children.capacity();
        if (children.size() < capacity || FUN_001aa528(&children, capacity != 0 ? capacity * 2 : 1)) {
            new (children.end) SceneNode *(child);
            ++children.end;
            child->parent = root->children.owner;
        }
    }
}

} /* extern "C" */
