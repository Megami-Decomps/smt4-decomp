#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x3588];
    /* 0x3588 */ s32 current;
} Holder;

extern s32 objectE0Reset(s32 id);
extern s32 DAT_0057a6e8;

/* While nothing is current, resets and records `id` (or the default when 0) if it is positive. */
void FUN_004f56cc(Holder *holder, s32 id)
{
    if (holder->current == 0) {
        s32 value;

        if (id != 0) {
            value = id;
        } else {
            value = DAT_0057a6e8;
        }

        if (value > 0) {
            objectE0Reset(value);
            holder->current = value;
        }
    }
}

} /* extern "C" */
