/* NON_MATCHING: the stages and their inlined passes are retail's; what differs:
 * - the reference-effect requests: retail keeps the name table in sl and a pointer to the formatted path in r9, both
 *   set before the loop (the build reloads `sp + 128` and uses r9 for the table), so retail saves one register more
 *   (r4-sl) and its frame is 256 bytes for the build's 260; the `'/'` argument of the strrchr is set a row later;
 * - the finish pass: retail still loads the effect kind (into r7) for the compiled-out body and enters the loop
 *   unconditionally;
 * - the camera flag: retail keeps g_btlMain in r0 and ORs through `[r0, #1588]`, the build forms the address apart;
 * - the two stage changes of the wait stage each store the flags in retail; the build shares one store;
 * - the prologue (retail: push, add, vpush, the two parameter moves around `sub sp`) and the three zero arguments
 *   of modelPartSetRotationDegrees (retail: s2, s1, s0 each from s16) are those of a <stdio.h> sprintf with the
 *   format as a literal: both come out as retail's once the unit owns "battle/effect/%s.eft" (119 raw, 55 shape).
 *   The literal (DAT_004008c4) is shared with the file's other effect loaders, so it is passed to __2sprintf here. */
#include "common.h"
#include "runtime/Stdio.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "battle/BtlEffectLoad.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlEffect.h"
#include "code/Code0023_Smt4.h"
#include "code/Code002d_Smt4.h"
#include "gfx/ModelBoneAttachment.h"
#include "map/LmapPlayerModel.h"
#include "shard/BattleSceneSlots.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "shard/W6_W6Match5_EffectLineJob.h"

extern "C" {

extern BtlEffectGlobals g_btlEffect;
extern const char DAT_00400664[11][32]; /* "ef_e_ref..." reference effect names */
extern const char DAT_004008c4[];       /* "battle/effect/%s.eft" */

void btlEffectNumberedRelease(BtlEffectWork *work);
void effectColorInitDefault(EffectColor *color);
u8 gameObjectFlagIsSet(void);
void battleCreateSecondaryModels(void *work, s32 kind);
s32 modelHasLoadedAttachment(const ModelBoneAttachmentRoot *object);
u32 modelAttachmentsUpdateFromParents(BtlEffectWork *work);
void modelSetAnimationChannels(AsdMdlObject *model, s32 index, f32 blend);
void animPlayerSetLoopPolicy(AsdMdlNode *node, s32 loop);
void FUN_003dc924(BtlEffectWork *work, s32 effectKind, s32 allActors);
void FUN_003da0ec(BtlEffectWork *work);
char *libc_strcpy(char *destination, const char *source); // declcheck: local (the shared one takes unsigned int pointers)
const u8 *libc_strrchr(const u8 *text, u32 character);
u32 keyedRecordFindByName(const char *name);

} /* extern "C" */

/* Gives the unit model the default effect colour. */
static __inline void applyDefaultEffectColor(JobWork *jobWork)
{
    EffectColor color;

    effectColorInitDefault(&color);
    asdModelSetUnitSlotColor(jobWork, color.red, color.green, color.blue);
}

/* btlEffectModelsLoaded's body: whether every used model slot's attachment has loaded; marks the loaded ones. */
static __inline u32 modelSlotsLoaded(BtlEffectWork *work, s32 kind)
{
    if (kind != 0 && kind != 22) {
        for (s32 i = 0; i < 50; i++) {
            BtlEffectModelSlot *slot = &work->models[i];

            if ((slot->flags & BTL_EFFECT_MODEL_USED) != 0) {
                if (modelHasLoadedAttachment((const ModelBoneAttachmentRoot *)slot->model) == 0) {
                    return 0;
                }
                slot->flags |= BTL_EFFECT_MODEL_LOADED;
            }
        }
    }
    return 1;
}

/* Whether every target slot of the battle state (its 109 id pairs) has its model slot. Retail tests the
 * kind for 0 and 22 a second time right after modelSlotsLoaded's test, as two functions with the same guard do. */
