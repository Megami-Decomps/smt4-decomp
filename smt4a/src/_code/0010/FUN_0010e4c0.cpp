/* Clears the object's 0x14-byte table, then runs the base teardown and refresh. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk000[0x2d4]; /* 0x000 */
    u8 table[0x14];   /* 0x2d4 */
} TableObject;

void FUN_0011536c(void);
void sysMemClear(void *block, s32 size);
void FUN_002f8d9c(TableObject *self);

void FUN_0010e4c0(TableObject *self)
{
    sysMemClear(self->table, sizeof(self->table));
    FUN_002f8d9c(self);
    FUN_0011536c();
}

} /* extern "C" */
