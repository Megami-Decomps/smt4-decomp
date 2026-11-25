#include "classes/Obj557af8.h"
#include "AsdSDK/AsdDebug.h"
#include "util/MemoryHelpers_Smt4a.h"

/* Binds the camera's animation tables and allocates its work and stream buffers. */
Obj557af8::Obj557af8(const AsdAnimCameraResource *resource)
{
    unk38 = 0.0f;
    AsdAnimCameraSetup setup;
    setup.unk20 = 0;
    setup.streamBufferAlias = NULL;
    setup.unk28 = 0;
    asdAnimCameraResolveTables(resource, setup.tables);
    setup.streamBuffer = setup.workBuffer = NULL;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdAnimCamera.cpp", 34);
    workBuffer = setup.workBuffer = asdMemoryAllocAligned(0x10000, 0x100, 0, resource->workBytes, 4, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdAnimCamera.cpp", 38);
    setup.streamBuffer = asdMemoryAllocAligned(0x10000, 0x100, 0, resource->streamBytes, 0x10, 1);
    streamBuffer = setup.streamBufferAlias = setup.streamBuffer;
    this->resource = resource;
    Initialize(resource, &setup);
}
