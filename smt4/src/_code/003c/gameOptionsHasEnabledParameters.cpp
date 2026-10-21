#include "common.h"

struct Options {
    /* 0x000 */ u8 unk00[0x608];
    /* 0x608 */ u16 flags;
    /* 0x60a */ s16 first;
    /* 0x60c */ s16 second;
    /* 0x60e */ s16 third;
};
extern "C" Options *gameGetOptions();
/* Reports whether enabled options contain any nonzero parameter. */
extern "C" s32 gameOptionsHasEnabledParameters()
{
    Options *options = gameGetOptions();
    return (options->flags & 1) && (options->first != 0 || options->second != 0 || options->third != 0);
}
