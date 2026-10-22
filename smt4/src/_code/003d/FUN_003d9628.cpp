/* NON_MATCHING: retail 60 vs built 57 rows; version parsing, record-header clearing, and copy scheduling differ. */
#include "common.h"

extern "C" {
void *rt_memcpy_w(void *, const void *, u32);
void FUN_0033a01c(void *);
void FUN_00339e38(void *);

void FUN_003d9628(const void *limits, void *destination, const void *file)
{
    struct RecordLimitView {
        u32 unk00;
        u32 count;
    };
    struct ResourceHeader {
        u32 magic;
        char version[4];
        u16 dataOffset;
        u16 unk0A;
        u32 dataSize;
    };
    struct RecordLoadView {
        u8 unk0000[0x1EA4];
        u32 header[0x118 / sizeof(u32)];
        void *records;
    };
    const ResourceHeader *header = static_cast<const ResourceHeader *>(file);
    RecordLoadView *state = static_cast<RecordLoadView *>(destination);
    const u8 *data = static_cast<const u8 *>(file) + header->dataOffset;
    u32 dataSize = header->dataSize;
    s32 version = (header->version[0] - '0') * 1000 +
                  (header->version[1] - '0') * 100 +
                  (header->version[2] - '0') * 10 + header->version[3] - '0';
    for (s32 index = 0; index < 7; ++index)
        state->header[index] = 0;
    if (version == 1100) {
        rt_memcpy_w(state->header, data, sizeof(state->header));
        data += sizeof(state->header);
    }
    u32 count = (dataSize - sizeof(state->header)) / 0x18;
    if (static_cast<const RecordLimitView *>(limits)->count < count)
        count = static_cast<const RecordLimitView *>(limits)->count;
    rt_memcpy_w(state->records, data, count * 0x18);
    FUN_0033a01c(destination);
    FUN_00339e38(destination);
}
}
