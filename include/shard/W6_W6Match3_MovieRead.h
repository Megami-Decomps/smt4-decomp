#ifndef W6_W6MATCH3_MOVIE_READ_H
#define W6_W6MATCH3_MOVIE_READ_H

#include "common.h"

struct MovieReadHandle {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 resourceIndex;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ u8 active;
};

extern "C" u32 mobiclipReadIsComplete(MovieReadHandle* handle);
extern "C" u32 mobiclipReadIsComplete(MovieReadHandle* handle);

#endif
