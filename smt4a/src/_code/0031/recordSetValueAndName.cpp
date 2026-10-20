#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ s32 id;
    /* 0x130 */ u8 unk130[4];
    /* 0x134 */ u32 value;
    /* 0x138 */ char name[0x44];
} Record; /* 0x17C */

typedef struct RecordList {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 count;
} RecordList;

extern RecordList DAT_00580c90;
extern Record DAT_005f32a0[];
extern char *libc_strcpy(char *dst, const char *src);

/* Finds the record with id `id` and sets its value and name. */
void recordSetValueAndName(s32 id, u32 value, const char *name)
{
    s32 i;

    for (i = 0; i < DAT_00580c90.count; i++) {
        if (DAT_005f32a0[i].id == id) {
            DAT_005f32a0[i].value = value;
            libc_strcpy(DAT_005f32a0[i].name, name);
            return;
        }
    }
}

} /* extern "C" */
