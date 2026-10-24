/* NON_MATCHING: identical except the r5/r6 swap: retail keeps the 0xe0a1086c failure constant in r5 and the unaligned halfword limit (two ldrb + orr) in r6; this build reverses them. */
#include "nn/Result.h"

extern "C" {

struct StreamReader;
typedef struct StreamReaderVtbl {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 (*read)(struct StreamReader *reader, void *buffer, u32 size, u32 count, u32 a, u32 b);
} StreamReaderVtbl;

typedef struct StreamReader {
    /* 0x00 */ StreamReaderVtbl *vtbl;
} StreamReader;

typedef struct CheckBuffer {
    /* 0x0000 */ u8 unk0000[0x202C];
    /* 0x202C */ u8 limitLow;
    /* 0x202D */ u8 limitHigh;
    /* 0x202E */ u8 unk202E[0x36C0 - 0x202E];
} CheckBuffer;

void *handlerRefForward(u32 size, u32 align);
s32 FUN_0042a44c(CheckBuffer *buffer);
u8 FUN_00429d80(void);
void FUN_00430e58(void *buffer);

/* Sign-bit test of an SDK result, written as the compare retail uses (ands/bmi). */
static __inline bool isNeg(s32 result)
{
    return (s32)(result & 0x80000000) < 0;
}

/* Reads a halfword from the stream and succeeds when it is not below the limit stored in a freshly built buffer. */
s32 FUN_00501c20(StreamReader *reader)
{
    u16 count;
    s32 result = reader->vtbl->read(reader, &count, 2, 1, 0, 0);
    if (isNeg(result)) {
        return result;
    }
    CheckBuffer *buffer = (CheckBuffer *)handlerRefForward(sizeof(CheckBuffer), 4);
    if (buffer == NULL) {
        return 0xc8610bf3;
    }
    if (!FUN_00429d80()) {
        FUN_00430e58(buffer);
        return 0xe0810bf8;
    }
    result = FUN_0042a44c(buffer);
    if (isNeg(result)) {
        FUN_00430e58(buffer);
        return 0xe0a1086c;
    }
    u32 lo = buffer->limitLow;
    u32 hi = buffer->limitHigh;
    u32 limit = lo | (hi << 8);
    FUN_00430e58(buffer);
    if (count >= limit) {
        return 0;
    }
    return 0xe0a1086c;
}

} /* extern "C" */
