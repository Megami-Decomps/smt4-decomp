/* NON_MATCHING: ARMCC specializes the base decoder's error/consumed-count paths instead of retaining retail's shared return path. */
#include "classes/Obj42251c.h"

/* Decode the short-value record and its trailing pair of nibble values. */
extern "C" s32 shortValueNibbleRecordDecode(Obj42251cData *record, const u8 *data, u32 size)
{
    s32 consumed = obj42251cDecodeBase(record, data, size);
    if (consumed >= 0) {
        size -= consumed;
        data += consumed;
        if (size == 0) {
            return -1;
        }
        record->lowNibble = data[0] & 15;
        record->highNibble = data[0] >> 4;
        return consumed + 1;
    }
    return consumed;
}
