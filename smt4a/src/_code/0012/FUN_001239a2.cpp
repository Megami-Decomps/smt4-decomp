#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ s8 *values;
} Table;

typedef struct Object {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ Table *table;
} Object;

int FUN_002ebd34(void);

/* Returns the signed byte at index FUN_002ebd34() of the object's table. */
int FUN_001239a2(Object *obj)
{
    int index = FUN_002ebd34();

    return obj->table->values[index];
}

} /* extern "C" */
