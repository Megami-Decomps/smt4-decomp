#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

/* The battle-map model state of a 3D event: the map's environment and model list, driven by a calc process. */
struct Event3dModelMap {
    /* 0x000 */ u32 process;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ s32 loaded;
    /* 0x00C */ u32 unk00C;
    /* 0x010 */ u32 mapId;
    /* 0x014 */ u32 variant;
    /* 0x018 */ u32 modelList;
    /* 0x01C */ u8 environmentRequested;
    /* 0x01D */ u8 unk01D[3];
    /* 0x020 */ u8 unk020[0x534];
};

typedef char Event3dModelMapSize[sizeof(Event3dModelMap) == 0x554 ? 1 : -1];

extern "C" {
extern const char DAT_0052f5e0[]; /* the source path of Event3dModelMap.cpp */
extern const char DAT_0052f5bc[]; /* "battle/battle_map/e%03d_%02d.bcenv" */
extern const char DAT_0052f598[]; /* "battle/battle_map/b%03d_%02d.bam" */
extern const char DAT_0052f620[]; /* "Event3dModelMap_Calc" */

void *asdMemoryAllocTracked(u32 heap, u32 alignment, u32 region, u32 size, u32 option);
void sysMemClear(void *block, u32 size);
void asdCameraInitializeDefaults(void *object, s32 mode);
void FUN_001ffba8(Event3dModelMap *map);
s32 FUN_00162ea4(void);
void textFormatBuffer(char *buffer, const char *format, ...);
void asdEnvResetModelBank(char *path, s32 mode);
u32 asdMdlManagerCreateSecondList(char *path, u32 count);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                           AsdProcUpdateFunc onUpdate, AsdProcFunc onEnd, u32 work);
s32 FUN_0031bd24(u32 handle);
void modelWorkDestroy(u32 handle);

/* Creates the model-map state for battle map (mapId, variant), loads its environment and model list, and starts its calc process. */
void event3dEventModelMapCreate(u32 mapId, u32 variant)
{
    asdDebugTrace(DAT_0052f5e0, 211);
    Event3dModelMap *map = (Event3dModelMap *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(Event3dModelMap), 1);
    sysMemClear(map, sizeof(Event3dModelMap));
    map->mapId = mapId;
    map->variant = variant;
    asdCameraInitializeDefaults(map->unk020, 1);
    FUN_001ffba8(map);
    if (FUN_00162ea4() != 0) {
        map->loaded = 0;
    } else {
        char path[64];
        textFormatBuffer(path, DAT_0052f5bc, map->mapId, map->variant);
        asdEnvResetModelBank(path, 0);
        map->environmentRequested = 1;
        textFormatBuffer(path, DAT_0052f598, map->mapId, map->variant);
        map->modelList = asdMdlManagerCreateSecondList(path, 0x38);
        map->unk00C = 0;
        map->loaded = 1;
    }
    map->process = asdProcessCreateSimple((const s8 *)DAT_0052f620, 4, 0, 0, FUN_0031bd24, modelWorkDestroy, (u32)map);
}
}
