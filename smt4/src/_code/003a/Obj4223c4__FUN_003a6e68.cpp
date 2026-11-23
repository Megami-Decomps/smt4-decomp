/* NON_MATCHING: only the window flag update differs: retail updates the halfword through a writeback load (`ldrh r1, [r0, #4]!; orr; strh r1, [r0]`), the build addresses it at +4 twice (the same form as FUN_003a8aa0, FUN_003a8fe0, Obj422448::buildList and Obj4223f8::confirmSelection). */
#include "classes/Obj4223c4.h"
#include "classes/Obj422594.h"
#include "shard/MessageIdList.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>
#include "status/StatusCamera.h"
#include "ui/UiSpriteApi.h"

extern "C" {
s32 uiAnimationAdvanceChannel(void *, s32);
void pointConvertToFloat(FloatPoint *, s32, s32);
void buttonHelpSetPreset(s32);
void FUN_0029d960(void *);
void messageIdListInit(MessageIdList *, u32, s32, s32);
}
void Obj4223c4::FUN_003a6e68()
{
    Obj4223c4 *screen = this;
    /* The selected-channel state extends past the shared class's declared end. */
    struct AnimationTimerGroup {
        u8 prefix[0x20];
        UiSpriteState timers[8];
    };
    struct CursorParameters {
        u8 prefix[8];
        s32 count;
        u8 remaining[0x9C];
    };
    struct OpeningScreenView {
        u8 prefix[0x14];
        u32 state;
        u32 timer;
        u8 prefix1C[4];
        CursorParameters cursor;
        FloatPoint position;
        u8 prefixD0[0xC];
        AnimationTimerGroup animation;
        MessageIdList messages;
        Obj422594 *window;
        u8 prefix594[0x10];
        s8 previewOnly;
        s8 source;
        u8 prefix5A6[0xA00E];
        s16 selectedChannel;
    };
    typedef char OpeningScreenOffsets[
        offsetof(OpeningScreenView, position) == 0xC8 &&
        offsetof(OpeningScreenView, animation) == 0xDC &&
        offsetof(OpeningScreenView, messages) == 0x55C &&
        offsetof(OpeningScreenView, window) == 0x590 &&
        offsetof(OpeningScreenView, selectedChannel) == 0xA5B4 ? 1 : -1];
    OpeningScreenView *view = reinterpret_cast<OpeningScreenView *>(screen);
    s32 completed = uiAnimationAdvanceChannel(&view->animation, view->selectedChannel);
    UiSpriteState *timer = &view->animation.timers[view->selectedChannel];
    s32 y = vec2GetYInt(timer);
    s32 x = vec2GetXInt(timer);
    pointConvertToFloat(&view->position, x, y);
    if (completed == 0)
        return;

    if (!view->previewOnly)
        buttonHelpSetPreset(0x2D);
    else
        buttonHelpSetPreset(view->source == 1 ? 0x4C : 0x4D);
    FUN_0029d960(screen);
    gameGlobalsSetSubScreenActive(0);
    view->state = 2;
    view->timer = 0;
    pointConvertToFloat(&view->position, 0, 0);
    view->window->initialize(&view->cursor);
    view->window->state.flags |= 0x1000;
    s32 count = view->cursor.count < 10 ? view->cursor.count : 10;
    messageIdListInit(&view->messages, 0x1D, 0x40E, count);
    view->messages.unk10 = 1;
}
