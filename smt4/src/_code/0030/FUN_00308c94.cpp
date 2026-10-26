#include "common.h"

extern "C" {

typedef struct SaveSlotInfo {
    /* 0x000 */ u8 unk000[0x134];
    /* 0x134 */ u32 id;
    /* 0x138 */ char name[0x40];
} SaveSlotInfo; /* 0x178 bytes */

extern SaveSlotInfo DAT_004a1264[];

char *libc_strcpy(char *dst, const char *src);

/* Sets slot `index`'s value and name. */
void FUN_00308c94(s32 index, u32 value, const char *name)
{
    DAT_004a1264[index].id = value;
    libc_strcpy(DAT_004a1264[index].name, name);
}

} /* extern "C" */
