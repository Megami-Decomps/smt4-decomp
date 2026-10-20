#include "common.h"

extern "C" {

typedef struct EntryFUN_0027e3e8 {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ s16 value;
} EntryFUN_0027e3e8;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0027e3e8_hook(void *obj, int op, int value, int arg);

void FUN_0027e3e8(void *obj, EntryFUN_0027e3e8 *entry, int arg)
{
    FUN_0027e3e8_hook(obj, 5, entry->value, arg);
}

} /* extern "C" */
