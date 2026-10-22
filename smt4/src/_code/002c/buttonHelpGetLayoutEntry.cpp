#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x40];
} Entry;

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x4D0];
    /* 0x4D0 */ Entry entries[1];
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} g_buttonHelp;

/* Address of the 0x40-byte entry `index` at +0x4D0 of the object. */
int buttonHelpGetLayoutEntry(int index)
{
    Obj *obj = g_buttonHelp.obj;

    return (int)&obj->entries[index];
}

} /* extern "C" */
