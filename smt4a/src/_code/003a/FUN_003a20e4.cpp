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
TrackObject *effEmitterCreateSmall(void *header);
void polygonTrackRebuildResources(TrackObject *track, u32 count, void *header);
void objectBufferFree(void *buffer);
void *FUN_002b2d74(u32 count, u32 first, void *header);
void effHolderSetParams(TrackObject *track, u32 count, void *data);

static inline void replaceTrackBuffer(TrackObject *track, u32 count, void *header)
{
    if (track->buffer != NULL) {
        objectBufferFree(track->buffer);
    }
    track->buffer = FUN_002b2d74((u16)count, track->unk00, header);
}

/* Creates the track object of a resource, rebuilds its resources and replaces its buffer. */
static inline TrackObject *createTrack(ResourceDesc *resource)
{
    u8 *header = (u8 *)resourceResolveHeaderPointer(resource);
    TrackObject *track = effEmitterCreateSmall(header + 0x1C);
    polygonTrackRebuildResources(track, resource->count, header);
    replaceTrackBuffer(track, resource->count, header + 0x1C);
    return track;
}

/* Builds the track object of a resource: rebuilds its resources, replaces its buffer and applies the resource's parameters. */
TrackObject *FUN_003a20e4(ResourceDesc *resource)
{
    TrackObject *track = createTrack(resource);
    void *data = resourceResolveDataPointer(resource);
    if (data != NULL) {
        effHolderSetParams(track, resource->paramCount, data);
    }
    return track;
}

} /* extern "C" */