static __inline u32 modelSlotsComplete(BtlEffectWork *work, s32 kind)
{
    if (kind != 0 && kind != 22) {
        for (s32 i = 0; i < 109; i++) {
            const BattleTargetSlot *source = &((const BattleSceneSlots *)btlGetMainState())->slots[i];

            if (source->primaryId >= 0 && source->secondaryId >= 0) {
                bool found = false;

                for (s32 j = 0; j < 50; j++) {
                    const BtlEffectModelSlot *slot = &work->models[j];

                    if (slot->primaryId == source->primaryId && slot->secondaryId == source->secondaryId) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

/* btlEffectModelsResetPlayers's body: resets the animation player of every model and publishes its selection. */
static __inline void modelSlotsResetPlayers(BtlEffectWork *work)
{
    for (s32 i = 0; i < 50; i++) {
        BtlEffectModelSlot *slot = &work->models[i];

        if ((slot->flags & BTL_EFFECT_MODEL_USED) != 0 && slot->model != NULL) {
            if (slot->model->node->unk0c < 0) {
                lightOwnerRegister(slot->model, 1);
            }
            modelPartSetRotationDegrees(slot->model->node, 0, nodeVec3(0.0f, 0.0f, 0.0f));
            modelSetAnimationChannels(slot->model, 0, 0.0f);
            animOwnerSetScale((ModelOwner *)slot->model, 0.0f);
            animPlayerSetLoopPolicy(slot->model->node, 1);
            AsdMdlObject *model = slot->model;
            model->flags |= 2;
            model->node->sceneNode->positionFollowed = 0;
            s32 selection = slot->selection;
            if (selection >= 0) {
                work->selections[selection].id = slot->primaryId;
                work->selections[selection].index = slot->selection;
            }
        }
    }
}

/* The file name part of a path (the helper FUN_003dbb40 and effectRequestByName use). */
static __inline const char *fileNameFromPath(const char *path)
{
    const u8 *separator = libc_strrchr((const u8 *)path, '/');
    return (const char *)(separator + 1);
}

/* Names an effect file slot after `path` and requests the file unless a record already provides it: the tail
 * FUN_003dadd8, FUN_003dba3c, FUN_003dbb40 and effectRequestByName end with (retail copies `path` into r8). */
static __inline void effectFileSlotRequest(BtlEffectFileSlot *slot, const char *path)
{
    libc_strcpy(slot->name, fileNameFromPath(path));
    if (keyedRecordFindByName(slot->name) == 0xff) {
        asdLoadFileAsyncSimple(path, (u32 *)&slot->file, 0);
        slot->flags |= 1;
    }
}

/* Requests the eleven reference effects (FUN_003dadd8 and FUN_003dba3c are the same loop over other slots). */
static __inline void referenceEffectsRequest(BtlEffectWork *work)
{
    for (s32 i = 0; i < 11; i++) {
        char path[0x80];
        char formatted[0x80];

        memClear(path, sizeof(path));
        const char *name = DAT_00400664[i];
        memClear(formatted, sizeof(formatted));
        __2sprintf(formatted, DAT_004008c4, name);
        libc_strcpy(path, formatted);
        effectFileSlotRequest(&work->referenceSlots[i], path);
    }
}

/* Whether every requested reference effect has its file (btlEventAreResourcesReady's body over these slots). */
static __inline u32 referenceEffectsReady(const BtlEffectWork *work)
{
    for (s32 i = 0; i < 11; i++) {
        BtlEffectFileSlot slot = work->referenceSlots[i];

        if ((slot.flags & 1) != 0 && slot.file == NULL) {
            return 0;
        }
    }
    return 1;
}

extern "C" {

/* The effect work's per-frame job: runs the numbered effect, keeps the unit model's colour, and steps the
 * model stages (create the secondary models, wait for them, reset their players, clone them for the acting
 * units) and the reference-effect stages (request, wait) that BtlEffectWork::flags asks for. */
s32 btlEffectModelJobDispatch(BtlEffectWork *work, JobWork *jobWork)
{
    if (work->wait > 0) {
        work->wait--;
    }
    if ((work->flags & BTL_EFFECT_JOB_NUMBERED_EFFECT) != 0 && work->numberedEffect != 0) {
        if (g_btlMain != NULL &&
            (work->numberedIndex == 2 || work->numberedIndex == 8 || work->numberedIndex == 9)) {
            g_btlMain->flags |= 0x4000000;
        }
        ((BustupEffectLineObject *)work->numberedEffect)->update();
        if (((BustupEffectLineObject *)work->numberedEffect)->isFinished() != 0) {
            btlEffectNumberedRelease(work);
        }
    }
    if ((work->flags & BTL_EFFECT_JOB_COLOR_ONCE) != 0) {
        applyDefaultEffectColor(jobWork);
    }
    if ((work->flags & BTL_EFFECT_JOB_COLOR_FOLLOW) != 0) {
        applyDefaultEffectColor(jobWork);
        if (gameObjectFlagIsSet() == 0) {
            work->flags &= ~BTL_EFFECT_JOB_COLOR_FOLLOW;
        }
    }
    if ((work->flags & BTL_EFFECT_JOB_CREATE_MODELS) != 0) {
        battleCreateSecondaryModels(g_btlEffect.data, work->effectKind);
        work->flags = (work->flags & ~BTL_EFFECT_JOB_CREATE_MODELS) | BTL_EFFECT_JOB_WAIT_MODELS;
    }
    if ((work->flags & BTL_EFFECT_JOB_WAIT_MODELS) != 0) {
        if (modelSlotsLoaded(work, work->effectKind) != 0) {
            if (modelSlotsComplete(work, work->effectKind) == 0) {
                work->flags = (work->flags & ~BTL_EFFECT_JOB_WAIT_MODELS) | BTL_EFFECT_JOB_CREATE_MODELS;
            } else {
                modelAttachmentsUpdateFromParents(work);
                modelSlotsResetPlayers(work);
                work->flags = (work->flags & ~BTL_EFFECT_JOB_WAIT_MODELS) | BTL_EFFECT_JOB_CLONE_MODELS;
            }
        }
    }
    if ((work->flags & BTL_EFFECT_JOB_CLONE_MODELS) != 0) {
        FUN_003dc924(work, work->effectKind, 0);
        work->flags = (work->flags & ~BTL_EFFECT_JOB_CLONE_MODELS) | BTL_EFFECT_JOB_FINISH_MODELS;
    }
    if ((work->flags & BTL_EFFECT_JOB_FINISH_MODELS) != 0) {
        /* the pass over the battle's actions that follows the clone stage (the loop head of FUN_003dc924):
         * nothing of its body but the state lookup is left in retail */
        for (s32 i = 0; i < 109; i++) {
            if (i < 4) {
                continue;
            }
            if ((btlGetMainState()->actions[i].status & 1) == 0) {
                continue;
            }
            if (work->effectKind == 0 || work->effectKind == 22) {
                continue;
            }
        }
        work->flags &= ~BTL_EFFECT_JOB_MODEL_STAGES;
    }
    if ((work->flags & BTL_EFFECT_JOB_LOAD_REFERENCES) != 0) {
        referenceEffectsRequest(work);
        work->flags = (work->flags & ~BTL_EFFECT_JOB_LOAD_REFERENCES) | BTL_EFFECT_JOB_WAIT_REFERENCES;
    }
    if ((work->flags & BTL_EFFECT_JOB_WAIT_REFERENCES) != 0) {
        if (referenceEffectsReady(work) != 0) {
            work->flags = (work->flags & ~BTL_EFFECT_JOB_WAIT_REFERENCES) | BTL_EFFECT_JOB_REFERENCES_READY;
        }
    }
    FUN_003da0ec(work);
    if (work->frames < 0xffff) {
        work->frames++;
    }
    return 0;
}

} /* extern "C" */
