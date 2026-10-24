/* AsdSDK/Source/Gfx/Effect/effGeomEngine.c: a block of effect vertices with a per-vertex layout
 * chosen by flags. */
#ifndef ASDSDK_SOURCE_GFX_EFFECT_EFFGEOMENGINE_H
#define ASDSDK_SOURCE_GFX_EFFECT_EFFGEOMENGINE_H

#include "common.h"
#include <stddef.h>
#include "nw/math/MTX44.h"

/* Vertex attribute flags and the bytes each adds to a vertex. */
#define EFF_GEOM_POSITION 0x01  /* 12 */
#define EFF_GEOM_ATTR_02 0x02   /* 4 */
#define EFF_GEOM_ATTR_04 0x04   /* 8 */
#define EFF_GEOM_ATTR_08 0x08   /* 0x40 */
#define EFF_GEOM_ATTR_20 0x20   /* 4 */
#define EFF_GEOM_ATTR_80 0x80   /* 0x10 */

/* The header (0xB8 bytes) in front of the vertex data. */
struct EffGeomBuffer {
    /* 0x00 */ u8 *data;            /* the vertex data, which follows this header */
    /* 0x04 */ u32 count;           /* vertices */
    /* 0x08 */ u32 stride;          /* bytes per vertex */
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 flags;
    /* 0x18 */ void *pool;
    /* 0x1C */ u8 *position;
    /* 0x20 */ u8 *attr08;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u8 *attr04;
    /* 0x2C */ u8 *attr02;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u8 *attr20;
    /* 0x38 */ u8 *attr80;
    /* 0x3C */ u8 unk3c[0x28];
    /* 0x64 */ u8 color[4];
    /* 0x68 */ nw::math::MTX44 transform;
    /* 0xA8 */ u32 owner;
    /* 0xAC */ u8 unkac[0xc];
};

typedef char EffGeomBufferLayoutCheck[offsetof(EffGeomBuffer, attr80) == 0x38 &&
    offsetof(EffGeomBuffer, color) == 0x64 && offsetof(EffGeomBuffer, transform) == 0x68 &&
    offsetof(EffGeomBuffer, owner) == 0xA8 && sizeof(EffGeomBuffer) == 0xB8 ? 1 : -1];

#endif
