/* NON_MATCHING: Versioned record serialization and payload-size backpatching are complete; the version-reference selection, Thumb stack reservation, and header-mode registers differ. */
#include "common.h"

struct SerializedString {
    /* 0x00 */ const char *data;
    /* 0x04 */ u32 length;
};
struct SerializedHandleRecord {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 baseVersion;
    /* 0x05 */ u8 version;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ SerializedString name;
    /* 0x10 */ u32 flags;
    /* 0x14 */ u8 kind;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u32 value;
};
struct RecordWriteBuffer {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 position;
};
struct RecordWriteStream {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RecordWriteBuffer *buffer;
    /* 0x0C */ u8 unk0c[0x2f];
    /* 0x3B */ s8 headerless;
};
extern "C" {
void FUN_00306cb4(RecordWriteStream *stream, const SerializedHandleRecord *record);
void bufferAssignByteAlias(RecordWriteStream *stream, const u8 *value);
void strHolderAssignU32Alias(RecordWriteStream *stream, const u32 *value);
void FUN_002fbb92(RecordWriteStream *stream, const SerializedString *value);
s32 FUN_002fbb70(RecordWriteStream *stream, u32 position);
}

static inline const u8 &supportedRecordVersion(const u8 &requested, const u8 &supported)
{
    return supported < requested ? supported : requested;
}

/* Serialize the handle record, backpatching its payload size when headers are enabled. */
extern "C" void FUN_00119da2(RecordWriteStream *stream, const SerializedHandleRecord *record)
{
    FUN_00306cb4(stream, record);
    s8 headerless = stream->headerless;
    u32 start = 0;
    if (!headerless) {
        u8 version = record->version;
        u8 supported = 0;
        bufferAssignByteAlias(stream, &supportedRecordVersion(version, supported));
        start = stream->buffer->position;
        u32 size = 0;
        strHolderAssignU32Alias(stream, &size);
    }
    FUN_002fbb92(stream, &record->name);
    strHolderAssignU32Alias(stream, &record->flags);
    bufferAssignByteAlias(stream, &record->kind);
    strHolderAssignU32Alias(stream, &record->value);
    if (!headerless) {
        u32 end = stream->buffer->position;
        FUN_002fbb70(stream, start);
        u32 size = end - start - sizeof(u32);
        strHolderAssignU32Alias(stream, &size);
        FUN_002fbb70(stream, end);
    }
}
