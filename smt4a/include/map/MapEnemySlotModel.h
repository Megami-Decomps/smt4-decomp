#ifndef SMT4A_MAP_MAPENEMYSLOTMODEL_H
#define SMT4A_MAP_MAPENEMYSLOTMODEL_H

/* How a map-enemy slot gives up its field model before it is bound to another spawn. Both functions that
 * rebind a slot (mapEnemyRebindModel from a spawn table, mapEnemyAssignSpawns from the area's spawn group) run
 * these two steps in a row; retail reloads the slot at the start of each. */

#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "classes/Obj557b18.h"

/* Unregisters the slot's model: an owned model leaves the handle registry, a borrowed extra model is
 * flagged released and its extra-model entry freed. */
static __inline void mapEnemySlotUnregisterModel(MapEnemyEntryA *slot)
{
    MoriModelContent *resource = slot->model;
    if (resource != NULL && slot->registered != 0) {
        Obj557b18 *owner = resource->body;
        if (slot->owned != 0) {
            if (owner != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, owner);
            }
            slot->registered = 0;
        } else {
            owner->flags |= 3;
            slot->registered = 0;
            g_mapEnemy->extraModels[slot->kind].active = 0;
        }
    }
}

/* Deletes the slot's model if the slot owns it, then frees the slot. */
static __inline void mapEnemySlotDropModel(MapEnemyEntryA *slot)
{
    MapEnemyA *list = g_mapEnemy;
    if (slot->model != NULL) {
        if (slot->owned != 0) {
            delete slot->model;
            slot->model = NULL;
        }
        slot->model = NULL;
        slot->active = 0;
        slot->behavior = 0;
        slot->targetIndex = -1;
        slot->moveMode = 1;
        slot->flag13C = 0;
        slot->flag13D = 0;
        slot->flag13F = 0;
        slot->flag140 = 0;
        list->modelCount--;
    }
}

#endif
