/* NON_MATCHING: Spring of Healing setup/teardown and hard-float arguments are recovered; root/model register allocation and shared epilogues differ. */
#include "common.h"

struct HealingModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *object;
};

struct HealingScript {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
};

struct HealingSceneWork {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u8 returnToField;
    /* 0x009 */ u8 unk009[3];
    /* 0x00C */ u32 state;
    /* 0x010 */ void *heapA;
    /* 0x014 */ void *heapB;
    /* 0x018 */ HealingScript *script;
    /* 0x01C */ u32 unk01c;
    /* 0x020 */ HealingModel *primary;
    /* 0x024 */ HealingModel *secondary;
    /* 0x028 */ HealingModel *models[3];
    /* 0x034 */ u32 unk034;
    /* 0x038 */ f32 cameraTarget[4];
    /* 0x048 */ u8 unk048[0x544];
    /* 0x58C */ void *tableFile;
    /* 0x590 */ void *entries;
    /* 0x594 */ u32 count;
    /* 0x598 */ u32 timer;
};

struct HealingFreeCamera {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09[7];
    /* 0x10 */ void *target;
};

struct HealingFieldJob {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 job;
};

struct HealingReturnState {
    /* 0x000 */ u8 unk000[0x578];
    /* 0x578 */ u32 first;
    /* 0x57C */ u32 second;
    /* 0x580 */ u32 third;
};

extern "C" {
extern void *g_handleRegistry;
extern HealingFreeCamera *g_freeCamera;
extern HealingFieldJob *DAT_0057f658;
extern f32 DAT_005f1b80[5];
extern HealingReturnState g_gameState;
void messageSetMode(u32 mode);
void FUN_002c23cc(u32 value);
void FUN_004cdddc(HealingSceneWork *work);
s32 bgmGetStateById(u32 id);
void soundChannelRequestIfEnabled(u32 id, u32 channel, u32 duration);
void FUN_0035d03c(u32 value);
s32 FUN_0040ab8c(HealingModel *model);
void FUN_0040aad4(HealingModel *model, u32 value);
void FUN_003fe86c(void *object, u32 animation, u32 mode, f32 speed, f32 blend);
void handleRegistryRegisterObject(void *registry, void *object);
HealingScript *FUN_00275bc8(void *heapA, void *heapB);
void *dataTableFileGetTable(void *file, u32 index);
void *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
void placeWinStartText(const char *text);
s32 FUN_0013def0(u32 index);
void FUN_0013cab8(u32 index, u32 duration, u32 value);
void FUN_00348c50(u32 mode);
void priceMenuUpdateScripts(HealingSceneWork *work);
void slotSetRequest(u32 index, u32 value, u32 extra);
void jobRefStopAndFree();
s32 screenFadeIsBusy();
void FUN_004cdca0(HealingSceneWork *work);
void FUN_002c2610();
void soundChannelStopAll(u32 channel);
s32 jobIsValid(u32 job);
void jobStop(u32 job, u16 option);
void FUN_003d54f8(u32 index, u32 value);
void FUN_00324c48(u32 first, u32 second, u32 third, f32 a, f32 b, f32 c, f32 d, f32 e);
void gameStateClearFlag();
void asdSequenceRequest(u32 sequence, u32 first, u32 second);
}

static __inline void registerHealingModel(HealingModel *model)
{
    FUN_0040aad4(model, 0);
    void *object = model->object;
    FUN_003fe86c(object, 0, 2, 1, 1);
    handleRegistryRegisterObject(g_handleRegistry, object);
}

// Load and run the Spring of Healing scene, then restore its field or map context.
extern "C" s32 FUN_004ce3c0(HealingSceneWork *work)
{
    switch (work->state) {
    case 0:
        messageSetMode(0);
        FUN_002c23cc(1);
        work->state = 1;
        work->timer = 0;
        break;
    case 1:
        FUN_004cdddc(work);
        if (bgmGetStateById(0x100007a) != 1)
            soundChannelRequestIfEnabled(0x100007a, 0, 60);
        FUN_0035d03c(1);
        work->state = 2;
        break;
    case 2: {
        s32 firstLoaded = FUN_0040ab8c(work->primary);
        s32 secondLoaded = FUN_0040ab8c(work->secondary);
        bool ready = firstLoaded != 0 && secondLoaded != 0;
        for (s32 index = 0; index < 3; ++index) {
            if (!FUN_0040ab8c(work->models[index]))
                ready = false;
        }
        if (work->heapA == NULL)
            ready = false;
        if (work->heapB == NULL)
            ready = false;
        if (work->tableFile != NULL && ready) {
            registerHealingModel(work->primary);
            registerHealingModel(work->secondary);
            for (s32 index = 0; index < 3; ++index)
                registerHealingModel(work->models[index]);
            work->script = FUN_00275bc8(work->heapA, work->heapB);
            work->script->state = 2;
            void *table = dataTableFileGetTable(work->tableFile, 0);
            work->entries = dataTableGetEntries(table);
            work->count = dataTableGetCount(table);
            // Retail's full-width "Spring of Healing" caption is encoded as Shift-JIS.
            placeWinStartText("\x82\x72\x82\x90\x82\x92\x82\x89\x82\x8e\x82\x87\x81\x40"
                              "\x82\x8f\x82\x86\x81\x40\x82\x67\x82\x85\x82\x81\x82\x8c"
                              "\x82\x89\x82\x8e\x82\x87");
            if (FUN_0013def0(0) == 3)
                FUN_0013cab8(0, 10, 255);
            if (FUN_0013def0(1) == 3)
                FUN_0013cab8(1, 10, 255);
            work->state = 3;
            FUN_00348c50(2);
            g_freeCamera->target = work->cameraTarget;
            g_freeCamera->active = 1;
        }
        break;
    }
    case 3:
        priceMenuUpdateScripts(work);
        break;
    case 4:
        slotSetRequest(0, 10, 255);
        slotSetRequest(1, 10, 255);
        work->state = 5;
        jobRefStopAndFree();
        break;
    case 5:
        if (!screenFadeIsBusy()) {
            FUN_004cdca0(work);
            FUN_002c2610();
            messageSetMode(1);
            FUN_0035d03c(0);
            if (work->returnToField) {
                soundChannelStopAll(15);
                HealingFieldJob *field = DAT_0057f658;
                if (jobIsValid(field->job))
                    jobStop(field->job, 0);
                FUN_003d54f8(0, 1);
                FUN_003d54f8(1, 1);
            } else {
                FUN_00324c48(g_gameState.first, g_gameState.second, g_gameState.third,
                              DAT_005f1b80[0], DAT_005f1b80[1], DAT_005f1b80[2],
                              DAT_005f1b80[3], DAT_005f1b80[4]);
                gameStateClearFlag();
                asdSequenceRequest(6, 0, 0);
            }
        }
        break;
    }
    return 0;
}
