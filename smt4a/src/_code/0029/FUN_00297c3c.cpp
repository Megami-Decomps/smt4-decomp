/* NON_MATCHING: visibility updates are predicated where retail branches around OR/BIC+store; initial model-owner/global-flag loads also use swapped r0/r1. */
#include "gfx/EngineRecordList.h"
#include "map/mapDepart.h"

extern "C" {

extern EngineRecordList *g_engineRecordList;
extern GameStateA g_gameState;

/* Shows or hides each record's model and moves it to the record's placement and clip. */
void FUN_00297c3c(void)
{
    if (g_engineRecordList->capacity == 101) {
        for (s32 i = 0; i < 3; i++) {
            EngineEffectRecord *record = &g_engineRecordList->nearest[i];
            if (record->active != 0) {
                ControllerModel *model = record->ownModels->model;
                if (g_gameState.controllerFlags.secondary != 0) {
                    if ((model->flags & 1) == 0) {
                        model->flags |= 3;
                    }
                } else {
                    if ((model->flags & 1) != 0) {
                        model->flags &= ~3;
                    }
                    if (record->visible != 0) {
                        controllerSetDestination(model, record->position);
                        controllerSetRotationEulerDegrees(model, 0.0f, record->spatial.fourth, 0.0f);
                        if (slots4FGetActiveValue(model) != record->variant) {
                            FUN_003fe86c(model, record->variant, 2, 0.0f, 0.0f);
                        }
                        record->visible = 0;
                    }
                }
            }
        }
    }
    for (s32 i = 0; i < 32; i++) {
        EngineEffectRecord *record = &g_engineRecordList->records[i];
        if (record->active != 0 && record->state != 8 && record->control.unmanaged == 0) {
            ControllerModel *model;
            if (record->flag2C != 0) {
                model = record->ownModels->model;
            } else {
                model = g_engineRecordList->models[record->modelSlot].models->model;
            }
            if (g_gameState.controllerFlags.secondary != 0) {
                if ((model->flags & 1) == 0) {
                    model->flags |= 3;
                }
            } else {
                if ((model->flags & 1) != 0) {
                    model->flags &= ~3;
                }
                if (record->control.follow != 0) {
                    if (record->control.followHold != 0) {
                        if (g_gameState.controllerFlags.secondary != 0) {
                            if ((model->flags & 1) == 0) {
                                model->flags &= ~3;
                            }
                            continue;
                        }
                        if ((model->flags & 1) != 0) {
                            model->flags &= ~3;
                        }
                    } else if ((model->flags & 1) == 0) {
                        model->flags |= 3;
                    }
                }
                if (record->visible != 0) {
                    controllerSetDestination(model, record->position);
                    controllerSetRotationEulerDegrees(model, 0.0f, record->spatial.fourth, 0.0f);
                    if (slots4FGetActiveValue(model) != record->variant) {
                        FUN_003fe86c(model, record->variant, 2, 0.0f, 0.0f);
                    }
                    record->visible = 0;
                }
            }
        }
    }
}

} /* extern "C" */
