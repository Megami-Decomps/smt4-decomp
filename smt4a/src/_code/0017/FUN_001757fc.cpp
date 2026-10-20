#include "common.h"

extern "C" {

void nn_os_CriticalSection_Initialize(u8 *member);

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x1C4];
    /* 0x1C4 */ u8 member1C4[1];
} Holder;

/* Calls nn_os_CriticalSection_Initialize on the member at 0x1C4. */
void FUN_001757fc(Holder *object)
{
    nn_os_CriticalSection_Initialize(object->member1C4);
}

} /* extern "C" */
