/* NON_MATCHING: the work pointer (+4) and step counter (+0x1c) are fields of g_gameDataBlocks, one base symbol like retail, and the stick angle is atan2f of the stick pair; remaining: retail copies its constant direction tables (rodata 0x404218: the 6/12/12 float tables, after five words of another function) onto the stack with integer ldm/stm (this build uses vldmia/vstmia), unswitches the direction search on the step being at least 1 (two copies of the loop, step loaded once before it), and so places the tables at other stack offsets in a 156-byte frame. */
#include "gamedata/GameSaveBlocks.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
s32 padGetNormalizedAnalogStick(f32 *x, f32 *y, s32 flag);
f32 __hardfp_atan2f(f32 y, f32 x);
void soundPlaySeUnpanned(u32 sound);

/* Abandons the sequence when any button outside it is pressed or held. */
static s32 sequenceBroken(void)
{
    return padIsButtonRepeat(2) != 0 || padIsButtonRepeat(1) != 0 || padIsButtonRepeat(9) != 0 ||
           padIsButtonRepeat(10) != 0 || padIsButtonRepeat(0) != 0;
}

/* Watches for the hidden-mode input: with both shoulder buttons held, the stick is swept through twelve of
   the six 45-degree directions in order, then three buttons are pressed in turn; completing it toggles bit 1
   of the flags byte (the sweep runs the other way round while the bit is set) and plays a sound. Returns the
   flags byte as it was on entry. */
u8 cheatSequenceUpdate(void)
{
    const f32 directions[6] = { 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f };
    /* The direction expected at each of the twelve steps, for the normal and the reversed sweep. */
    const f32 forward[12] = { 270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f,
                              270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f };
    const f32 reverse[12] = { 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f,
                              45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f };
    u8 flags = g_gameDataBlocks.saveBlock->body.config.selection.state.modeFlags;
    if (slotIsActive(7) == 0) {
        g_gameDataBlocks.cheatSequenceStep = 0;
        return flags;
    }
    if (slotIsActive(8) == 0) {
        g_gameDataBlocks.cheatSequenceStep = 0;
        return flags;
    }
    if (g_gameDataBlocks.cheatSequenceStep < 12) {
        f32 stick[2];
        padGetNormalizedAnalogStick(&stick[0], &stick[1], 0);
        f32 angle = __hardfp_atan2f(stick[0], stick[1]) * 57.295776f;
        if (angle < 0.0f) {
            angle = angle + 360.0f;
        }
        f32 expected;
        f32 held;
        if ((flags & 2) != 0) {
            expected = reverse[g_gameDataBlocks.cheatSequenceStep];
            held = reverse[g_gameDataBlocks.cheatSequenceStep - 1];
        } else {
            expected = forward[g_gameDataBlocks.cheatSequenceStep];
            held = forward[g_gameDataBlocks.cheatSequenceStep - 1];
        }
        f32 found = -1.0f;
        for (s32 i = 0; i < 6; i++) {
            if (directions[i] - 10.0f <= angle && angle <= directions[i] + 10.0f) {
                found = directions[i];
                if (g_gameDataBlocks.cheatSequenceStep >= 1 && found == held) {
                    found = -1.0f;
                }
                break;
            }
        }
        if (found < 0.0f) {
            return flags;
        }
        if (expected != found) {
            g_gameDataBlocks.cheatSequenceStep = 0;
            return flags;
        }
        g_gameDataBlocks.cheatSequenceStep = g_gameDataBlocks.cheatSequenceStep + 1;
        return flags;
    }
    if (g_gameDataBlocks.cheatSequenceStep == 12) {
        if (padIsButtonPressed(10) == 0) {
            if (sequenceBroken()) {
                g_gameDataBlocks.cheatSequenceStep = 0;
                return flags;
            }
        } else {
            g_gameDataBlocks.cheatSequenceStep = g_gameDataBlocks.cheatSequenceStep + 1;
        }
    } else if (g_gameDataBlocks.cheatSequenceStep == 13) {
        if (padIsButtonPressed(5) == 0) {
            if (sequenceBroken()) {
                g_gameDataBlocks.cheatSequenceStep = 0;
                return flags;
            }
        } else {
            g_gameDataBlocks.cheatSequenceStep = g_gameDataBlocks.cheatSequenceStep + 1;
        }
    } else if (g_gameDataBlocks.cheatSequenceStep == 14) {
        if (padIsButtonPressed(6) != 0) {
            g_gameDataBlocks.cheatSequenceStep = g_gameDataBlocks.cheatSequenceStep + 1;
        } else if (sequenceBroken()) {
            g_gameDataBlocks.cheatSequenceStep = 0;
            return flags;
        }
    }
    if (g_gameDataBlocks.cheatSequenceStep == 15) {
        u8 current = g_gameDataBlocks.saveBlock->body.config.selection.state.modeFlags;
        if ((flags & 2) == 0) {
            current = current | 2;
        } else {
            current = current & 0xfd;
        }
        g_gameDataBlocks.saveBlock->body.config.selection.state.modeFlags = current;
        soundPlaySeUnpanned(0x1000170);
        g_gameDataBlocks.cheatSequenceStep = 0;
    }
    return flags;
}

} /* extern "C" */
