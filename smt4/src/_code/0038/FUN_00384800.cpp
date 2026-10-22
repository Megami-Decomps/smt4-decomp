/* Picks the next state: mode 13 when both checks pass (after buttonHelpSetPreset(0x3c)), otherwise mode 6 after rebuilding the display. */
#include "common.h"

extern "C" {

typedef struct StateObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 stateStep;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s8 slot;
    /* 0x11 */ u8 unk11[0x0F];
    /* 0x20 */ u8 display[1];
} StateObject;

extern s32 FUN_00348f70(void);
extern s32 FUN_0034904c(void);
extern s32 gameFlagIsSet(u32 id);
extern void scrScriptProcessStartMappedEntry(StateObject *obj, const char *name);
extern void FUN_002355ac(s32 arg);
extern void messageMainRequestBanner(void);
extern void placeWinStartText(void);
extern void buttonHelpSetPreset(s32 arg);
extern void dataTable28Sub0GetRecord(void *display, s32 slot);

void FUN_00384800(StateObject *obj)
{
    if (FUN_0034904c() != 0 && FUN_00348f70() != 0) {
        buttonHelpSetPreset(0x3C);
        scrScriptProcessStartMappedEntry(obj, "qc_sysque_add");
        obj->state = 13;
        obj->stateStep = 0;
        return;
    }
    if (gameFlagIsSet(0x24) != 0) {
        FUN_002355ac(1);
    }
    messageMainRequestBanner();
    scrScriptProcessStartMappedEntry(obj, "qc_start");
    dataTable28Sub0GetRecord(obj->display, obj->slot);
    placeWinStartText();
    obj->state = 6;
    obj->stateStep = 0;
}

}
