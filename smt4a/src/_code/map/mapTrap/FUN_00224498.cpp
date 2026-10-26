/* NON_MATCHING: g_gameState literal/count load precedes g_mapTrap literal/pointer load; model allocation, paths and enable operations match. */
#include "map/mapTrap.h"
#include "map/mapDepart.h"
#include "Model/ModelList.h"
#include "classes/Obj4209cc.h"
#include "util/FUN_0040aa6c.h"

extern "C" {
extern MapTrapA *g_mapTrap;
extern GameStateA g_gameState;
extern void *g_handleRegistry;
void mapTrapClearState();
void *FUN_00178b04(u32 size, const char *source, s32 line);
ModelList *modelListInit(ModelList *model);
void FUN_0040aad4(ModelList *model, s32 index);
void handleRegistryRegisterObject(void *registry, ModelResourceItem *model);
}

static __inline void enableTrapModel(ModelResourceItem *model)
{
    model->flags |= 3;
}

extern "C" {
// Build the trap effect models, including the map-specific extra display.
void FUN_00224498(s32 area, s32 map)
{
    // A pointer-bearing view cannot be added to MapTrapA's byte-aligned union at 0x0D.
    struct DisplayModels {
        u8 phase;
        u8 padding[0x1B];
        ModelList *models[3];
    };
    typedef char DisplayModelsOffsetsCheck[offsetof(DisplayModels, models) == 0x1C ? 1 : -1];
    mapTrapClearState();
    MapTrapA *trap = g_mapTrap;
    trap->setup.count = g_gameState.trapSetup.count;
    if (trap->setup.count > 0) {
        DisplayModels *display = reinterpret_cast<DisplayModels *>(&trap->display.phase);
        display->phase = 0;
        ModelList *first = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", 0x7E));
        if (first != NULL)
            first = modelListInit(first);
        display->models[0] = first;
        FUN_0040aa6c(first, "map/unit/u006.bam");
        FUN_0040aad4(display->models[0], 0);
        ModelResourceItem *firstBody = reinterpret_cast<ModelResourceItem *>(display->models[0]->content.body);
        handleRegistryRegisterObject(g_handleRegistry, firstBody);
        enableTrapModel(firstBody);

        ModelList *second = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", 0x87));
        if (second != NULL)
            second = modelListInit(second);
        display->models[1] = second;
        FUN_0040aa6c(second, "map/unit/u061.bam");
        FUN_0040aad4(display->models[1], 0);
        ModelResourceItem *secondBody = reinterpret_cast<ModelResourceItem *>(display->models[1]->content.body);
        handleRegistryRegisterObject(g_handleRegistry, secondBody);
        enableTrapModel(secondBody);
        g_mapTrap->setup.active = 1;
    }
    if (area == 0x1A && (map == 0xB || map == 0xD)) {
        DisplayModels *display = reinterpret_cast<DisplayModels *>(&g_mapTrap->display.phase);
        ModelList *extra = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", 0x99));
        if (extra != NULL)
            extra = modelListInit(extra);
        display->models[2] = extra;
        FUN_0040aa6c(extra, "map/unit/u097.bam");
        FUN_0040aad4(display->models[2], 0);
        ModelResourceItem *extraBody = reinterpret_cast<ModelResourceItem *>(display->models[2]->content.body);
        handleRegistryRegisterObject(g_handleRegistry, extraBody);
        enableTrapModel(extraBody);
    }
}
}
