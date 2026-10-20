/* Stores the value into the linked object and, when the flag is set, records the result of FUN_00306d18 for it. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[8];   /* 0x00 */
    u32 value;     /* 0x08 */
} LinkedObject;

typedef struct {
    u8 unk00[4];          /* 0x00 */
    LinkedObject *linked; /* 0x04 */
    u8 enabled;           /* 0x08 */
    u8 result;            /* 0x09 */
} Holder;

void FUN_00310284(Holder *holder);
u8 FUN_00306d18(u32 value, LinkedObject *linked, u32 a, u32 b);

void FUN_00120f86(Holder *holder, u32 value)
{
    FUN_00310284(holder);
    holder->linked->value = value;
    if (holder->enabled != 0) {
        holder->result = FUN_00306d18(value, holder->linked, 0xf, 0);
    }
}

} /* extern "C" */
