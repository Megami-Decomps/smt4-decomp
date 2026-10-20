#include "common.h"

extern "C" {

typedef struct Slot0028dc68 {
    /* 0x00 */ u8 value;
    /* 0x01 */ s8 locked;   /* once set, `value` is not overwritten */
} Slot0028dc68;

extern Slot0028dc68 DAT_0043e0b8;

/* Sets the slot's value unless it is locked; 0 clears the value and the lock. */
void messageSlotSet(s32 value)
{
    if (value != 0) {
        if (DAT_0043e0b8.locked == 0) {
            DAT_0043e0b8.value = value;
        }
        return;
    }
    DAT_0043e0b8.value = 0;
    DAT_0043e0b8.locked = 0;
}

} /* extern "C" */
