#include "common.h"

extern "C" {

int btlMainFindEntryByListedId(u8 *btl, int index);
u8 *btlGetMainState(void);
int FUN_002954bc(u32 entity);
int scrGetArg(int index);
int FUN_003bc8f8(u32 entity, u32 value);
extern u32 gameGetUnitRecord(int index);

/* Script command: looks up entity `id` (battle unit below 0x6D, otherwise party member id - 0x6D) and applies the value to it. */
u32 FUN_002f1484(void)
{
    int id = scrGetArg(0);
    u32 value = scrGetArg(1);
    u8 *btl;
    u8 *unit;
    u32 entity;

    if (id < 0x6d) {
        btlGetMainState();
        btl = btlGetMainState();
        unit = (u8 *)btlMainFindEntryByListedId(btl, id);
        entity = *(u32 *)(unit + 0x27c);
    } else {
        entity = gameGetUnitRecord(id - 0x6d);
    }
    FUN_003bc8f8(entity, value);
    FUN_002954bc(entity);
    return 1;
}

} /* extern "C" */
