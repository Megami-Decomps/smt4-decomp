/* NON_MATCHING: retail computes the region pointers cumulatively and stores them singly in the order 28, 32, 36, 44, 40; armcc computes each from the buffer and merges 32..44 into stm */
/* Hands the object its working buffer: records the buffer and the offsets of its regions, then runs the initialiser. */
#include "nn/Result.h"

extern "C" {
/* Result codes: argument missing / already initialised. */
#define RESULT_NULL_BUFFER 0xE0E0EBF6
#define RESULT_ALREADY_INITIALIZED 0xE0E0EBEB

struct BufferedObject {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 initialized;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ u8 *buffer;
    /* 0x20 */ u8 *regionA;
    /* 0x24 */ u8 *regionB;
    /* 0x28 */ u8 *regionC;
    /* 0x2C */ u8 *regionD;
};

s32 FUN_00159a08(BufferedObject *object);

s32 FUN_00146f0c(BufferedObject *object, u8 *buffer)
{
    if (buffer == NULL) {
        return RESULT_NULL_BUFFER;
    }
    if (object->initialized != 0) {
        return RESULT_ALREADY_INITIALIZED;
    }
    u8 *cursor = buffer;

    object->buffer = cursor;
    object->regionA = cursor;
    cursor += 0xB000;
    object->regionB = cursor;
    cursor += 0x4000;
    object->regionC = cursor;
    cursor += 0x800;
    object->regionD = cursor;
    s32 result = FUN_00159a08(object);
    if (nnResultIsSuccess(result)) {
        return 0;
    }
    return result;
}
}
