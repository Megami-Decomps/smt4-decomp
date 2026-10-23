/* NON_MATCHING: inlined load helper hoists model-path addresses across allocation calls and changes literal order. */
#include "map/mapTrap.h"
#include "map/mapDepart.h"
#include "Model/ModelList.h"
#include "classes/Obj4209cc.h"

extern "C" {
extern MapTrapA *g_mapTrap;
extern GameStateA g_gameState;
extern void *g_handleRegistry;
void mapTrapClearState();
void *FUN_00178b04(u32 size, const char *source, s32 line);
ModelList *modelListInit(ModelList *model);
void FUN_0040aa6c(ModelList *model, const char *path);
void FUN_0040aad4(ModelList *model, s32 index);
void handleRegistryRegisterObject(void *registry, ModelResourceItem *model);
}

static inline void loadTrapModel(ModelList **slot, const char *path, s32 line)
{
    ModelList *model = static_cast<ModelList *>(FUN_00178b04(sizeof(ModelList),
        "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", line));
    if (model != NULL)
        model = modelListInit(model);
    *slot = model;
    FUN_0040aa6c(model, path);
    FUN_0040aad4(*slot, 0);
    ModelResourceItem *body = reinterpret_cast<ModelResourceItem *>((*slot)->content.body);
    handleRegistryRegisterObject(g_handleRegistry, body);
    body->flags |= 3;
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
        loadTrapModel(&display->models[0], "map/unit/u006.bam", 0x7E);
        loadTrapModel(&display->models[1], "map/unit/u061.bam", 0x87);
        g_mapTrap->setup.active = 1;
    }
    if (area == 0x1A && (map == 0xB || map == 0xD)) {
        DisplayModels *display = reinterpret_cast<DisplayModels *>(&g_mapTrap->display.phase);
        loadTrapModel(&display->models[2], "map/unit/u097.bam", 0x99);
    }
}
}
