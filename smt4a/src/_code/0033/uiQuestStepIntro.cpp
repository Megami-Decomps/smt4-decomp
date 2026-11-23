/* NON_MATCHING: only phase one differs: `++phase` folds to the constant 2 where retail adds 1 to the loaded switch value (and so reads the timer into r1). */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/UiControl.h"
#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {

/* Finishes the first two sprites, waits seventeen frames, then starts the remaining intro group. */
u32 uiQuestStepIntro(UiQuestApoc *work)
{
    u32 result = 0;
    u32 phase = work->introPhase;
    switch (phase) {
    case 0:
        uiSpriteAdvanceAnimation(work->sprite(10), 1.0f);
        uiSpriteAdvanceAnimation(work->sprite(11), 1.0f);
        if (uiAnimatedSpriteIsFinished(work->sprite(10)) && uiAnimatedSpriteIsFinished(work->sprite(11))) {
            ++work->introPhase;
            work->introTimer = 0;
        }
        break;
    case 1:
        if (work->introTimer < 17) {
            break;
        }
        ++work->introPhase;
        work->introTimer = 0;
        /* Continue directly into the second group on the transition frame. */
    case 2:
        uiSpriteAdvanceAnimation(work->sprite(12), 1.0f);
        uiSpriteAdvanceAnimation(work->sprite(13), 1.0f);
        uiSpriteAdvanceAnimation(work->sprite(14), 1.0f);
        uiSpriteAdvanceAnimation(work->sprite(15), 1.0f);
        if (!(uiAnimatedSpriteIsFinished(work->sprite(12)) &&
              uiAnimatedSpriteIsFinished(work->sprite(13)) && uiAnimatedSpriteIsFinished(work->sprite(14)))) {
            break;
        }
        uiSpriteSelectAnim(work->sprite(14), 9);
        ++work->introPhase;
        /* The finished intro keeps reporting completion in phase 3. */
    case 3:
        result = 1;
        break;
    }
    ++work->introTimer;
    return result;
}

} /* extern "C" */
