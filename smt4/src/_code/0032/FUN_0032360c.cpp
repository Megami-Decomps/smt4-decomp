/* NON_MATCHING: the self-relative tables are nw::ut::RelativePointer (retail's add/move-NULL pairs); retail keeps the
 * request index and the third argument on the stack, a zero register for NULL and the UV transform in s-registers,
 * so the walk's registers and the NULL tests' layout differ. */
#include "common.h"
#include "shard/S1NwGfx.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* Layout of the texture-coordinate data of a model resource as this function walks it. */
struct ResUvDescriptor {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 key;
    /* 0x08 */ u8 unk08[0x28];
    /* 0x30 */ s32 dataOffset; /* byte offset of the descriptor's texture coordinates, negative = none */
};

struct ResUvBlock {
    /* 0x00 */ u32 flags; /* 0x40000000: carries texture coordinates */
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 dataSize;
    /* 0x18 */ RelativePointer data;
    /* 0x1C */ u8 unk1C[8];
    /* 0x24 */ u32 stride;
    /* 0x28 */ u32 descriptorCount;
    /* 0x2C */ RelativePointer descriptors; /* to the descriptors' RelativePointer table */
};

struct ResMaterial {
    /* 0x00 */ u32 flags; /* 0x10000001: a material that has blocks */
    /* 0x04 */ u8 unk04[0x34];
    /* 0x38 */ u32 blockCount;
    /* 0x3C */ RelativePointer blocks; /* to the blocks' RelativePointer table */
};

struct ResMapperSlots {
    /* 0x000 */ u8 unk000[0x274];
    /* 0x274 */ RelativePointer mappers[14]; /* the texture mappers */
    /* 0x2AC */ u8 unk2AC[4];
    /* 0x2B0 */ u32 textureBound;
};

struct ResMeshSlots {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ ResMapperSlots *slots;
};

struct ResModelBody {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ struct ResMaterialTable *materials;
    /* 0x00C */ u8 unk00C[0x158];
    /* 0x164 */ ResMeshSlots **meshes;
};

struct ResMaterialTable {
    /* 0x00 */ u8 unk00[0xC8];
    /* 0xC8 */ RelativePointer table; /* to the materials' RelativePointer table */
};

struct ResModel {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ ResModelBody *body;
};

struct ResModelOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ResModel *model;
};

struct UvRequest {
    s16 material; /* index into the model's material table */
    s16 key; /* matches ResUvDescriptor::key - 4 */
};

struct TextureRequest {
    s16 mesh;
    s16 slot;
};

struct UvTextureRequests {
    /* 0x000 */ UvRequest uv[0x40];
    /* 0x100 */ s32 uvCount;
    /* 0x104 */ TextureRequest textures[0x40];
    /* 0x204 */ s32 textureCount;
};

struct UvTransform {
    f32 scaleU, scaleV, offsetU, offsetV;
};

struct TextureSource {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 texture;
};

extern "C" {
void FUN_003409f8(TextureSource *source, f32 *scale, f32 *offset);
void nw_gfx_res_ResTextureMapper_SetTexture(void **mapper, u32 texture);

/* Applies the texture-coordinate scale/offset of `source` to the model's UV data for each request, then binds its
 * texture to the requested mapper slots. */
void FUN_0032360c(ResModelOwner *owner, TextureSource *source, UvTextureRequests *requests)
{
    UvTransform transform;
    FUN_003409f8(source, &transform.scaleU, &transform.offsetU);
    for (s32 i = 0; i < requests->uvCount; i++) {
        UvRequest *request = &requests->uv[i];
        ResModelBody *body = owner->model->body;
        RelativePointer *materialTable = (RelativePointer *)body->materials->table.get();
        ResMaterial *material = (ResMaterial *)materialTable[request->material].get();
        if (material != NULL && (~material->flags & 0x10000001) != 0) {
            material = NULL;
        }
        if (material == NULL) {
            continue;
        }
        for (s32 b = 0; b < (s32)material->blockCount; b++) {
            RelativePointer *blocks = (RelativePointer *)material->blocks.get();
            ResUvBlock *block = (ResUvBlock *)blocks[b].get();
            if (block != NULL && (block->flags & 0x40000000) == 0) {
                block = NULL;
            }
            if (block == NULL) {
                continue;
            }
            u8 *data = (u8 *)block->data.get();
            for (u32 d = 0; d < block->descriptorCount; d++) {
                RelativePointer *descriptors = (RelativePointer *)block->descriptors.get();
                ResUvDescriptor *descriptor = (ResUvDescriptor *)descriptors[d].get();
                if (descriptor->key == request->key + 4) {
                    if (descriptor->dataOffset >= 0) {
                        for (f32 *uv = (f32 *)(data + descriptor->dataOffset); uv < (f32 *)(data + block->dataSize);
                             uv = (f32 *)((u8 *)uv + block->stride)) {
                            uv[0] = 0.5f + (uv[0] - 0.5f) * transform.scaleU;
                            uv[1] = 0.5f + (uv[1] - 0.5f) * transform.scaleV;
                            uv[0] += transform.offsetU;
                            uv[1] += transform.offsetV;
                        }
                        nn_gxlow_CTR_FlushDataCacheForward((u32)block->data.get(), block->dataSize);
                    }
                    break;
                }
            }
        }
    }
    for (s32 i = 0; i < requests->textureCount; i++) {
        TextureRequest *request = &requests->textures[i];
        ResMeshSlots *mesh = owner->model->body->meshes[request->mesh];
        void *mapper = mesh->slots->mappers[request->slot].get();
        nw_gfx_res_ResTextureMapper_SetTexture(&mapper, source->texture);
        mesh->slots->textureBound = 0;
    }
}
}
