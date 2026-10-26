/* NON_MATCHING: preset branch placement, window flag addressing and count clamp condition differ. */
#include "classes/Obj4223c4.h"
#include "classes/Obj422594.h"
#include "shard/MessageIdList.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "ui/PartyPanelState.h"
#include <stddef.h>
#include "status/StatusCamera.h"

extern "C" {
s32 uiAnimationAdvanceChannel(void *, s32);
s32 vec2GetYInt(const TimerSlot *);
s32 vec2GetXInt(const TimerSlot *);
void pointConvertToFloat(FloatPoint *, s32, s32);
void buttonHelpSetPreset(s32);
void FUN_0029d960(void *);
void FUN_00233670(MessageIdList *, u32, s32, s32);
}

void Obj4223c4::FUN_003a6e68()
{
    Obj4223c4 *screen = this;
    /* The selected-channel state extends past the shared class's declared end. */
    struct AnimationTimerGroup {
        u8 prefix[0x20];
        TimerSlot timers[8];
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
        u8 previewOnly;
        u8 source;
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
    TimerSlot *timer = &view->animation.timers[view->selectedChannel];
    s32 y = vec2GetYInt(timer);
    s32 x = vec2GetXInt(timer);
    pointConvertToFloat(&view->position, x, y);
    if (completed == 0)
        return;

    if (view->previewOnly)
        buttonHelpSetPreset(view->source == 1 ? 0x4C : 0x4D);
    else
        buttonHelpSetPreset(0x2D);
    FUN_0029d960(screen);
    FUN_002a0cc8(0);
    view->state = 2;
    view->timer = 0;
    pointConvertToFloat(&view->position, 0, 0);
    view->window->initialize(&view->cursor);
    view->window->state |= 0x1000;
    s32 count = view->cursor.count;
    if (count >= 10)
        count = 10;
    FUN_00233670(&view->messages, 0x1D, 0x40E, count);
    view->messages.unk10 = 1;
}
