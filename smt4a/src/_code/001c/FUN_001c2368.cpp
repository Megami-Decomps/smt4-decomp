#include "common.h"

extern "C" {

void FUN_001b6694(u32 queue, u8 *member);
u32 FUN_001b1f04(void);

typedef struct Source3 {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 second;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 third;
} Source3;

typedef struct Params6 {
    /* 0x00 */ f32 values[6];
} Params6;

typedef struct Voice {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u8 member50[0x1C];
    /* 0x6C */ u32 first;
    /* 0x70 */ u8 second;
    /* 0x71 */ u8 unk71[3];
    /* 0x74 */ u32 third;
    /* 0x78 */ u8 unk78[0x28];
    /* 0xA0 */ u8 configured;
    /* 0xA1 */ u8 unkA1;
    /* 0xA2 */ u8 queued;
    /* 0xA3 */ u8 unkA3[9];
    /* 0xAC */ Params6 params;
} Voice;

/* Configures the voice from two parameter blocks (3 words and 6 floats), marks it configured and queues it. */
void FUN_001c2368(Voice *voice, Source3 *a, Params6 *b)
{
    u32 queue;

    voice->first = a->first;
    voice->second = a->second;
    voice->third = a->third;
    voice->params = *b;
    voice->configured = 1;
    queue = FUN_001b1f04();
    FUN_001b6694(queue, voice->member50);
    voice->queued = 1;
}

} /* extern "C" */
