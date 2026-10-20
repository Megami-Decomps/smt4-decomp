/* NON_MATCHING: scheduling only: retail loads the array base first and moves the name argument after the pointer bump */
#include "common.h"

extern "C" {

typedef struct NamedValue {
    /* 0x00 */ u32 value;
    /* 0x04 */ char name[0x40];
} NamedValue;

typedef struct Slot00308c94 {
    /* 0x000 */ u8 unk000[0x134];
    /* 0x134 */ NamedValue named;
} Slot00308c94;  /* 0x178 */

extern Slot00308c94 DAT_004a1264[];

char *libc_strcpy(char *dst, const char *src);

/* Sets slot `index`'s value and name. */
void FUN_00308c94(s32 index, u32 value, const char *name)
{
    NamedValue *named = &DAT_004a1264[index].named;

    named->value = value;
    libc_strcpy(named->name, name);
}

} /* extern "C" */
