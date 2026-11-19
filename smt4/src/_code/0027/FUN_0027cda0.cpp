/* NON_MATCHING: readable rebuild from asm of the map unit loader's per-frame step; retail runs the clone branch of the load state straight into the finish state by a jump (the draft's goto) and keeps the spawner pointer and the zero constant in registers across the states, which armcc here compiles from separate helpers. */
#include <stdio.h>
#include "map/MapGimicGlobal.h"

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

s32 FUN_0030f6f8(void);
UnitRow *FUN_0024ad14(s32 index);
s32 gameFlagIsSet(s32 flag);
AsdMdlObject *asdMdlManagerCreateSecondList(const char *name, u32 flags);
AsdMdlObject *asdMdlManagerClone(AsdMdlObject *model, u32 flags);
s32 modelHasLoadedAttachment(AsdMdlObject *model);
void lightOwnerRegister(AsdMdlObject *model, s32 flag);

/* Runs the step after the model exists: marks the slot live with the row's position and advances. */
static void finishSlot(MapGimic *spawner)
{
    UnitRow *row = FUN_0024ad14(spawner->index);
    MapGimicEntry *slot = &spawner->entries[spawner->slot];
    if (slot->ownsModel == 0 && modelHasLoadedAttachment(slot->model) == 0)
        return;
    if (slot->kind == 14) {
        spawner->cloneAvailable = 1;
        spawner->cloneSlot = spawner->slot;
    }
    lightOwnerRegister(slot->model, 1);
    slot->active = 1;
    slot->dirty = 1;
    slot->position[0] = (f32)row->position[0];
    slot->position[1] = (f32)row->position[1];
    slot->position[2] = (f32)row->position[2];
    slot->position[3] = (f32)row->position[3];
    slot->motion = 0;
    slot->gimicId = spawner->index + 0x2000;
    slot->requiredFlag = row->requiredFlag;
    slot->forbiddenFlag = row->forbiddenFlag;
    spawner->loaded++;
    spawner->index++;
    spawner->step = 0;
}

/* Steps the unit spawner: finds the next table row of the current area whose flags allow it, loads
 * its model into a free slot and finishes the slot. Returns 1 when the spawner is done. */
u32 FUN_0027cda0(void)
{
    MapGimic *spawner = g_mapGimic;
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
                MapGimic *current = g_mapGimic;
                current->index = (s16)i;
                s32 slot = 0;
                while (current->entries[slot].active != 0) {
                    slot++;
                    if (slot >= MAP_GIMIC_COUNT) {
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
        MapGimicEntry *slot = &spawner->entries[spawner->slot];
        slot->kind = row->kind;
        char path[128];
        sprintf(path, "map/unit/u%03d.bam", row->kind);
        if (slot->kind != 14) {
            slot->model = asdMdlManagerCreateSecondList(path, 7);
            slot->ownsModel = 0;
            g_mapGimic->step++;
        } else if (g_mapGimic->cloneAvailable != 0) {
            slot->model = asdMdlManagerClone(g_mapGimic->entries[g_mapGimic->cloneSlot].model, 1);
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
