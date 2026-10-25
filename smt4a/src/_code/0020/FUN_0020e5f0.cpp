/* NON_MATCHING: Retail push {r4, r5, r6, r7, lr} differs from recovered push {r4, r5, lr}. */
#include "common.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

struct HolderView;

struct HolderVtableView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    void (*unk08)(HolderView* self, s32 mode, s32 enabled); // 0x08
};

struct HolderView {
    HolderVtableView* vtable; // 0x00
    u8 unk04[8]; // 0x04
};

struct BootStateView {
    void* process; // 0x00
    u8 unk04; // 0x04
    u8 unk05[3]; // 0x05
    HolderView* holder; // 0x08
    u8 unk0C; // 0x0C
    u8 unk0D[3]; // 0x0D
};

extern "C" {
void* asdOperatorNew(u32 size);
void runnerShutdown();
void FUN_002ef9ec();
HolderView* vtblHolderInit557bbc(HolderView* self);
extern BootStateView* DAT_00588e2c;

// Create the boot process and its holder, then initialize the holder's mode.
void FUN_0020e5f0(void)
{
    BootStateView* state = static_cast<BootStateView*>(asdOperatorNew(16));
    if (state != 0) {
        state->holder = 0;
        state->unk04 = 0;
    }

    DAT_00588e2c = state;
    state->process = reinterpret_cast<void*>(asdProcessCreateSimple(reinterpret_cast<const s8 *>("BOOT C"), 4, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(runnerShutdown), reinterpret_cast<AsdProcFunc>(FUN_002ef9ec), 0));

    HolderView* holder = static_cast<HolderView*>(asdOperatorNew(12));
    if (holder != 0) {
        holder = vtblHolderInit557bbc(holder);
    }
    state->holder = holder;
    holder->vtable->unk08(holder, 2, 1);
    state->unk04 = 0;
    state->unk0C = 0;
}
}
