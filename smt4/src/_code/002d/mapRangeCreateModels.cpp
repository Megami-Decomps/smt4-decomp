/* NON_MATCHING: 4 lines: both area comparisons have their register operands reversed; the surrounding map checks match. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameState.h"

struct MapRangeDefinition {
    s16 area;
    s16 map;
    s16 x;
    s16 y;
    s16 z;
    s16 width;
};
struct MapRangeModelSlot {
    AsdMdlObject *handle;
    u32 unk04;
};
struct MapRangeInstance {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
    /* 0x14 */ f32 z;
    /* 0x18 */ f32 width;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u8 enabled;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ s32 definition;
    /* 0x28 */ u8 cloned;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ AsdMdlObject *clone;
    /* 0x30 */ u8 cloneEnabled;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ s32 baseModel;
    /* 0x38 */ u32 type;
};
struct MapRangeWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s16 area;
    /* 0x06 */ s16 map;
    /* 0x08 */ s16 state;
    /* 0x0A */ s16 modelIndex;
    /* 0x0C */ s16 selectedSlot;
    /* 0x0E */ u16 unk0e;
    /* 0x10 */ u32 instanceCount;
    /* 0x14 */ u32 modelCount;
    union {
        /* 0x18 */ MapRangeModelSlot models[2];
        struct {
            /* 0x18 */ u8 unk18[0xc];
            /* 0x24 */ MapRangeInstance instances[16];
        } ranges;
    };
};
extern "C" {
extern MapRangeWork *g_mapRangeWork;
s32 aocSystemGetTotalCount();
MapRangeDefinition *dataTable2dGetEntryWithAoc(s32 index);
s32 gameFlagsTestFirstBank(s16 index);
void mapRangeUpdateModelVisibilityAndTransforms();
}

static __inline bool mapRangeIsAvailable(const MapRangeDefinition *definition, s32 index)
{
    s16 area = definition->area;
    if (area == -1) {
        return false;
    }
    const MapRangeWork *work = g_mapRangeWork;
    return area == work->area && definition->map == work->map && !gameFlagsTestFirstBank((s16)index);
}

/* Count matching map ranges, then create a base model and clones for their instances. */
extern "C" s32 mapRangeCreateModels()
{
    switch (g_mapRangeWork->state) {
    case 0: {
        s32 rangeCount = 0;
        s32 modelCount = 0;
        for (s32 i = 0; i < aocSystemGetTotalCount(); ++i) {
            const MapRangeDefinition *definition = dataTable2dGetEntryWithAoc(i);
            if (mapRangeIsAvailable(definition, i)) {
                ++modelCount;
                ++rangeCount;
            }
        }
        if (modelCount == 0) {
            g_mapRangeWork->modelCount = 0;
        } else if (modelCount == 1) {
            g_mapRangeWork->modelCount = 1;
        } else {
            g_mapRangeWork->modelCount = 2;
        }
        if (rangeCount == 0) {
            g_mapRangeWork->state = 99;
            return 1;
        }
        g_mapRangeWork->modelIndex = 0;
        ++g_mapRangeWork->state;
        break;
    }
    case 1:
        g_mapRangeWork->models[g_mapRangeWork->modelIndex].handle =
            asdMdlManagerCreateFromSource(g_gameState.map.files[12].handle, g_gameState.map.files[12].buffer, 0x1c0);
        ++g_mapRangeWork->state;
        /* Populate instances as soon as the base model has been created. */
    case 2: {
        s32 created = 0;
        for (s32 i = 0; i < aocSystemGetTotalCount(); ++i) {
            const MapRangeDefinition *definition = dataTable2dGetEntryWithAoc(i);
            if (!mapRangeIsAvailable(definition, i)) {
                continue;
            }
            /* The first inactive instance slot, or -1 when all 16 are in use. */
            s32 slot = 0;
            for (;;) {
                if (!g_mapRangeWork->ranges.instances[slot].active)
                    break;
                if (++slot >= 16) {
                    slot = -1;
                    break;
                }
            }
            g_mapRangeWork->selectedSlot = slot;
            MapRangeInstance *instance = &g_mapRangeWork->ranges.instances[g_mapRangeWork->selectedSlot];
            ++g_mapRangeWork->instanceCount;
            instance->active = 1;
            instance->unk08 = 0;
            instance->state = 1;
            instance->x = definition->x;
            instance->y = definition->y;
            instance->z = definition->z;
            instance->width = definition->width;
            instance->unk1c = 0;
            instance->enabled = 1;
            instance->type = i + 0x1500;
            instance->definition = i;
            if (created == 0) {
                instance->cloned = 0;
                instance->clone = 0;
                instance->cloneEnabled = 0;
                instance->baseModel = g_mapRangeWork->modelIndex;
                lightOwnerRegister(g_mapRangeWork->models[instance->baseModel].handle, 1);
            } else {
                instance->cloned = 1;
                instance->clone = asdMdlManagerClone(g_mapRangeWork->models[g_mapRangeWork->modelIndex].handle, 0);
                instance->cloneEnabled = 1;
                instance->baseModel = 0;
                lightOwnerRegister(instance->clone, 1);
            }
            ++created;
        }
        mapRangeUpdateModelVisibilityAndTransforms();
        ++g_mapRangeWork->modelIndex;
        g_mapRangeWork->state = 99;
        return 1;
    }
    case 99:
        return 1;
    }
    return 0;
}
