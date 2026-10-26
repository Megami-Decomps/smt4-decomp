/* NON_MATCHING: the retail unit inlines the NintendoWare resource accessors (relative-offset link resolution with null checks) with its own register scheduling; this version resolves the same links through one helper and a pointer-chasing helper, so the instruction count and allocation differ. */
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

namespace {
/* Resource data stores most links as 32-bit offsets relative to the link itself (0 = none). */
static inline u32 *relativeLink(u32 *link)
{
    return *link != 0 ? reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(link) + *link) : NULL;
}

/* A pair of indices (a model or material, and one of its attributes or mappers). */
struct ScreenSlot {
    s16 first;
    s16 second;
};

/* Reads the pointer stored `offset` bytes into `base`. */
static inline u8 *pointerAt(u8 *base, u32 offset)
{
    return *reinterpret_cast<u8 **>(base + offset);
}

/* The screen's work block: where its resources live and the slots that select what to scroll. */
struct ScreenStateWork {
    /* 0x000 */ u8 unk000[0x84];
    /* 0x084 */ u8 *root;
    /* 0x088 */ u8 unk088[0xc];
    /* 0x094 */ ScreenSlot scrollSlots[64];   /* model, attribute usage minus 4 */
    /* 0x194 */ s32 scrollCount;
    /* 0x198 */ ScreenSlot mapperSlots[64];   /* material, texture mapper */
    /* 0x298 */ s32 mapperCount;
};
}

extern "C" {
extern ScreenStateWork *g_screenStateWork;
void FUN_003409f8(void *context, u8 buffer[16], f32 *offset);
void nw_gfx_res_ResTextureMapper_SetTexture(u32 **mapper, u32 texture);

/* Applies the screen's scroll to the model data it draws with: every selected attribute of the selected
   models gets the (u, v) offset FUN_003409f8 computes added to its first two floats, and the texture
   mappers of the selected materials get the context's texture. */
void FUN_00258170(u8 *context)
{
    ScreenStateWork *screen = g_screenStateWork;
    u8 buffer[16];
    f32 offset[2];
    FUN_003409f8(context, buffer, offset);
    u8 *resourceSet = pointerAt(pointerAt(screen->root, 8), 0x2c);
    for (s32 i = 0; i < screen->scrollCount; i++) {
        u32 *modelTable = relativeLink(reinterpret_cast<u32 *>(pointerAt(resourceSet, 8) + 200));
        u32 *model = relativeLink(&modelTable[screen->scrollSlots[i].first]);
        if (model != NULL && (~model[0] & 0x10000001) != 0) {
            model = NULL;
        }
        if (model == NULL) {
            continue;
        }
        u32 partCount = model[0xe];
        for (u32 part = 0; part < partCount; part++) {
            u32 *partTable = model[0xf] != 0
                ? reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(model) + model[0xf] + 0x3c) : NULL;
            u32 *node = relativeLink(&partTable[part]);
            if (node != NULL && (node[0] & 0x40000000) == 0) {
                node = NULL;
            }
            if (node == NULL) {
                continue;
            }
            u8 *vertexData = node[6] != 0 ? reinterpret_cast<u8 *>(node) + node[6] + 0x18 : NULL;
            u32 vertexBytes = node[5];
            for (u32 a = 0; a < node[10]; a++) {
                u32 *attributeTable = node[0xb] != 0
                    ? reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(node) + node[0xb] + 0x2c) : NULL;
                u32 *attribute = relativeLink(&attributeTable[a]);
                if (static_cast<s32>(attribute[1]) != screen->scrollSlots[i].second + 4) {
                    continue;
                }
                if (static_cast<s32>(attribute[0xc]) >= 0) {
                    u32 stride = node[9];
                    for (f32 *vertex = reinterpret_cast<f32 *>(vertexData + attribute[0xc]);
                         vertex < reinterpret_cast<f32 *>(vertexData + vertexBytes);
                         vertex = reinterpret_cast<f32 *>(reinterpret_cast<u8 *>(vertex) + stride)) {
                        f32 u = (vertex[0] - 0.5f) + 0.5f;
                        f32 v = (vertex[1] - 0.5f) + 0.5f;
                        vertex[0] = u;
                        vertex[1] = v;
                        vertex[0] = u + offset[0];
                        vertex[1] = v + offset[1];
                    }
                    FUN_002c2424((u32)(vertexData), node[5]);
                }
                break;
            }
        }
    }
    for (s32 i = 0; i < screen->mapperCount; i++) {
        u8 *material = pointerAt(pointerAt(pointerAt(resourceSet, 0x164), screen->mapperSlots[i].first * 4), 0x3c);
        u32 *link = reinterpret_cast<u32 *>(material + 0x274 + screen->mapperSlots[i].second * 4);
        u32 *mapper = relativeLink(link);
        nw_gfx_res_ResTextureMapper_SetTexture(&mapper, *reinterpret_cast<u32 *>(context + 0xc));
        *reinterpret_cast<u32 *>(material + 0x2b0) = 0;
    }
}

} /* extern "C" */
