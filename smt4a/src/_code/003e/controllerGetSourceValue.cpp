#include "common.h"

extern "C" {

typedef struct Source {
    u8 unk00[4];
    void *data; /* 0x04 */
} Source;

typedef struct Holder {
    u8 unk00[8];
    Source *source; /* 0x08 */
} Holder;

extern f32 candidateGetPreferredValue(void *data);

/* The value read from the holder's source data, 0.0 while it has none. */
f32 controllerGetSourceValue(Holder *holder)
{
    void *data = holder->source->data;

    if (data == NULL) {
        return 0.0f;
    }
    return candidateGetPreferredValue(data);
}

} /* extern "C" */
