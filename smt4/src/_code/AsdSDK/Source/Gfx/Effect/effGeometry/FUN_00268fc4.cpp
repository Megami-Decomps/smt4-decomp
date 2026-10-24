/* NON_MATCHING: same code and calls; retail keeps the memAlloc stack constants 1 and 16 in r5/r8 stored with two str under a 12-byte frame (push without sl), armcc here uses sl/r5 with one stm and an 8-byte frame, and in the buffer path loads the default tint with ldm/stm after the pointer add while armcc adds the pointer first. */
#include "classes/EffGeomRecord.h"
#include "AsdSDK/AsdDebug.h"

struct EffGeomTintRgb { u32 value[3]; };

/* A geometry buffer object (referenced by a buffer-style handle). */
struct EffGeomBuffer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 vertexCount;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ u32 flags;      /* 0x80000: carries the default tint */
    /* 0x18 */ u8 unk18[0x28];
    /* 0x40 */ EffGeomTintRgb tint;
    /* 0x4C */ u32 tintW;
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u8 unk64[0x50];
    /* 0xB4 */ void *shared;   /* reference counted */
};

/* A geometry handle as the clone sees it: a record-style handle (record at +8) or a buffer-style one
 * (tag bit 0x200, buffer at +12). */
struct EffGeomCloneHandle {
    /* 0x00 */ u16 tag;
    /* 0x02 */ u16 vertexCount;
    /* 0x04 */ void *shared;   /* reference counted */
    /* 0x08 */ EffGeomRecord *record;
    /* 0x0C */ EffGeomBuffer *buffer;
    /* 0x10 */ u8 unk10[0x44];
    /* 0x54 */ u32 unk54;
};

/* The default tint of a buffer-style geometry. */
struct EffGeomDefaultTint {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ EffGeomTintRgb tint;
    /* 0x1C */ u32 w;
};

extern "C" {
extern const char DAT_00414954[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effGeometry.cpp": __FILE__ */
extern EffGeomDefaultTint DAT_004737f8;

void *memAlloc(int, int, int, s32 size, int align, int);
EffGeomBuffer *effGeomBufferCreate(u32 vertexCount, u32 flags, s32 arg);
void recordPrepareActive(EffGeomRecord *record, u32 first, u32 second, u32 third);
void refCountIncrement(void *shared);

/* Makes a copy of a geometry handle: buffer-style handles get a new buffer with the same size and
 * flags, record-style handles a new record with the same index list. Shared data is referenced again. */
EffGeomCloneHandle *FUN_00268fc4(EffGeomCloneHandle *source)
{
    u16 tag = source->tag;
    EffGeomCloneHandle *copy;
    if ((tag & 0x200) != 0) {
        EffGeomBuffer *original = source->buffer;
        u16 vertexCount = original->vertexCount;
        u32 flags = original->flags;
        asdDebugTrace(DAT_00414954, 221);
        copy = (EffGeomCloneHandle *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
        copy->tag = 0x300;
        copy->vertexCount = 0;
        EffGeomBuffer *buffer = effGeomBufferCreate(vertexCount, flags, 0);
        copy->buffer = buffer;
        if ((flags & 0x80000) != 0) {
            buffer->tint = DAT_004737f8.tint;
            buffer->tintW = DAT_004737f8.w;
        }
        copy->buffer->unk60 = 0;
        void *shared = source->buffer->shared;
        if (shared != NULL) {
            copy->buffer->shared = shared;
            refCountIncrement(shared);
        }
    } else {
        EffGeomRecord *original = source->record;
        u32 vertexCount = original->state.unk0C;
        u32 triangles = original->state.unk14;
        asdDebugTrace(DAT_00414954, 112);
        copy = (EffGeomCloneHandle *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
        EffGeomRecord *record = new ((s32)source) EffGeomRecord;
        recordPrepareActive(record, 0x25, triangles * 3, vertexCount);
        copy->tag = tag;
        copy->record = record;
        copy->vertexCount = vertexCount;
        copy->unk54 = 0xA5;
        void *shared = source->shared;
        if (shared != NULL) {
            copy->shared = shared;
            refCountIncrement(shared);
        }
        for (u32 i = 0; i < source->record->state.unk18; i++)
            copy->record->vertices[i] = source->record->vertices[i];
    }
    return copy;
}

} /* extern "C" */
