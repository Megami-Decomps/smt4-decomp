#include "common.h"

extern "C" {

typedef struct Slot002852f0 {
    /* 0x00 */ u8 value;
    /* 0x01 */ s8 locked;   /* once set, `value` is not overwritten */
} Slot002852f0;

extern Slot002852f0 DAT_0057f560;

/* Sets the slot's value unless it is locked; 0 clears the value and the lock. */
void messageSlotSet(s32 value)
{
    if (value != 0) {
        if (DAT_0057f560.locked == 0) {
            DAT_0057f560.value = value;
        }
        return;
    }
    DAT_0057f560.value = 0;
    DAT_0057f560.locked = 0;
}

} /* extern "C" */
