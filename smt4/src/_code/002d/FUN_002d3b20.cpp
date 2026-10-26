/* NON_MATCHING: Map-range model creation and cloning are reconstructed; the count phase shares its equivalent counters and the state/instance loops lower differently. */
#include "common.h"

struct MapRangeDefinition {
    s16 area;
    s16 map;
    s16 x;
    s16 y;
    s16 z;
    s16 width;
};
struct MapRangeModelSlot {
    u32 handle;
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
    /* 0x2C */ u32 clone;
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
struct MapRangeModelSource {
    const void *source;
    u32 parameter;
};
extern "C" {
extern MapRangeWork *g_mapRangeWork;
extern MapRangeModelSource DAT_0049fc0c;
s32 aocSystemGetTotalCount();
MapRangeDefinition *dataTable2dGetEntryWithAoc(s32 index);
s32 FUN_002df7d4(s16 index);
u32 asdMdlManagerCreateFromSource(const void *source, u32 parameter, u32 flags);
u32 asdMdlManagerClone(u32 model, s32 flags);
void FUN_002a0428(u32 model, s32 enabled);
void mapRangeUpdateModelVisibilityAndTransforms();
}

static inline bool mapRangeIsAvailable(const MapRangeDefinition *definition, s32 index)
{
    return definition->area != -1 && definition->area == g_mapRangeWork->area &&
           definition->map == g_mapRangeWork->map && !FUN_002df7d4(static_cast<s16>(index));
}

/* Count matching map ranges, then create a base model and clones for their instances. */
extern "C" s32 FUN_002d3b20()
{
    switch (g_mapRangeWork->state) {
    case 0: {
        s32 count = 0;
        for (s32 i = 0; i < aocSystemGetTotalCount(); ++i) {
            if (mapRangeIsAvailable(dataTable2dGetEntryWithAoc(i), i)) {
                ++count;
            }
        }
        g_mapRangeWork->modelCount = count == 0 ? 0 : count == 1 ? 1 : 2;
        if (count != 0) {
            g_mapRangeWork->modelIndex = 0;
            ++g_mapRangeWork->state;
            return 0;
        }
        g_mapRangeWork->state = 99;
        return 1;
    }
    case 1:
        g_mapRangeWork->models[g_mapRangeWork->modelIndex].handle =
            asdMdlManagerCreateFromSource(DAT_0049fc0c.source, DAT_0049fc0c.parameter, 0x1c0);
        ++g_mapRangeWork->state;
        /* Populate instances as soon as the base model has been created. */
    case 2: {
        s32 created = 0;
        for (s32 i = 0; i < aocSystemGetTotalCount(); ++i) {
            const MapRangeDefinition *definition = dataTable2dGetEntryWithAoc(i);
            if (!mapRangeIsAvailable(definition, i)) {
                continue;
            }
            s32 slot;
            for (slot = 0; slot < 16; ++slot) {
                if (!g_mapRangeWork->ranges.instances[slot].active) break;
            }
            if (slot == 16) slot = -1;
            g_mapRangeWork->selectedSlot = static_cast<s16>(slot);
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
                FUN_002a0428(g_mapRangeWork->models[g_mapRangeWork->modelIndex].handle, 1);
            } else {
                instance->cloned = 1;
                instance->clone = asdMdlManagerClone(g_mapRangeWork->models[g_mapRangeWork->modelIndex].handle, 0);
                instance->cloneEnabled = 1;
                instance->baseModel = 0;
                FUN_002a0428(instance->clone, 1);
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
    default:
        return 0;
    }
}
