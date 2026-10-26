/* NON_MATCHING: snapshot copy addressing and changed-state branch placement differ. */
#include "gamedata/SavedUnitSelection.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "code/Code0033.h"

extern "C" {
void FUN_003fd7b4(u32, f32, f32, f32);
void __aeabi_memcpy4(void *, const void *, u32);
char *libc_strcpy(char *, const char *);
void *gameDataBlocksGetSaveData();
void FUN_0033440c(u32);
void gameGlobalsQueueValues(UnitRecord *, s32);
void FUN_0034aac8(s32);
void FUN_0023b45c(s32);
void FUN_002f0384(s32);
void objBSetWordByIndex(s32, u16);

/* Restore the selected snapshot, its display name and the live session's mode flags. */
void FUN_0041eb94(SavedUnitSelection *work)
{
    /* The maximum/current groups overlap several public UnitRecord fields: keep its API intact. */
    struct UnitRestoreFields {
        UnitSevenStats base, maximum, current;
        u16 hp, mp;
        u8 unk2E[2];
        u32 bits;
        u8 unk34[0x18];
        char name[0x12];
        u8 unk5E[4];
        u16 id;
    };
    struct SaveNameView { u8 unk00[0x54]; char name[0x12]; };
    typedef char UnitRestoreOffsets[
        offsetof(UnitRestoreFields, maximum) == 0xE &&
        offsetof(UnitRestoreFields, current) == 0x1C &&
        offsetof(UnitRestoreFields, name) == 0x4C &&
        offsetof(UnitRestoreFields, id) == 0x62 &&
        offsetof(SaveNameView, name) == 0x54 ? 1 : -1];
    FUN_003fd7b4(work->resource->handle, 0.0f, -10000.0f, 0.0f);
    work->current = work->selected;
    SavedUnitChoice *choice = &work->choices[work->selected];
    UnitRestoreFields *unit = (UnitRestoreFields *)work->unit;
    unit->base = choice->base;
    unit->maximum = choice->maximum;
    __aeabi_memcpy4(&unit->current, &choice->current, sizeof(UnitSevenStats));
    unit->hp = choice->hp;
    unit->mp = choice->mp;
    unit->bits = choice->bits;
    libc_strcpy(unit->name, choice->name);
    unit->id = choice->id;
    SaveNameView *save = (SaveNameView *)gameDataBlocksGetSaveData();
    libc_strcpy(save->name, choice->name);
    FUN_0033440c(work->choices[work->selected].kind);
    gameGlobalsQueueValues(work->unit, 0);
    choice = &work->choices[work->selected];
    if (choice != NULL)
        FUN_0034aac8(choice->alternate != 0);
    if (work->changes[work->selected] != 0) {
        FUN_0033449c(0);
        FUN_0023b45c(1);
        FUN_002c8538(1);
        FUN_002f0384(1);
        work->changed = 1;
    } else {
        FUN_0033449c(0);
        FUN_0023b45c(0);
        FUN_002c8538(1);
        FUN_002f0384(0);
        work->changed = 0;
    }
    objBSetWordByIndex(1, work->unit->stats[4]);
    objBSetWordByIndex(2, work->unit->stats[5]);
    objBSetWordByIndex(0, work->unit->stats[3]);
}
}
