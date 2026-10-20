#include "shard/Shard0043.h"

extern "C" {

typedef struct HalfSource {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 *values;
    /* 0x10 */ s32 index;
} HalfSource;

typedef struct HalfSink {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 flag;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u16 value;
} HalfSink;

/* Copies the next halfword of the source into the output record and advances the source index. */
u32 halfSourceNext(HalfSource *source, HalfSink **sink)
{
    (*sink)->flag = 0;
    (*sink)->value = source->values[source->index];
    source->index = source->index + 1;
    return 0;
}

} /* extern "C" */
