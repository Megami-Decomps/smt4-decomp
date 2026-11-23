/* NON_MATCHING: complete rewrite. Retail keeps the area in a second register around the dropped call
 * (asdDebugHookVoid, a linker NOP in both games) before queueing a path's points; it keeps the two "past the
 * last record" exits apart where the build merges them, leaves the reload search straight to the next record
 * without retesting the index, and reads the new NPC's model id once before a pair-unrolled search for the model
 * (as an inlined search function taking the id would give: 197 lines with one, but nothing else calls it). */
#include "common.h"
#include "runtime/Stdio.h"
#include "map/MapNpc.h"
#include "addon/AocSystemA.h"
#include "gamedata/DataTableAccess_Smt4a.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelManager.h"
#include "classes/Obj557b58.h"
#include "code/Code001c.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "AsdSDK/AsdDebugHooks.h"

#define MAP_NPC_PATH_HEADER_NONE 999999     /* DataTable42Record::x of an unused path header */
#define MAP_NPC_PATH_END 999998             /* DataTable42Record::x of the record that ends a path */
#define MAP_NPC_PATH_POINT_LIMIT 9999
#define MAP_NPC_AOC_RECORD_KIND 0x24        /* the downloadable NPC records of g_aocSystem */
#define MAP_NPC_SHARED_MODEL_AREA 100       /* areas above it share one model resource per model id */
#define MAP_NPC_AREA_WIDE_SCALE 50.0f
#define MAP_NPC_PATH_DURATION 4.0f
#define MAP_NPC_VRAM_RESERVE 0x1F000

