#include "common.h"

extern "C" {

void FUN_002e98d4(s32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 inlineData[1];
} Holder;

/* Releases `data` through FUN_002e98d4 unless it is the holder's inline storage at 0x10. */
void FUN_002ee784(Holder *holder, s32 data)
{
    if (data != (s32)holder + 0x10) {
        FUN_002e98d4(data);
    }
}

} /* extern "C" */
