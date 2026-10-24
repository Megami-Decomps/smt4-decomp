/* NON_MATCHING: register allocation of the table-resolve loop (retail keeps &setup in ip and flag/offset in r6/r8, this in r4 and the resource in r5; armcc here uses ip as the scratch and swaps this/resource). */
#include "classes/Obj557af8.h"
#include "AsdSDK/AsdDebug.h"

extern "C" void *asdMemoryAllocAligned(u32 size, u32 alignment, u32 flags, u32 heap, u32 auxiliaryAlignment, u32 enabled);

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
        setup.tables[i] = *present++ != 0 ? (const u8 *)resource + *offset : NULL;
        offset++;
    }
    setup.workBuffer = NULL;
    setup.streamBuffer = NULL;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdAnimCamera.cpp", 34);
    setup.workBuffer = asdMemoryAllocAligned(0x10000, 0x100, 0, resource->workBytes, 4, 1);
    workBuffer = setup.workBuffer;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Camera\\AsdAnimCamera.cpp", 38);
    setup.streamBuffer = asdMemoryAllocAligned(0x10000, 0x100, 0, resource->streamBytes, 0x10, 1);
    setup.streamBufferAlias = setup.streamBuffer;
    streamBuffer = setup.streamBuffer;
    this->resource = resource;
    Initialize(resource, &setup);
}
