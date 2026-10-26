/* NON_MATCHING: block layout and instruction count now match retail; only register allocation of the profile copy (index in r2 vs r0) and the slot-flag store (r0/r1 swapped) differ */
#include "saveLoadUI/SaveLoadControllerA.h"
#include "script/scrScriptProcess.h"

extern "C" {
extern SaveLoadUIBaseA g_saveLoadUIBase;
s32 saveLoadThreadHasResult(void);
s32 scrRunOpcodesStub(ScriptRunState *script);
s32 byteArr5Get3(void);
s32 byteTripleGetV0(void);
void gameDataAddHomeButtonHold(u32 bits);
void gameDataBlocksReleaseHold(u32 bits);
void messageMainSetFlag(s32 enabled);
void sysPlaySe(s32 sound);
void *gameDataBlocksGetSaveData(void);
void __aeabi_memcpy4(void *output, const void *input, u32 size);
void scrScriptProcessStartEntry(ScriptRunState *script, s32 entry);
void saveLoadProcessCreate(s32 slot, s32 mode);

// Run a save operation, maintain the HOME-button hold and finish its success/failure script.
void FUN_0041dcc0(SaveLoadControllerA *controller)
{
    union ProgressView {
        SaveLoadControllerA base;
        struct {
            u8 unk000[0xe];
            u8 readyToFinish;
            u8 finishing;
            u8 started;
            u8 done;
            u8 unk012[0x2e];
            ScriptRunState *script;
            u8 unk044[0x18];
            u8 loading;
            u8 unk05d[0xf];
            u32 profiles[5][32];
        } operation;
        struct { u8 unk000[0x450]; s32 frame; } timing;
    };
    struct SaveProfileView { u8 unk00000[0x27044]; u32 profile[32]; };
    // The elapsed-frame field lies beyond the canonical controller prefix.
    ProgressView *work = reinterpret_cast<ProgressView *>(controller);
    if (work->operation.finishing) {
        if (!saveLoadThreadHasResult() && scrRunOpcodesStub(work->operation.script) == 2) {
            if (byteArr5Get3())
                g_saveLoadUIBase.unk00 = 1;
            else
                work->operation.done = 1;
        }
    } else if (!work->operation.started) {
        if (!work->operation.loading) {
            work->operation.started = 1;
            saveLoadProcessCreate(controller->selectedSlot + 1, 0);
            scrRunOpcodesStub(work->operation.script);
            work->timing.frame = 0;
        }
    } else {
        ++work->timing.frame;
        if (saveLoadThreadHasResult()) {
            if (work->operation.readyToFinish)
                work->operation.finishing = 1;
        } else {
            scrRunOpcodesStub(work->operation.script);
        }
        if (byteTripleGetV0()) {
            if (work->timing.frame <= 30)
                gameDataAddHomeButtonHold(1);
            else
                gameDataBlocksReleaseHold(1);
        }
        if (byteTripleGetV0() && work->timing.frame > 30) {
            messageMainSetFlag(1);
            sysPlaySe(0xa0);
            work->operation.finishing = 1;
            if (byteArr5Get3()) {
                gameDataBlocksReleaseHold(1);
                const SaveProfileView *save = static_cast<const SaveProfileView *>(gameDataBlocksGetSaveData());
                __aeabi_memcpy4(work->operation.profiles[controller->selectedSlot], save->profile, sizeof(save->profile));
                controller->slotFlags[controller->selectedSlot] = 1;
                scrScriptProcessStartEntry(work->operation.script, 5);
            } else {
                gameDataBlocksReleaseHold(1);
                scrScriptProcessStartEntry(work->operation.script, 6);
            }
        }
    }
}
}
