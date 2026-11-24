/* NON_MATCHING: 44 lines (58 by shape). The entry, the frame and the literal pool are retail's. What differs:
 * the value-initialising `new` calls armlib's __aeabi_memclr4 by its own name where retail's object names the
 * same routine sysMemClear (0x2e6354); retail keeps the counter in r0 through the switch, so its location and
 * count constants use r1/r2 where the build reuses r0; and the location table and &g_handleRegistry sit in
 * each other's registers (sl/r9). With `u8 mode, u8 frozen` the registers agree (30 lines), but the caller
 * (FUN_00236110, IDENTICAL) passes both as words, so the parameters are word-sized. */
#include <stdio.h>
#include "classes/Obj5333c0.h"
#include "classes/Obj557b18.h"
#include "classes/Obj557b58.h"
#include "classes/Obj557d00.h"
#include "Model/MoriModelManager.h"
#include "Model/MoriScene.h"
#include "code/Code0040_Shard0040.h"
#include "gfx/ControllerModel.h"
#include "mikado/mikadoMain.h"
#include "camp/CampMenuEntry.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
void FUN_0045b538(void *owner);
void resourceOwnerLoadNamed(Obj557c48 *registry, const char *name);
void soundResetSpatialState(MikadoTalkWorkA *camera);
void moveCameraCtrlSetup(SceneTransform *camera, const char *cameraName, const char *dataName);
void linkSlotSetFlag1C(SceneTransform *camera, s32 enable);
void titleRestartSlotState3(u32 index, u32 extra);

/* Allocates and constructs a model content, as `new (file, line) MoriModelContent` does (three sites below;
 * saveLoadUIStart and the map object loaders open-code the same pair). */
static __inline MoriModelContent *newModelContent(const char *file, s32 line)
{
    void *memory = asdMemoryAllocTraced(sizeof(MoriModelContent), file, line);
    return memory != NULL ? modelListInit(memory) : NULL;
}

/* Starts the quest center scene for counter `kind`: picks the location and how many NPCs stand in it, loads
 * the NPC models (and, for a frozen scene, the location's own model), creates the camera controller and
 * requests the counter's script and message files. */
void qcCtrlStart(Obj5333c0 *scene, s32 kind, s32 mode, s32 frozen)
{
    scene->kind = kind;
    scene->mode = mode;
    scene->frozen = frozen;
    scene->npcCount = 6;
    switch (scene->kind) {
    case 1:
        scene->location = 0;
        break;
    case 9:
        scene->location = 2;
        break;
    case 10:
    case 11:
    case 12:
    case 13:
        scene->location = 3;
        break;
    default:
        scene->location = 1;
        scene->npcCount = 9;
        break;
    }

    const char *locations[4] = {
        "quest_center/bg/k2_pub/k2_pub",
        "quest_center/bg/hunter_company/hunter_company",
        "quest_center/bg/hunter_company_law/hunter_company_law",
        "quest_center/bg/hunter_company_chaos/hunter_company_chaos",
    };
    for (s32 i = 0; i < scene->npcCount; i++) {
        char path[120];     /* local to the loop body: retail's frame keeps the path buffers above the tail's two,
                             * and its size leaves room for 120 bytes here */
        sprintf(path, "%s_npc%d.bam", locations[scene->location], i + 1);
        scene->npcControllersA[i] = newModelContent("c:\\SMT4F\\SMT4F\\sdds4\\program\\quest_center\\qcCtrl.cpp", 581);
        resourceOwnerLoadFileSync(scene->npcControllersA[i], path);
        moriModelContentLoadBody(scene->npcControllersA[i], NULL);
        FUN_0045b538(scene->npcControllersA[i]->resource->unk0C);
        Obj557b18 *body = scene->npcControllersA[i]->body;
        modelPlayClip(body, 0, 0, 0.0f, 0.0f);
        body->speed = 0.0f;
        handleRegistryRegisterObject(g_handleRegistry, body);

        sprintf(path, "%s_npc%d_add1.bam", locations[scene->location], i + 1);
        scene->npcControllersB[i] = newModelContent("c:\\SMT4F\\SMT4F\\sdds4\\program\\quest_center\\qcCtrl.cpp", 602);
        resourceOwnerLoadFileSync(scene->npcControllersB[i], path);
        moriModelContentLoadBody(scene->npcControllersB[i], NULL);
        body = scene->npcControllersB[i]->body;
        handleRegistryRegisterObject(g_handleRegistry, body);
        modelPlayClip(body, 0, 1, 0.0f, 0.0f);
        body->flags |= 1;
    }
    scene->unkA5C = 30.0f;

    if (scene->frozen == 2) {
        char path[120];
        sprintf(path, "%s.bam", locations[scene->location]);
        scene->backgroundModel = newModelContent("c:\\SMT4F\\SMT4F\\sdds4\\program\\quest_center\\qcCtrl.cpp", 638);
        resourceOwnerLoadFileSync(scene->backgroundModel, path);
        moriModelContentLoadBody(scene->backgroundModel, NULL);
        FUN_0045b538(scene->backgroundModel->resource->unk0C);
        Obj557b18 *body = scene->backgroundModel->body;
        handleRegistryRegisterObject(g_handleRegistry, body);
        modelPlayClip(body, 0, 1, 0.0f, 0.0f);

        sprintf(path, "%s.bch", locations[scene->location]);
        Obj557c48 *registry = g_handleRegistry;
        resourceOwnerLoadNamed(registry, path);
        if (FUN_0040af60((LockedObj *)registry)) {
            moriModelManagerEnsureScene(registry, 1);
        }
    }

    /* The camera controller is the mikado scene's (SceneTransform is the part the scene's update reads). */
    MikadoTalkWorkA *camera = new (scene) MikadoTalkWorkA();
    scene->transform = (SceneTransform *)camera;
    soundResetSpatialState(camera);
    moveCameraCtrlSetup(scene->transform, locations[scene->location], NULL);
    linkSlotSetFlag1C(scene->transform, 0);

    char scriptPath[0x40];
    char messagePath[0x40];
    if (scene->kind == 14) {
        /* Counter 14 has two message files, chosen by flag 0x103. */
        sprintf(scriptPath, "quest_center/center/center%02d.bf", scene->kind);
        if (gameFlagIsSet(0x103)) {
            sprintf(messagePath, "quest_center/center/center%02d_b.mbm", scene->kind);
        } else {
            sprintf(messagePath, "quest_center/center/center%02d_a.mbm", scene->kind);
        }
    } else {
        sprintf(scriptPath, "quest_center/center/center%02d.bf", scene->kind);
        sprintf(messagePath, "quest_center/center/center%02d.mbm", scene->kind);
    }
    asdLoadFileAsyncSimple(scriptPath, (u32 *)&scene->secondaryData, 0);
    asdLoadFileAsyncSimple(messagePath, (u32 *)&scene->secondaryInfo, 0);
    titleRestartSlotState3(0, 0xff);
    titleRestartSlotState3(1, 0xff);
    gameCounterAddSaturating(28, 1);
}

} /* extern "C" */
