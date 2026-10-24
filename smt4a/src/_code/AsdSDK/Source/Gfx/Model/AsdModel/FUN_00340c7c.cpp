/* NON_MATCHING: the MoveArray::push_back/reserve expansion matches retail; the rest differs in register use (retail keeps the settings block in r8 and the array in r9 without an sl register, passes the queued-fade word by its own pool symbol DAT_005b3c74 while reading and writing it through g_gfxSettings+0x80, and computes the progress ratio from separately loaded floats). */
#include "nw/ut/MoveArray.h"

// The part of the global model/graphics settings block (0x5b3bf4) this function reads.
struct ModelFadeSettings {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 ready;       // the model system is up
    /* 0x02 */ u8 started;     // set once a fade has been queued
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s8 mode;
    /* 0x05 */ u8 unk05[0x3b];
    /* 0x40 */ s32 pending;    // fades still waiting
    /* 0x44 */ u8 unk44[8];
    /* 0x4c */ f32 rangeStart;
    /* 0x50 */ f32 rangeEnd;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u32 target;     // model the fade applies to
    /* 0x5c */ f32 amount;
    /* 0x60 */ u8 unk60[0x20];
    /* 0x80 */ s32 handle;     // the queued fade
};

// Parameters of FUN_00451394 (0x1c bytes).
struct FadeRequest {
    u32 target;      // 0x00
    u32 targetCopy;  // 0x04
    u32 flags;       // 0x08
    u32 unk0c;       // 0x0c
    u8 enabled;      // 0x10
    u8 mode;         // 0x11
    u8 unk12[2];
    f32 progress;    // 0x14
    u8 unk18;        // 0x18
    u8 pad19[3];
};

// An object holding the handle of the first queued fade at +4.
struct FadeUser {
    u32 unk00;
    u32 firstFade;
};

extern "C" {
extern ModelFadeSettings g_gfxSettings;
extern nw::ut::MoveArray<u32> DAT_00636ee0;  // handles of the queued fades
extern s32 DAT_005b3c74;                      // the queued fade (0x80 into the settings block)
extern FadeUser *DAT_005c1430;
extern FadeUser *DAT_005c1438;

u32 asdMemoryGetDefaultAllocator(void);
s32 FUN_00451394(FadeRequest *request, u32 allocator);
void FUN_0015d8e0(s32 *handle, u32 allocator, u32 flag);
u32 FUN_0044582c(u32 allocator, s32 handle);

// Queues a fade of the model system's current target (unless one is already pending) and tells both fade users which
// fade is first in line.
void FUN_00340c7c(u32 target, u32 flags)
{
    if (g_gfxSettings.ready == 0) {
        return;
    }
    if (g_gfxSettings.pending > 0) {
        return;
    }
    s32 *queued = &g_gfxSettings.handle;
    if (*queued != 0) {
        return;
    }
    u8 mode = g_gfxSettings.mode != 2;
    g_gfxSettings.target = target;
    u32 allocator = asdMemoryGetDefaultAllocator();
    FadeRequest request;
    request.unk18 = 0;
    request.unk0c = 0;
    request.enabled = 1;
    request.target = g_gfxSettings.target;
    request.targetCopy = request.target;
    request.flags = flags | 0x2000000;
    request.mode = mode;
    request.progress = (g_gfxSettings.amount * g_gfxSettings.rangeStart) /
                       (g_gfxSettings.rangeEnd - g_gfxSettings.rangeStart);
    *queued = FUN_00451394(&request, allocator);
    FUN_0015d8e0(queued, asdMemoryGetDefaultAllocator(), 0);
    s32 handle = *queued;
    u32 fade = FUN_0044582c(asdMemoryGetDefaultAllocator(), handle);
    DAT_00636ee0.push_back(fade);
    if (DAT_005c1430 != NULL) {
        DAT_005c1430->firstFade = DAT_00636ee0.begin[0];
    }
    if (DAT_005c1438 != NULL) {
        DAT_005c1438->firstFade = DAT_00636ee0.begin[0];
    }
    g_gfxSettings.started = 1;
}
}
