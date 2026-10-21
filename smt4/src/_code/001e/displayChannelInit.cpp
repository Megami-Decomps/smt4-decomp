#include "common.h"

struct DisplayChannels {
    /* 0x0000 */ u8 unk0000[0x385C];
    /* 0x385C */ u32 modes[5];
    /* 0x3870 */ f32 scales[5];
};

extern "C" {

/* Initializes the indexed display channel. */
void displayChannelInit(DisplayChannels *channels, u32 index)
{
    channels->modes[index] = 15;
    channels->scales[index] = 8.0f;
}

} /* extern "C" */
