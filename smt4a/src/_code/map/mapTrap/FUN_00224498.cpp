#include "map/mapTrap.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"
#include "Model/MoriModelManager.h"

extern "C" {
extern MapTrapA *g_mapTrap;
void mapTrapClearState();
void *asdMemoryAllocTraced(u32 size, const char *source, s32 line);
}

static __inline void enableTrapModel(Obj557b18 *model)
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
        MoriModelContent *models[3];
    };
    typedef char DisplayModelsOffsetsCheck[offsetof(DisplayModels, models) == 0x1C ? 1 : -1];
    mapTrapClearState();
    g_mapTrap->setup.count = g_gameState.trapCount;
    if (g_mapTrap->setup.count > 0) {
        DisplayModels *display = reinterpret_cast<DisplayModels *>(&g_mapTrap->display.phase);
        display->phase = 0;
        MoriModelContent *first = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", 0x7E));
        if (first != NULL)
            first = modelListInit(first);
        display->models[0] = first;
        resourceOwnerLoadFileSync(first, "map/unit/u006.bam");
        moriModelContentLoadBody(display->models[0], 0);
        Obj557b18 *firstBody = display->models[0]->body;
        handleRegistryRegisterObject(g_handleRegistry, firstBody);
        enableTrapModel(firstBody);

        MoriModelContent *second = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", 0x87));
        if (second != NULL)
            second = modelListInit(second);
        display->models[1] = second;
        resourceOwnerLoadFileSync(second, "map/unit/u061.bam");
        moriModelContentLoadBody(display->models[1], 0);
        Obj557b18 *secondBody = display->models[1]->body;
        handleRegistryRegisterObject(g_handleRegistry, secondBody);
        enableTrapModel(secondBody);
        g_mapTrap->setup.active = 1;
    }
    if (area == 0x1A && (map == 0xB || map == 0xD)) {
        DisplayModels *display = reinterpret_cast<DisplayModels *>(&g_mapTrap->display.phase);
        MoriModelContent *extra = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent),
            "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapTrap.cpp", 0x99));
        if (extra != NULL)
            extra = modelListInit(extra);
        display->models[2] = extra;
        resourceOwnerLoadFileSync(extra, "map/unit/u097.bam");
        moriModelContentLoadBody(display->models[2], 0);
        Obj557b18 *extraBody = display->models[2]->body;
        handleRegistryRegisterObject(g_handleRegistry, extraBody);
        enableTrapModel(extraBody);
    }
}
}