extern "C" {

s32 dataTable42GetCombinedCount(void);
DataTable42Record *dataTable42GetCombinedRecord(u32 index);
s32 dataTable42GetSection0Count(void);
void vectorQueuePushPosition(f32 x, f32 y, f32 z);
void vectorQueueFinishPath(void);
MapTimerSlot *FUN_00312de8(s32 bankIndex, f32 duration);
u32 asdVramBGetFreeBytes(void);

/* One step of loading the NPCs of an area; returns 1 once every NPC of the area is placed.
 * `reload` skips the paths and the NPCs that are already placed. */
u32 mapNpcLoadStep(s32 area, s32 subArea, s32 reload)
{
    char path[0x44];
    s32 i;
    s32 j;
    s32 count;
    MapNpc *npc;
    MapNpcRecord *record;
    MoriModelContent *model;

    switch (g_mapNpcWork->loadState) {
    case MAP_NPC_LOAD_PATHS:
        if (reload != 0) {
            g_mapNpcWork->tableIndex = 0;
            g_mapNpcWork->loadState = MAP_NPC_LOAD_REQUEST;
            break;
        }
        count = dataTable42GetCombinedCount();
        for (i = 0; i < count; ++i) {
            DataTable42Record *header = dataTable42GetCombinedRecord(i);
            if (header->x != MAP_NPC_PATH_HEADER_NONE && header->x == area && header->y == subArea) {
                /* a call the release build dropped (a linker NOP in both games, no arguments set up) */
                asdDebugHookVoid();
                ++i;
                for (j = i; j < MAP_NPC_PATH_POINT_LIMIT; ++j) {
                    DataTable42Record *point = dataTable42GetCombinedRecord(i);
                    if (point->x == MAP_NPC_PATH_END)
                        break;
                    vectorQueuePushPosition((f32)point->x, (f32)point->y, (f32)point->z);
                    ++i;
                }
                vectorQueueFinishPath();
            }
        }
        g_mapNpcWork->tableIndex = 0;
        g_mapNpcWork->count = 0;
        ++g_mapNpcWork->loadState;
        break;

    case MAP_NPC_LOAD_REQUEST:
        count = dataTable42GetSection0Count();
        for (i = g_mapNpcWork->tableIndex; i < count; ++i) {
            record = (MapNpcRecord *)dataTable2aGetEntryWithAoc(i);
            if (groupedFileTablesCountRecordsOfKind(g_aocSystem, MAP_NPC_AOC_RECORD_KIND, 0) != 0) {
                if (record->area == -1) {
                    /* the installed records are over: only the downloadable ones follow */
                    if (i < count - (s32)groupedFileTablesCountRecordsOfKind(g_aocSystem, MAP_NPC_AOC_RECORD_KIND, 0))
                        continue;
                    g_mapNpcWork->tableIndex = -1;
                    g_mapNpcWork->loadState = MAP_NPC_LOAD_PATHS;
                    return 1;
                }
            } else if (record->area == -1) {
                g_mapNpcWork->tableIndex = -1;
                g_mapNpcWork->loadState = MAP_NPC_LOAD_PATHS;
                return 1;
            }
            if (record->area == area &&
                (record->subArea == subArea || record->modelId == MAP_NPC_MODEL_AREA_WIDE_A ||
                 record->modelId == MAP_NPC_MODEL_AREA_WIDE_B || record->modelId == MAP_NPC_MODEL_AREA_WIDE_C)) {
                if (flagPairCondition(record->flagFirst, record->flagSecond)) {
                    if (reload != 0) {
                        /* skip the NPCs that are still placed */
                        for (j = 0; j < MAP_NPC_COUNT; ++j) {
                            npc = &g_mapNpcWork->npcs[j];
                            if (npc->active != 0 && npc->tableIndex == i)
                                break;
                        }
                        if (j >= MAP_NPC_COUNT) {
                            g_mapNpcWork->tableIndex = i;
                            break;
                        }
                    } else {
                        g_mapNpcWork->tableIndex = i;
                        break;
                    }
                }
            }
        }

        npc = &g_mapNpcWork->npcs[g_mapNpcWork->count];
        record = (MapNpcRecord *)dataTable2aGetEntryWithAoc(g_mapNpcWork->tableIndex);
        npc->flagFirst = record->flagFirst;
        npc->flagSecond = record->flagSecond;
        npc->unk03 = 0;
        npc->tableIndex = g_mapNpcWork->tableIndex;
        npc->modelId = record->modelId;
        __2sprintf(path, "character/npc/npc_%02d.bam", npc->modelId);
        if (area > MAP_NPC_SHARED_MODEL_AREA) {
            /* an earlier NPC with the same model lends its resource */
            s32 shared = -1;
            for (j = 0; j < g_mapNpcWork->count; ++j) {
                if (g_mapNpcWork->npcs[j].modelId == npc->modelId) {
                    shared = j;
                    break;
                }
            }
            if (shared != -1) {
                model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
                                                                 "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapNpc.cpp", 277);
                if (model != NULL)
                    model = modelListInit(model);
                npc->model = model;
                moriModelContentCopyBody(model, g_mapNpcWork->npcs[shared].model, NULL);
                npc->sharedModel = 1;
            } else {
                model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
                                                                 "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapNpc.cpp", 288);
                if (model != NULL)
                    model = modelListInit(model);
                npc->model = model;
                modelLoadFileAsyncByName(model, path);
                moriModelContentSetRequestFirst(npc->model, 0x10000);
                moriModelContentSetRequestSecond(npc->model, 0x30000);
                npc->sharedModel = 0;
            }
        } else {
            model = (MoriModelContent *)asdMemoryAllocTraced(sizeof(MoriModelContent),
                                                             "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapNpc.cpp", 300);
            if (model != NULL)
                model = modelListInit(model);
            npc->model = model;
            modelLoadFileAsyncByName(model, path);
            moriModelContentSetRequestFirst(npc->model, 0x10000);
            if (!(area == 3 && subArea == 9) && asdVramBGetFreeBytes() <= MAP_NPC_VRAM_RESERVE)
                moriModelContentSetRequestSecond(npc->model, 0x30000);
            else
                moriModelContentSetRequestSecond(npc->model, 0x20000);
        }
        ++g_mapNpcWork->loadState;
        break;

    case MAP_NPC_LOAD_PLACE: {
        Obj557b18 *body;
        npc = &g_mapNpcWork->npcs[g_mapNpcWork->count];
        if (area > MAP_NPC_SHARED_MODEL_AREA) {
            if (npc->sharedModel == 0 && !moriModelContentIsLoaded(npc->model))
                break;
        } else if (!moriModelContentIsLoaded(npc->model)) {
            break;
        }
        moriModelContentLoadBody(npc->model, NULL);
        body = npc->model->body;
        modelPlayClip(body, 0, 2, 0.0f, 0.0f);
        handleRegistryRegisterObject(g_handleRegistry, body);
        record = (MapNpcRecord *)dataTable2aGetEntryWithAoc(g_mapNpcWork->tableIndex);
        dataTable42GetSection0Count();
        if (record->modelId == MAP_NPC_MODEL_AREA_WIDE_A || record->modelId == MAP_NPC_MODEL_AREA_WIDE_B ||
            record->modelId == MAP_NPC_MODEL_AREA_WIDE_C) {
            controllerSetPosition(npc->model->body, MAP_NPC_AREA_WIDE_SCALE, MAP_NPC_AREA_WIDE_SCALE,
                                  MAP_NPC_AREA_WIDE_SCALE);
        }
        npc->active = 1;
        npc->kind = record->kind;
        npc->tableIndex = g_mapNpcWork->tableIndex;
        npc->pathIndex = record->pathIndex;
        npc->pathDuration = MAP_NPC_PATH_DURATION;
        npc->position.x = record->x;
        npc->position.y = record->y;
        npc->position.z = record->z;
        npc->heading = record->heading;
        npc->unk20 = 0;
        npc->unk38 = 0;
        if (npc->kind == MAP_NPC_KIND_WALKER)
            npc->pathTimer = FUN_00312de8(npc->pathIndex, npc->pathDuration);
        ++g_mapNpcWork->count;
        ++g_mapNpcWork->tableIndex;
        g_mapNpcWork->loadState = MAP_NPC_LOAD_REQUEST;
        break;
    }
    }
    return 0;
}

} /* extern "C" */
