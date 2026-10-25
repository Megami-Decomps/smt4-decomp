/* NON_MATCHING: cursor initialization and final text-load argument setup are scheduled differently. */
#include "common.h"

struct DecodeStateView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

struct TextObjectView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08
    u32 unk0C; // 0x0C
    u32 unk10; // 0x10
};

extern "C" {
s32 refIsNullOrZero(DecodeStateView* state);
s32 FUN_00100836(const char* source, u32 encoding, DecodeStateView* state);
s32 FUN_002e3c44(u16* output, const char* source, s32 byteCount,
                 DecodeStateView* state);
s32 FUN_001883b0(TextObjectView* object, const u16* text, u32 options);

// Decode source units into a temporary UTF-16-sized buffer, reset the object, and load it.
void FUN_00158900(TextObjectView* object, const char* source, u32 options)
{
    u16 text[264];
    DecodeStateView state = {0, 0};
    u16* output = text;
    const char* cursor = source;

    refIsNullOrZero(&state);
    for (;;) {
        s32 byteCount = FUN_00100836(cursor, 0x105, &state);
        if (byteCount == 0) {
            break;
        }
        if (FUN_002e3c44(output, cursor, byteCount, &state) == 0) {
            break;
        }
        ++output;
        cursor += byteCount;
    }

    *output = 0;
    object->unk0C = 0;
    object->unk10 = 0;
    object->unk04 = 0;
    object->unk08 = 0;
    FUN_001883b0(object, text, options);
}
}
