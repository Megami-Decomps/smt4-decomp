#include "addon/aocMain.h"
#include "shard/W6_W6Match6_ContentTransition.h"
#include "game/GameState.h"
#include "addon/AocSystem.h"
#include "util/BitsAndBytes.h"

struct ContentTransitionUpdate {
    ContentTransition scene;
    u8 unk048[0x10];
    u8 input[0x44]; // 0x58
    u8 tokens[0xcc4]; // 0x9c
    u32 savedToken; // 0xd60
    u8 unkd64[0xf4];
    u8 processActive; // 0xe58
    u8 unke59[3];
    u32 process; // 0xe5c
};
extern "C" {
u32 aocSelectedRecordIsUnavailable(AocSystem *);
void slotSetRequest(s32, s32, u32);
void messageMainFinishWindow();
u32 FUN_0022b8c0(void *);
void FUN_003b875c(ContentTransition *);
void transformInterpolationStep(ContentTransition *);
void uiClampScrollOffset(ContentTransition *, void *);
void moverStepOneFrame(u32);

/* True when any of the move/step request flags is set. */
static __inline bool transitionHasPendingMove(u32 flags)
{
    if (flags & 0x10)
        return true;
    if (flags & 0x200000)
        return true;
    if (flags & 0x40000)
        return true;
    if (flags & 0x800000)
        return true;
    if (flags & 0x4000000)
        return true;
    if (flags & 0x1000000)
        return true;
    if (flags & 0x2000000)
        return true;
    if (flags & 0x8000000)
        return true;
    if (flags & 0x20000000)
        return true;
    return false;
}

/* True when any of the selection-change request flags is set. */
static __inline bool transitionHasSelectionChange(u32 flags)
{
    if (flags & 0x800000)
        return true;
    if (flags & 0x1000000)
        return true;
    if (flags & 0x2000000)
        return true;
    if (flags & 0x8000000)
        return true;
    if (flags & 0x100000)
        return true;
    if (flags & 0x80000)
        return true;
    if (flags & 0x200000)
        return true;
    if (flags & 0x40000)
        return true;
    if (flags & 0x4000000)
        return true;
    if (flags & 0x20000000)
        return true;
    return false;
}

/* Starts the requested content transition (forced states, add-on loss, moves, the message window)
 * or runs the idle update, then refreshes the scene's scroll and transform. */
void updateContentTransitionDispatch(ContentTransitionUpdate *update)
{
    if (g_gameState.event.transitionRequest13) {
        update->scene.step.state = 13;
        update->scene.step.phase = 0;
        g_gameState.event.transitionRequest13 = 0;
    } else if (g_gameState.event.transitionRequest12) {
        update->scene.step.state = 12;
        update->scene.step.phase = 0;
        g_gameState.event.transitionRequest12 = 0;
    } else if (aocSelectedRecordIsUnavailable(g_aocSystem)) {
        update->scene.step.state = 14;
        update->scene.step.phase = 0;
    } else {
        u32 flags = update->scene.flags;
        if (flags & 0x400000) {
            slotSetRequest(0, 30, 0xff);
            update->scene.step.phase = 0;
            update->scene.step.state = 16;
        } else if (transitionHasPendingMove(flags)) {
            if (!(flags & 0x100))
                slotSetRequest(0, 10, 0xff);
            flags = update->scene.flags;
            if (transitionHasSelectionChange(flags) && !(flags & 0x100))
                slotSetRequest(1, 10, 0xff);
            update->scene.step.phase = 0;
            update->scene.step.state = 16;
        } else if (flags & 0x2000) {
            if (flags & 0x40) {
                update->scene.flags = flags & ~0x40;
                messageMainFinishWindow();
            }
            update->scene.step.state = 6;
            update->scene.step.phase = 0;
            update->savedToken = FUN_0022b8c0(update->tokens);
            flagsClearBits(&update->scene.flags, 0x2000);
        } else {
            FUN_003b875c(&update->scene);
        }
    }
    transformInterpolationStep(&update->scene);
    uiClampScrollOffset(&update->scene, update->input);
    if (update->processActive)
        moverStepOneFrame(update->process);
}
}
