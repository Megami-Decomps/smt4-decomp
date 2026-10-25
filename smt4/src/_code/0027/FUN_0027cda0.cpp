/* NON_MATCHING: readable rebuild from asm of the map unit loader's per-frame step; retail runs the clone branch of the load state straight into the finish state by a jump (the draft's goto) and keeps the spawner pointer and the zero constant in registers across the states, which armcc here compiles from separate helpers. */
#include "common.h"

/* One loaded map unit slot (0x28 bytes). */
struct UnitSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 visible;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 position[4];
    /* 0x14 */ u16 unk14;
    /* 0x16 */ u16 kind;          /* 14: the shared player model */
    /* 0x18 */ u32 model;
    /* 0x1C */ s32 id;
    /* 0x20 */ u16 flagsA;
    /* 0x22 */ u16 flagsB;
    /* 0x24 */ u8 ownsModel;      /* the model is a clone */
    /* 0x25 */ u8 unk25[3];
};

/* The unit spawner (g_mapGimic, as this step sees it). */
struct UnitSpawner {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ s16 area;
    /* 0x08 */ s16 subArea;
    /* 0x0A */ s16 step;           /* 0 find, 1 load, 2 finish, 99 done */
    /* 0x0C */ s16 index;          /* the table row being spawned */
    /* 0x0E */ s16 slot;           /* the slot chosen for it */
    /* 0x10 */ s32 loaded;
    /* 0x14 */ u8 cloneAvailable;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ s32 cloneSlot;
    /* 0x1C */ UnitSlot slots[24];
};

/* One row of the unit table. */
struct UnitRow {
    /* 0x00 */ s8 area;
    /* 0x01 */ s8 subArea;
    /* 0x02 */ s16 kind;
    /* 0x04 */ s16 position[4];
    /* 0x0C */ s16 requiredFlag;   /* must be set (0: none) */
    /* 0x0E */ s16 forbiddenFlag;  /* must not be set (0: none) */
};

extern "C" {
extern UnitSpawner *g_mapGimic;

s32 FUN_0030f6f8(void);
UnitRow *FUN_0024ad14(s32 index);
s32 gameFlagIsSet(s32 flag);
void textFormatBuffer(char *buffer, const char *format, ...);
u32 asdMdlManagerCreateSecondList(const char *name, u32 flags);
u32 asdMdlManagerClone(u32 model, u32 flags);
s32 modelHasLoadedAttachment(u32 model);
void FUN_002a0428(u32 model, s32 flag);

/* Runs the step after the model exists: marks the slot live with the row's position and advances. */
static void finishSlot(UnitSpawner *spawner)
{
    UnitRow *row = FUN_0024ad14(spawner->index);
    UnitSlot *slot = &spawner->slots[spawner->slot];
    if (slot->ownsModel == 0 && modelHasLoadedAttachment(slot->model) == 0)
        return;
    if (slot->kind == 14) {
        spawner->cloneAvailable = 1;
        spawner->cloneSlot = spawner->slot;
    }
    FUN_002a0428(slot->model, 1);
    slot->active = 1;
    slot->visible = 1;
    slot->position[0] = (f32)row->position[0];
    slot->position[1] = (f32)row->position[1];
    slot->position[2] = (f32)row->position[2];
    slot->position[3] = (f32)row->position[3];
    slot->unk14 = 0;
    slot->id = spawner->index + 0x2000;
    slot->flagsA = row->requiredFlag;
    slot->flagsB = row->forbiddenFlag;
    spawner->loaded++;
    spawner->index++;
    spawner->step = 0;
}

/* Steps the unit spawner: finds the next table row of the current area whose flags allow it, loads
 * its model into a free slot and finishes the slot. Returns 1 when the spawner is done. */
u32 FUN_0027cda0(void)
{
    UnitSpawner *spawner = g_mapGimic;
    switch (spawner->step) {
    case 0: {
        s32 i = spawner->index;
        for (; i < FUN_0030f6f8(); i++) {
            UnitRow *row = FUN_0024ad14(i);
            if (row->area < 0 || row->area != g_mapGimic->area || row->subArea != g_mapGimic->subArea)
                continue;
            s32 required = row->requiredFlag;
            s32 forbidden = row->forbiddenFlag;
            if ((required == 0 || gameFlagIsSet(required) != 0) && (forbidden == 0 || gameFlagIsSet(forbidden) == 0)) {
                UnitSpawner *current = g_mapGimic;
                current->index = (s16)i;
                s32 slot = 0;
                while (current->slots[slot].active != 0) {
                    slot++;
                    if (slot >= 24) {
                        slot = -1;
                        break;
                    }
                }
                current->slot = (s16)slot;
                if ((s16)slot != -1) {
                    current->step++;
                    return 0;
                }
                current->step = 99;
                return 1;
            }
        }
        g_mapGimic->step = 99;
        return 1;
    }
    case 1: {
        UnitRow *row = FUN_0024ad14(spawner->index);
        UnitSlot *slot = &spawner->slots[spawner->slot];
        slot->kind = row->kind;
        char path[128];
        textFormatBuffer(path, "map/unit/u%03d.bam", row->kind);
        if (slot->kind != 14) {
            slot->model = asdMdlManagerCreateSecondList(path, 7);
            slot->ownsModel = 0;
            g_mapGimic->step++;
        } else if (g_mapGimic->cloneAvailable != 0) {
            slot->model = asdMdlManagerClone(g_mapGimic->slots[g_mapGimic->cloneSlot].model, 1);
            slot->ownsModel = 1;
            g_mapGimic->step++;
            finishSlot(spawner);
        } else {
            slot->model = asdMdlManagerCreateSecondList(path, 56);
            slot->ownsModel = 0;
            g_mapGimic->step++;
        }
        return 0;
    }
    case 2:
        finishSlot(spawner);
        return 0;
    case 99:
        return 1;
    }
    return 0;
}

} /* extern "C" */
