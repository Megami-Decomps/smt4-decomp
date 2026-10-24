/* NON_MATCHING: frame layout differs (armcc keeps an extra stack slot and rotates the loop head; retail keeps the second table base in r7 and uses a 16-byte frame) */
#include "common.h"

struct StreamKind {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
};

/* A stream decoder: its kind selects the member functions of the two step tables. */
class StreamDecoder {
public:
    const StreamKind *info;
};

typedef u32 (StreamDecoder::*DecodeFirstStep)(s32 *carry, s32 *value);
typedef u32 (StreamDecoder::*DecodeSecondStep)(s32 *result, s32 *value, s32 *carry);

struct StreamDecodeTables {
    DecodeFirstStep first[19];
    DecodeSecondStep second[19];
};

extern "C" {
extern const StreamDecodeTables DAT_005c14c4;

/* Alternates the decoder's two steps until one reports more than "continue"; a first step that
 * answers 1 stores the current value into *finalValue and ends with 0. */
u32 FUN_004351b8(StreamDecoder *decoder, s32 *finalValue, s32 *value)
{
    s32 input;
    s32 result = 0;
    s32 carry = 0;
    s32 carryCopy;
    u32 status;
    do {
        input = *value;
        DecodeFirstStep first = DAT_005c14c4.first[decoder->info->kind];
        status = (decoder->*first)(&carry, &input);
        if (status == 1) {
            *finalValue = *value;
            return 0;
        }
        if (status != 0) {
            return status;
        }
        input = *value;
        carryCopy = carry;
        DecodeSecondStep second = DAT_005c14c4.second[decoder->info->kind];
        status = (decoder->*second)(&result, &input, &carryCopy);
        if (status < 2) {
            *value = result;
        }
    } while (status < 2);
    return status;
}
}
