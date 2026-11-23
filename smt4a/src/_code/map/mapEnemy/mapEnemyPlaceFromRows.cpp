/* NON_MATCHING: 181 raw / 73 shape; same calls, stores, frame and block order as retail. What differs:
 * retail keeps `gone` as a real flag (`mov r4, #0`; `movne r4, #1; movne r0, r6; blne sub68OwnerStart1` after the
 * forbidden-flag test, then `cmp r4, #0`), where this build branches on the test and shares the else arm's
 * call (six rows fewer; no arrangement of the three flag tests tried keeps the flag). The row's position is
 * held in s19/s17/s16 with the 0.0f in s18 (built: s16/s17/s18 and s19, so the three-float stores become
 * `vstmia`), the second map compare loads the row's byte into r1 (built: r0), and the extra model's slot address
 * is in r0 with its flag in r1 (built: the other way round). */
#include "gamedata/MapSaveBlockA.h"
#include "util/Random.h"
#include "addon/PackageSelection.h"
#include "map/ControllerPlacement.h"
#include "map/MapEnemyGlobal.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match1_PositionedStream.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "shard/S1ModelEffect.h"

extern "C" {

s32 dataTableGetRecordFifty(void);
s32 FUN_003ded68(u16 id);
s32 gameFlagIsSetByBlockAt156c(s32 flag);
void FUN_00357b18(u32 index, s32 map, s32 room, s32 x, s32 y, s32 z, s32 visible);
void sub68OwnerStart1(u32 value);
u32 mapEnemyLoadExtraModel(s32 index);

enum {
    MAP_ENEMY_STATE_WAIT = 2,
    MAP_ENEMY_STATE_PLACED_ROUTE0 = 17,
    MAP_ENEMY_STATE_PLACED_ROUTE1 = 0
};

/* Places the current room's visible enemies from the map's placement rows: each row of this map is reported to
 * the navigation map, and each row of this room whose flags allow it takes a free enemy slot (rows whose flags
 * forbid them are reported as gone instead). An enemy close to the player, a locked one or a type-1 row with no
 * value waits and wanders; the others, and every type-3 row, get their model and are placed at once.
 * With `checkOnly`, returns 1 at the first row that would be placed (and 0 if none); otherwise whether any
 * enemy has been placed. */
u32 mapEnemyPlaceFromRows(s32 checkOnly)
{
    MapEnemyA *enemy = g_mapEnemy;

    gameFlagsGetBlock();
    enemy->flags3D88[0] = 0;
    for (s32 index = 0; index < dataTableGetRecordFifty(); index++) {
        const ControllerPlacement *row = (const ControllerPlacement *)FUN_00379958(index);
        if (row->kind == -1 || !FUN_003ded68(row->modelId)) {
            continue;
        }
        if (row->kind == (s32)enemy->requestArgs[0]) {
            FUN_00357b18(index, row->kind, row->sub, row->x, row->y, row->z, 0);
        }
        if (row->kind == (s32)enemy->requestArgs[0] && row->sub == (s32)enemy->requestArgs[1]) {
            f32 x = (f32)row->x;
            f32 y = (f32)row->y;
            f32 z = (f32)row->z;
            s32 heading = row->heading;
            bool gone = false;
            if (!gameFlagIsSetByBlockAt156c((s16)index) &&
                (row->requiredFlag == 0 || gameFlagIsSet(row->requiredFlag))) {
                if (row->forbiddenFlag != 0 && gameFlagIsSet(row->forbiddenFlag)) {
                    gone = true;
                    sub68OwnerStart1(index);
                }
                if (!gone) {
                    if (checkOnly) {
                        return 1;
                    }
                    for (s32 slot = 0; slot < MAP_ENEMY_COUNT_A; slot++) {
                        MapEnemyEntryA *entry = &enemy->entries[slot];
                        if (entry->active) {
                            continue;
                        }
                        enemy->flags3D88[0] = 1;
                        entry->active = 1;
                        entry->basePosition.x = x;
                        entry->basePosition.y = y;
                        entry->basePosition.z = z;
                        entry->previousPosition.x = x;
                        entry->previousPosition.y = y;
                        entry->previousPosition.z = z;
                        entry->position.x = x;
                        entry->position.y = y;
                        entry->position.z = entry->basePosition.z;
                        entry->heading = (f32)heading;
                        entry->moveMode = 1;
                        entry->behavior = 0;
                        entry->targetDistance = 0.0f;
                        entry->eventEnabled = 1;
                        entry->result = row->sourceValue;
                        entry->mapId = index;
                        entry->count = row->param0;
                        entry->value = row->param1;
                        entry->scriptMode = row->param2;
                        entry->message = row->param3;
                        entry->messageArgument = row->param4;
                        if (row->enemyType == 2) {
                            entry->locked = 1;
                        }
                        entry->onRadar = 0;
                        entry->level = 999;
                        entry->unk176 = 0;
                        entry->kind = row->enemyKind;
                        entry->timer13A = (s16)index;
                        mapEnemyLoadExtraModel(entry->kind);
                        entry->unk078 = row->enemyRoute;
                        if ((200.0f > distSpatial(g_lmapScene->pose.position, entry->basePosition) ||
                             (row->enemyType == 1 && row->enemyUnk0C == 0) || entry->locked) &&
                            row->enemyType != 3) {
                            entry->state = MAP_ENEMY_STATE_WAIT;
                            entry->elapsed = 0;
                            entry->randomDelay = randRange(200) + 60;
                            entry->unk090 = 0;
                            entry->unk170 = 0;
                            entry->wanderDelay = randRange(150) + 1;
                            entry->flag13C = 0;
                            entry->flag13D = 0;
                            entry->flag13F = 0;
                        } else {
                            entry->behavior = 1;
                            entry->moveMode = 1;
                            if (enemy->extraModels[entry->kind].active) {
                                MoriModelContent *model = (MoriModelContent *)asdMemoryAllocTraced(
                                    32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 0x564);
                                if (model != NULL) {
                                    model = modelListInit(model);
                                }
                                entry->model = model;
                                moriModelContentCopyBody(entry->model, enemy->extraModels[entry->kind].model, NULL);
                                handleRegistryRegisterObject(g_handleRegistry, entry->model->body);
                                entry->owned = 1;
                            } else {
                                entry->model = enemy->extraModels[entry->kind].model;
                                enemy->extraModels[entry->kind].active = 1;
                                entry->owned = 0;
                            }
                            entry->registered = 1;
                            enemy->modelCount++;
                            if (entry->unk078 == 0) {
                                entry->state = MAP_ENEMY_STATE_PLACED_ROUTE0;
                            } else if (entry->unk078 == 1) {
                                entry->state = MAP_ENEMY_STATE_PLACED_ROUTE1;
                            }
                            entry->elapsed = 0;
                            entry->randomDelay = 0;
                            entry->unk090 = 0;
                            entry->unk170 = 0;
                            entry->flag13C = 0;
                            entry->flag13D = 0;
                            entry->flag13F = 0;
                            if (entry->locked) {
                                enemy->flags3D88[1] = 1;
                            }
                        }
                        enemy->unk3D74++;
                        break;
                    }
                }
            } else {
                sub68OwnerStart1(index);
            }
        } else if (gameFlagIsSetByBlockAt156c((s16)index) ||
                   (row->requiredFlag != 0 && !gameFlagIsSet(row->requiredFlag)) ||
                   (row->forbiddenFlag != 0 && gameFlagIsSet(row->forbiddenFlag))) {
            sub68OwnerStart1(index);
        }
    }
    if (checkOnly) {
        return 0;
    }
    return enemy->unk3D74 != 0;
}

} /* extern "C" */
