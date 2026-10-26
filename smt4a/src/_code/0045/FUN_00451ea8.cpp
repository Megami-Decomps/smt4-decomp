/* NON_MATCHING: only register choice differs (retail keeps the resource in r5 and the record in r4 and takes the record's NULL from the shared zero register r6). */
#include "common.h"

extern "C" {

/* A graphics resource with a relative pointer (at 0x38) to an inner record that holds the native handle. */
struct GfxRecord {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 handle;
    /* 0x1C */ u32 context;
};

struct GfxResource {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ u32 owner;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ s32 recordOffset;
};

typedef void (*GfxReleaseCallback)(u32 context, u32 command, u32 owner, u32 handle);
extern GfxReleaseCallback g_gfxReleaseCallback;

/* The inner record of a resource: its offset is relative to the offset field itself. */
static __inline GfxRecord *gfxSelfRelativeRecord(s32 *offset)
{
    if (*offset == 0) {
        return NULL;
    }
    return (GfxRecord *)((u8 *)offset + *offset);
}

/* Releases the native handle of a resource's record and detaches its owner. */
void FUN_00451ea8(GfxResource *resource)
{
    GfxResource *checked;
    if (resource != NULL && (~resource->flags & 0x20000011) == 0) {
        checked = resource;
    } else {
        checked = NULL;
    }

    if (checked->owner != 0) {
        GfxRecord *record = gfxSelfRelativeRecord(&checked->recordOffset);
        if (record->context) {
            g_gfxReleaseCallback(record->context, 0x101, checked->owner, record->handle);
            record->handle = 0;
        }
        checked->owner = 0;
    }
}

} /* extern "C" */
