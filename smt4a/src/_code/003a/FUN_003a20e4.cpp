/* NON_MATCHING: native buffer/header handoff and field narrowing now match; resource and returned track trade r4/r5. */
#include "common.h"

struct ResourceDesc {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 count;
    /* 0x0E */ u8 unk0E[0xE];
    /* 0x1C */ u16 paramCount;
};

struct TrackObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ void *buffer;
};

extern "C" {

void *resourceResolveHeaderPointer(ResourceDesc *resource);
void *resourceResolveDataPointer(ResourceDesc *resource);
TrackObject *FUN_003a1ef4(void *header);
void polygonTrackRebuildResources(TrackObject *track, u32 count, void *header);
void objectBufferFree(void *buffer);
void *FUN_002b2d74(u32 count, u32 first, void *header);
void effHolderSetParams(TrackObject *track, u32 count, void *data);

/* Builds the track object of a resource: rebuilds its resources, replaces its buffer and applies the resource's parameters. */
TrackObject *FUN_003a20e4(ResourceDesc *resource)
{
    u8 *header = (u8 *)resourceResolveHeaderPointer(resource);
    TrackObject *track = FUN_003a1ef4(header + 0x1C);
    void *data;

    polygonTrackRebuildResources(track, resource->count, header);
    u32 count = resource->count;

    void *oldBuffer = track->buffer;
    header += 0x1C;

    if (oldBuffer != NULL) {
        objectBufferFree(oldBuffer);
    }
    track->buffer = FUN_002b2d74(static_cast<u16>(count), track->unk00, header);
    data = resourceResolveDataPointer(resource);
    if (data != NULL) {
        effHolderSetParams(track, resource->paramCount, data);
    }
    return track;
}

} /* extern "C" */
