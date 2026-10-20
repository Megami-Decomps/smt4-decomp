#include "common.h"

extern "C" {

void FUN_00117620(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u8 memberA4[1];
} Holder;

/* Calls FUN_00117620 on the member at 0xA4. */
void FUN_00306d18(Holder *object)
{
    FUN_00117620(object->memberA4);
}

} /* extern "C" */
