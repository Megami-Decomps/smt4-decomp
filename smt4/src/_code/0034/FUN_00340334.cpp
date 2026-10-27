#include "common.h"

struct Words3 {
    u32 w[3];
};

struct ColorTargetParams {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ Words3 first;
    /* 0x4C */ Words3 second;
    /* 0x58 */ f32 fade;
};

extern "C" {

void FUN_00340350(ColorTargetParams *self);

/* Stores the two colour-target word triples and the fade value, then applies them through FUN_00340350 (the function right after it). */
void FUN_00340334(ColorTargetParams *self, Words3 first, Words3 second, f32 fade)
{
    self->first = first;
    self->second = second;
    self->fade = fade;
    FUN_00340350(self);
}

} /* extern "C" */
