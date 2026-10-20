#include "common.h"

extern "C" {

void onlineThreadSetPriority(u32 value);

typedef struct ValueSink {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 *source;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 value;
} ValueSink;

/* Stores `value`, then passes onlineThreadSetPriority the word `source` points at. */
void FUN_00110448(ValueSink *sink, u32 value)
{
    sink->value = value;
    onlineThreadSetPriority(*sink->source);
}

} /* extern "C" */
