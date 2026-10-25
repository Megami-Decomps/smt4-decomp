/* NON_MATCHING: register allocation (retail keeps the state pointer in r5 and the scene in r4, and zero-extends the id with uxth before FUN_0029a084); the jump table
 * is a __switch$$ relocation in the build and raw words in retail. */
#include "shard/S2Scene3a.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern s32 FUN_0029e0f8(void);
extern void FUN_0029defc(u32 a, s32 b);
extern void statusPanelSetOpen(s32 a);
extern s32 flaggedValueHolderGetTotal(Scene3aSlotInfo *info);
extern s32 contentGetEntryKind(u32 id);
extern void FUN_0029a084(s32 kind, u16 id);
extern void gameGlobalsSetSelected(s32 a);
extern void gameReleaseDataReference(void);
extern void FUN_002305e8(s32 a);
extern void beginStatusPanelClose(void);
extern void messageWindowStartTimer(s32 a);
extern void asdMdlManagerDestroy(void *manager);

/* Steps the scene's loading state machine: start -> running, stop -> idle, finish -> stop. */
void FUN_003a1504(Scene3a *scene)
{
    s32 *state = &scene->state;
    Scene3aList *list;
    u16 id;

    switch (*state) {
    case SCENE3A_STATE_IDLE:
        break;
    case SCENE3A_STATE_START:
        if (FUN_0029e0f8() != 0) {
            FUN_0029defc(0xffffffff, 0);
            statusPanelSetOpen(1);
            list = &scene->lists[scene->slot];
            id = list->entries[flaggedValueHolderGetTotal(&scene->slotInfo[scene->slot])].id;
            if (id != 0) {
                if (contentGetEntryKind(id) == 4) {
                    FUN_0029a084(0, id);
                }
                if (contentGetEntryKind(id) == 5) {
                    FUN_0029a084(1, id);
                }
                if (contentGetEntryKind(id) == 6) {
                    FUN_0029a084(2, id);
                }
            }
            *state = SCENE3A_STATE_RUNNING;
        }
        break;
    case SCENE3A_STATE_RUNNING:
        break;
    case SCENE3A_STATE_STOP:
        if (FUN_00295618() != 0) {
            *state = SCENE3A_STATE_IDLE;
            gameGlobalsSetSelected(0);
            gameReleaseDataReference();
            FUN_002305e8(1);
        }
        break;
    case SCENE3A_STATE_FINISH:
        if (FUN_0029e0f8() != 0 && *state != SCENE3A_STATE_STOP) {
            if (*state == SCENE3A_STATE_START) {
                *state = SCENE3A_STATE_FINISH;
                return;
            }
            beginStatusPanelClose();
            *state = SCENE3A_STATE_STOP;
            messageWindowStartTimer(0);
            if (scene->modelManager != NULL) {
                asdMdlManagerDestroy(scene->modelManager);
                scene->modelManager = NULL;
            }
        }
        break;
    }
}

} /* extern "C" */
