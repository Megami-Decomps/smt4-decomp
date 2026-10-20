#include "common.h"

extern "C" {

void handleSetState(void *object, s32 mode);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 value;
} Holder;

/* Calls handleSetState with mode 1 and stores `value` at 0x24. */
void onlineJobSetStateTimed(Holder *object, u32 value)
{
    handleSetState(object, 1);
    object->value = value;
}

} /* extern "C" */
