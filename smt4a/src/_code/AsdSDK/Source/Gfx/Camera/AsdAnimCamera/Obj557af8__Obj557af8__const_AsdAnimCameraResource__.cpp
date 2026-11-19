/* NON_MATCHING: the table-resolution loop and constructor prologue use different registers and stack offsets. */
#include "classes/Obj557af8.h"
#include "AsdSDK/AsdDebug.h"
#include "util/MemoryHelpers_Smt4a.h"

Obj557af8::Obj557af8(const AsdAnimCameraResource *resource)
{
    unk38 = 0.0f;
    AsdAnimCameraSetup setup;
    setup.unk20 = 0;
    setup.streamBufferAlias = NULL;
    setup.unk28 = 0;
    const s32 *present = resource->tablePresent;
    const s32 *offset = resource->tableOffset;
    for (s32 i = 0; i < 6; i++) {
        const u8 *table = NULL;
        if (*present++ != 0) {
            table = reinterpret_cast<const u8 *>(resource) + *offset;
        }
        setup.tables[i] = table;
        ++offset;
    }
    setup.streamBuffer = setup.workBuffer = NULL;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdAnimCamera.cpp", 34);
    workBuffer = setup.workBuffer = asdMemoryAllocAligned(0x10000, 0x100, 0, resource->workBytes, 4, 1);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdAnimCamera.cpp", 38);
    setup.streamBuffer = asdMemoryAllocAligned(0x10000, 0x100, 0, resource->streamBytes, 0x10, 1);
    streamBuffer = setup.streamBufferAlias = setup.streamBuffer;
    this->resource = resource;
    Initialize(resource, &setup);
}
