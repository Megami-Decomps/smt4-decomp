/* NON_MATCHING: register allocation only: retail keeps the digit and the 1300 limit in swapped registers (r3/r2). */
#include "common.h"

struct EncodedRecordView {
    u8 unk00[4];       // 0x00
    s8 digits[4];      // 0x04
    u16 payloadOffset; // 0x08
    u8 unk0A;          // 0x0A
};

// Return the relative payload for record kinds 0 and 1 when the decimal value is at least 1300.
extern "C" u8* FUN_00348ee8(EncodedRecordView* record)
{
    s32 value = (record->digits[0] - '0') * 1000;
    value += (record->digits[1] - '0') * 100;
    value += (record->digits[2] - '0') * 10;
    value += record->digits[3] - '0';

    if (record->unk0A == 0) {
        if (value >= 1300) {
            return reinterpret_cast<u8*>(record) + record->payloadOffset;
        }
    } else if (record->unk0A == 1) {
        u8* payload = reinterpret_cast<u8*>(record) + record->payloadOffset;
        if (value >= 1300) {
            return payload;
        }
    }

    return 0;
}
