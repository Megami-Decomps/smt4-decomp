#include "common.h"

extern "C" {

void onlineUrlLazyInitOnce(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u32 value;
} Holder;

/* Runs onlineUrlLazyInitOnce and returns the word at 0x60. */
u32 onlineUrlGetText(Holder *object)
{
    onlineUrlLazyInitOnce();
    return object->value;
}

} /* extern "C" */
