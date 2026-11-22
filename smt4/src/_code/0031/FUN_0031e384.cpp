/* NON_MATCHING: the work pointer (+4) and step counter (+0x1c) are now fields of g_gameDataBlocks, one base symbol like retail; remaining: retail copies its constant direction tables (rodata 0x404204: five button ids, then the 6/12/12 float tables) onto the stack with integer ldm/stm in pieces (mine uses vldmia pairs) and schedules the float window tests differently. */
#include "gamedata/GameSaveBlocks.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
void padGetNormalizedAnalogStick(f32 *angle, u8 buffer[16], s32 stick);
s32 __hardfp_atan2f(void);
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
u8 FUN_0031e384(void)
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
        f32 angle;
        u8 buffer[16];
        padGetNormalizedAnalogStick(&angle, buffer, 0);
        __hardfp_atan2f();
        angle = angle * 57.295776f;
        if (angle < 0.0f) {
            angle = angle + 360.0f;
        }
        const f32 *sequence = (flags & 2) != 0 ? reverse : forward;
        f32 expected = sequence[g_gameDataBlocks.cheatSequenceStep];
        f32 held = sequence[g_gameDataBlocks.cheatSequenceStep - 1];
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
