#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"

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
    /* 0x020 */ u8 unk020[0x530];
};

typedef char Event3dModelMapSize[sizeof(Event3dModelMap) == 0x550 ? 1 : -1];

extern "C" {
extern const char DAT_00403658[]; /* the source path of Event3dModelMap.cpp */
extern const char DAT_00403634[]; /* "battle/battle_map/e%03d_%02d.bcenv" */
extern const char DAT_00403610[]; /* "battle/battle_map/b%03d_%02d.bam" */
extern const char DAT_00403698[]; /* "Event3dModelMap_Calc" */

void *asdMemAlloc(s32 heap, s32 align, s32 flags, s32 size, s32 clear);
void FUN_002c2044(void *object, s32 mode);
void FUN_0018a104(Event3dModelMap *map);
s32 FUN_002c1d5c(void);
void textFormatBuffer(char *buffer, const char *format, ...);
void FUN_002a09b4(char *path, s32 mode);
u32 asdMdlManagerCreateSecondList(char *path, u32 count);
s32 FUN_00221e1c(u32 handle);
void FUN_002fe144(u32 handle);

/* Creates the model-map state for battle map (mapId, variant), loads its environment and model list, and starts its calc process. */
void event3dEventModelMapCreate(u32 mapId, u32 variant)
{
    asdDebugTrace(DAT_00403658, 211);
    Event3dModelMap *map = (Event3dModelMap *)asdMemAlloc(0x100, 0x100, 0, sizeof(Event3dModelMap), 1);
    memClear(map, sizeof(Event3dModelMap));
    map->mapId = mapId;
    map->variant = variant;
    FUN_002c2044(map->unk020, 1);
    FUN_0018a104(map);
    if (FUN_002c1d5c() != 0) {
        map->loaded = 0;
    } else {
        char path[64];
        textFormatBuffer(path, DAT_00403634, map->mapId, map->variant);
        FUN_002a09b4(path, 0);
        map->environmentRequested = 1;
        textFormatBuffer(path, DAT_00403610, map->mapId, map->variant);
        map->modelList = asdMdlManagerCreateSecondList(path, 0x38);
        map->unk00C = 0;
        map->loaded = 1;
    }
    map->process = asdProcessCreateSimple((const s8 *)DAT_00403698, 2, 0, 0, FUN_00221e1c, FUN_002fe144, (u32)map);
}
}
