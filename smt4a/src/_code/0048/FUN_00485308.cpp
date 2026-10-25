/* NON_MATCHING: special-mode block placement and copy/zero register scheduling differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include <stddef.h>

struct StateSetterSpriteWork;
extern "C" {
u32 FUN_00318dc4(void);
void FUN_002bf4f4(u32 value);
u32 scrRunOpcodesStub(u32 process);
s32 messageGetChoiceResult(void);
u32 messageMainIsIdle(void);
void scrScriptProcessStartEntry(u32 process, u32 entry);
void uiSpriteSetImageKeyframe(UiAnimatedSprite* sprite, s32 keyframe, s32 mode);
void FUN_00183e58(void);
void stateSetterEnterState(StateSetterSpriteWork* work, s32 state);

// Run the name-confirmation script and restore the saved name when the choice requires it.
void FUN_00485308(StateSetterSpriteWork* work)
{
    // The sprite-owner definition is private to its other callback; keep that layout unchanged.
    struct NameBuffer {
        u16 text[9];
    };
    struct ConfirmationView {
        u8 unk000[0xB0];
        NameBuffer name;
        NameBuffer savedName;
        u8 unk0D4[0x18C];
        u8 editing;
        s8 mode;
        u8 unk262[0xA];
        u32 script;
        s8 scriptStarted;
        u8 unk271[0x13B];
        UiAnimatedSprite sprite;
    };
    typedef char ConfirmationOffsets[sizeof(NameBuffer) == 0x12 &&
        offsetof(ConfirmationView, name) == 0xB0 &&
        offsetof(ConfirmationView, savedName) == 0xC2 &&
        offsetof(ConfirmationView, editing) == 0x260 &&
        offsetof(ConfirmationView, mode) == 0x261 &&
        offsetof(ConfirmationView, script) == 0x26C &&
        offsetof(ConfirmationView, scriptStarted) == 0x270 &&
        offsetof(ConfirmationView, sprite) == 0x3AC ? 1 : -1];
    ConfirmationView* confirmation = reinterpret_cast<ConfirmationView*>(work);
    if (confirmation->scriptStarted != 0) {
        if (FUN_00318dc4() != 0) {
            FUN_002bf4f4(0);
        }
        if (scrRunOpcodesStub(confirmation->script) == 2) {
            if (messageGetChoiceResult() != 0) {
                if (confirmation->mode != 4) {
                    confirmation->name = confirmation->savedName;
                } else {
                    confirmation->editing = 0;
                    uiSpriteSetImageKeyframe(&confirmation->sprite, 0, 1);
                    FUN_00183e58();
                    stateSetterEnterState(work, 8);
                    return;
                }
            }
            stateSetterEnterState(work, 2);
        }
    } else if (messageMainIsIdle() != 0) {
        scrScriptProcessStartEntry(confirmation->script, confirmation->mode == 4 ? 2 : 3);
        confirmation->scriptStarted = 1;
    }
}
}
