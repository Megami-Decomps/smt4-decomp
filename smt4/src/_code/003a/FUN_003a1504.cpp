/* NON_MATCHING: register allocation (retail keeps the state pointer in r5 and the scene in r4, and zero-extends the id with uxth before FUN_0029a084); the jump table
 * is a __switch$$ relocation in the build and raw words in retail. */
#include "shard/S2Scene3a.h"

extern "C" {

extern s32 FUN_0029e0f8(void);
extern void FUN_0029defc(u32 a, s32 b);
extern void FUN_0029d684(s32 a);
extern s32 FUN_0023360c(Scene3aSlotInfo *info);
extern s32 FUN_002ae3c0(u32 id);
extern void FUN_0029a084(s32 kind, u16 id);
extern s32 FUN_00295618(void);
extern void FUN_0029a128(s32 a);
extern void FUN_00292c0c(void);
extern void FUN_002305e8(s32 a);
extern void FUN_0029ca58(void);
extern void FUN_00230558(s32 a);
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
            FUN_0029d684(1);
            list = &scene->lists[scene->slot];
            id = list->entries[FUN_0023360c(&scene->slotInfo[scene->slot])].id;
            if (id != 0) {
                if (FUN_002ae3c0(id) == 4) {
                    FUN_0029a084(0, id);
                }
                if (FUN_002ae3c0(id) == 5) {
                    FUN_0029a084(1, id);
                }
                if (FUN_002ae3c0(id) == 6) {
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
            FUN_0029a128(0);
            FUN_00292c0c();
            FUN_002305e8(1);
        }
        break;
    case SCENE3A_STATE_FINISH:
        if (FUN_0029e0f8() != 0 && *state != SCENE3A_STATE_STOP) {
            if (*state == SCENE3A_STATE_START) {
                *state = SCENE3A_STATE_FINISH;
                return;
            }
            FUN_0029ca58();
            *state = SCENE3A_STATE_STOP;
            FUN_00230558(0);
            if (scene->modelManager != NULL) {
                asdMdlManagerDestroy(scene->modelManager);
                scene->modelManager = NULL;
            }
        }
        break;
    }
}

} /* extern "C" */
