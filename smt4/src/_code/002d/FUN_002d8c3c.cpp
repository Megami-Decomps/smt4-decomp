/* NON_MATCHING: Retail push {r4, r5, r6} differs from recovered push {r4, r5, r6, r7}. */
#include "common.h"

struct EncodedRecordView {
    u8 unk00[4];       // 0x00
    s8 digits[4];      // 0x04
    u16 payloadOffset; // 0x08
    u8 unk0A;          // 0x0A
};

// Return the relative payload for supported record kinds with a decimal value of at least 1300.
extern "C" u8* FUN_002d8c3c(EncodedRecordView* record)
{
    const s32 value = (record->digits[0] - '0') * 1000
                    + (record->digits[1] - '0') * 100
                    + (record->digits[2] - '0') * 10
                    + (record->digits[3] - '0');

    switch (record->unk0A) {
    case 0:
        if (value >= 1300) {
            return reinterpret_cast<u8*>(record) + record->payloadOffset;
        }
        break;
    case 1: {
        u8* payload = reinterpret_cast<u8*>(record) + record->payloadOffset;
        if (value >= 1300) {
            return payload;
        }
        break;
    }
    }

    return 0;
}
