#include "common.h"

extern "C" {

void operatorDeleteArray(s32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 inlineData[1];
} Holder;

/* Releases `data` through operatorDeleteArray unless it is the holder's inline storage at 0x10. */
void inlineBufferFreeData(Holder *holder, s32 data)
{
    if (data != (s32)holder + 0x10) {
        operatorDeleteArray(data);
    }
}

} /* extern "C" */
