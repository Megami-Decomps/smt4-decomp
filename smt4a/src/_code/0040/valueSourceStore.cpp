#include "common.h"

struct ValueSource {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 *value;
};

extern "C" {
void valueStore(u32 *destination, u32 value);

/* Copies the source value when one is present. */
void valueSourceStore(ValueSource *source, u32 value)
{
    if (source->value != NULL) {
        valueStore(source->value, value);
    }
}
}
