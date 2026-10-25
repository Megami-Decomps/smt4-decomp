#ifndef GFX_VERTEXSTREAMS_H
#define GFX_VERTEXSTREAMS_H
#include "common.h"
#include <stddef.h>
struct VertexStreamSource {
    u32 unk00;
    u32 flags;
    union {
        u8 unk08[0x28];
        struct {
            u32 unk08;
            /* 0x0C */ u32 vertexCount;
        } geometry;
    };
    const void *position; /* 0x30 */
    const void *color; /* 0x34 */
    const void *secondaryColor; /* 0x38 */
    const void *texCoord; /* 0x3C */
};
typedef char VertexStreamSourceOffsets[offsetof(VertexStreamSource, flags) == 4 && offsetof(VertexStreamSource, position) == 0x30 && sizeof(VertexStreamSource) == 0x40 ? 1 : -1];
typedef char VertexStreamVertexCountOffsetCheck[
    offsetof(VertexStreamSource, geometry.vertexCount) == 0xC &&
    sizeof(VertexStreamSource) == 0x40 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 asdGxGetPhysicalAddress(u32 address);
#ifdef __cplusplus
}
#endif

#endif
