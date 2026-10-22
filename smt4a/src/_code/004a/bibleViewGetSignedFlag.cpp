#include "common.h"

struct BibleViewFlagState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s8 flag;
};

/* Read the signed view flag. */
extern "C" s32 bibleViewGetSignedFlag(const BibleViewFlagState *view)
{
    return view->flag;
}
