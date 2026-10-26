#include "common.h"
#include "code/Code004d_Smt4a.h"

extern "C" {

typedef struct EntryFUN_004d7a60 {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ s16 value;
} EntryFUN_004d7a60;

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_004d7a60_hook(void *obj, int op, int value, int arg);

void FUN_004d7a60(void *obj, EntryFUN_004d7a60 *entry, int arg)
{
    FUN_004d7a60_hook(obj, 5, entry->value, arg);
}

} /* extern "C" */
