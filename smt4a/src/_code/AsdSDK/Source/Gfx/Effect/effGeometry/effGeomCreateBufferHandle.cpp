#include "classes/EffGeomRecord.h"
#include "AsdSDK/Source/Gfx/Effect/effGeomEngine.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char g_effGeometrySourceFileName[]; /* "...\Effect\effGeometry.cpp": __FILE__ */
extern EffGeomColor g_effGeomDefaultTint;  /* the default tint */

/* Creates a geometry handle around a new buffer of `vertexCount` vertices with the given
 * layout flags; EFF_GEOM_DEFAULT_TINT gives the buffer the default tint. */
EffGeomHandle *effGeomCreateBufferHandle(u32 vertexCount, u32 flags)
{
    EffGeomHandle *handle;

    asdDebugTrace(g_effGeometrySourceFileName, 221);
    handle = (EffGeomHandle *)memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, sizeof(EffGeomHandle), 0x10, 1);
    handle->tag = EFF_GEOM_HANDLE_BUFFER;
    handle->vertexCount = 0;
    handle->buffer = effGeomBufferCreate(vertexCount, flags, 0);
    if (flags & EFF_GEOM_DEFAULT_TINT) {
        EffGeomBuffer *buffer = handle->buffer;

        buffer->tint = g_effGeomDefaultTint;
    }
    handle->buffer->unk60 = 0;
    return handle;
}

} /* extern "C" */
