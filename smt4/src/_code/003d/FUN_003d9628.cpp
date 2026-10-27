/* NON_MATCHING: signed version digits and the float-zeroed header words now follow retail; armcc picks smulbb for the *100 term (retail: the *1000 term), keeps extra temporaries (r9/sl) and the retail order of the header clear and 1100 check differs. */
#include "common.h"

extern "C" {
void *__aeabi_memcpy4(void *, const void *, u32);
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
        s8 version[4];
        u16 dataOffset;
        u16 unk0A;
        u32 dataSize;
    };
    struct RecordLoadView {
        u8 unk0000[0x1EA4];
        f32 header[6];
        u32 headerFlag;
        u8 headerRest[0x118 - 7 * 4];
        void *records;
    };
    const ResourceHeader *header = static_cast<const ResourceHeader *>(file);
    RecordLoadView *state = static_cast<RecordLoadView *>(destination);
    const u8 *data = static_cast<const u8 *>(file) + header->dataOffset;
    u32 dataSize = header->dataSize;
    s32 version = (header->version[0] - '0') * 1000 +
                  (header->version[1] - '0') * 100 +
                  (header->version[2] - '0') * 10 + header->version[3] - '0';
    state->header[0] = 0.0f;
    state->header[1] = 0.0f;
    state->header[2] = 0.0f;
    state->header[3] = 0.0f;
    state->header[4] = 0.0f;
    state->header[5] = 0.0f;
    state->headerFlag = 0;
    if (version == 1100) {
        __aeabi_memcpy4(state->header, data, 0x118);
        data += 0x118;
    }
    u32 count = (dataSize - 0x118) / 0x18;
    if (static_cast<const RecordLimitView *>(limits)->count < count)
        count = static_cast<const RecordLimitView *>(limits)->count;
    __aeabi_memcpy4(state->records, data, count * 0x18);
    FUN_0033a01c(destination);
    FUN_00339e38(destination);
}
}
