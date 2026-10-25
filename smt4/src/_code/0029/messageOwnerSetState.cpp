#include "common.h"

extern "C" {

struct ScriptProcess;

struct MessageOwner {
    /* 0x000 */ u8 unk000;
    /* 0x001 */ u8 state;
    /* 0x002 */ u8 unk002[10];
    /* 0x00c */ u32 unk0c;
    /* 0x010 */ u8 unk010[0x630];
    /* 0x640 */ u8 unk640[0x14];
    /* 0x654 */ ScriptProcess *process;
    /* 0x658 */ u8 finished;
    /* 0x659 */ u8 unk659[0x940 - 0x659];
    /* 0x940 */ u16 helpPreset;
};

void touchLayoutRebuildRegions(void);
void buttonHelpSetPreset(u32 preset);
void messageMainFinishWindow(void);
void scrScriptProcessStartEntry(ScriptProcess *process, s32 index);

/* Switches the message owner to `state`: state 2 shows the button help and starts the script's first entry; states 4 and 5 finish the window. */
void messageOwnerSetState(MessageOwner *owner, s32 state)
{
    u8 previous;

    owner->unk0c = 0;
    previous = owner->state;
    owner->state = state;
    if (state == 2) {
        touchLayoutRebuildRegions();
        if (previous != 4 && previous != 5) {
            buttonHelpSetPreset(owner->helpPreset & 0xff);
        }
        scrScriptProcessStartEntry(owner->process, 0);
    } else if (state == 4 || state == 5) {
        messageMainFinishWindow();
        owner->finished = 0;
    }
}

} /* extern "C" */
