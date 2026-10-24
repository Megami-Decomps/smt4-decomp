#include "common.h"

struct PairHolder {
    /* 0x000 */ u8 unk000[0x598];
    /* 0x598 */ u32 first;
    /* 0x59C */ u32 second;
};

extern "C" {

/* Virtual slot: answers whether both values are set. */
u32 _ZNK9Obj42244813isScreenReadyEv(const PairHolder *self)
{
    if (self->first == 0) {
        return 0;
    }
    return self->second != 0;
}

} /* extern "C" */
