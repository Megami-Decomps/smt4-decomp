/* NON_MATCHING: AOC boot process step (SD card check, first request, wait for the dialog, hand over); written from the decompilation, request local and switch layout not compared with retail */
#include "addon/aocBootProcess.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

#define AOC_BOOT_STATE_CHECK 0
#define AOC_BOOT_STATE_QUERY 1
#define AOC_BOOT_STATE_OPEN_DIALOG 2
#define AOC_BOOT_STATE_CLOSE_DIALOG 3
#define AOC_BOOT_STATE_CANCEL 4
#define AOC_BOOT_STATE_DONE 5

#define AOC_FLAG_CANCEL 0x10
#define AOC_FLAG_ACTIVE_MASK 0x70
#define AOC_FLAG_PENDING_EVENT 0x10000
#define AOC_BOOT_DIALOG_MIN_FRAMES 0x1E
#define AOC_BOOT_FRAMES_MAX 0xFF

/* The package-list state of the system block, past the end of the shared layout. */
struct AocSystemBootView {
    /* 0x000 */ u8 unk000[0x314];
    /* 0x314 */ u32 packageHandle;
    /* 0x318 */ u8 unk318[0x130];
    /* 0x448 */ u32 phase;
};

struct AocBootDialogView {
    /* 0x000 */ u8 unk000[0x4CA];
    /* 0x4CA */ u8 ready;
};

extern "C" {
extern AocBoot *g_aocBoot;
extern u32 g_aocBootFinished;
extern QueuedRequestState *g_aocMain;
extern AocSystem *g_aocSystem;

void aocReleasePackageOwner(AocSystem *system);
void jobOwnerFreeSlotAndStop(void *owner);
s32 sysLightEventTryWait(void *event);
void asdFsIsSdCardDetected(void);
void jyoucyuGetTableEntry(u32 id);
void aocResetOperationState(AocSystem *system);
void aocClearDisplayFlag(AocSystem *system);
void FUN_0027e9c0(void *owner);
void FUN_0027ea28(void *owner, s32 a, s32 b, s32 c);
RequestParameters FUN_003887cc(AocSystem *system);
u8 FUN_003943f8(const void *value);
u8 strIsEmpty(const void *value);
u8 byteIsAtLeast100(const void *value);

/* Leaves the boot dialog and waits for the cancel event of the add-on system. */
static __inline void aocBootCancel(AocBoot *boot)
{
    boot->state = AOC_BOOT_STATE_CANCEL;
    aocReleasePackageOwner(g_aocSystem);
    jobOwnerFreeSlotAndStop(boot->dialog);
    boot->dialogOpen = 0;
    if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
        g_aocMain->flags &= ~AOC_FLAG_PENDING_EVENT;
}

u32 aocBootUpdate(void)
{
    AocBoot *boot = g_aocBoot;
    RequestParameters request;
    if (boot->frames < AOC_BOOT_FRAMES_MAX)
        boot->frames++;

    u32 flags = g_aocMain->flags;
    g_aocMain->flags = flags & ~AOC_FLAG_ACTIVE_MASK;
    if ((flags & AOC_FLAG_CANCEL) != 0) {
        aocBootCancel(boot);
        return 0;
    }

    switch (boot->state) {
    case AOC_BOOT_STATE_CHECK: {
        bool eventSignalled = false;
        if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0) {
            g_aocMain->flags &= ~AOC_FLAG_PENDING_EVENT;
            eventSignalled = true;
        }
        asdFsIsSdCardDetected();
        if (eventSignalled) {
            boot->state = AOC_BOOT_STATE_QUERY;
            g_aocMain->mode = 1;
            aocResetOperationState(g_aocSystem);
        } else {
            jyoucyuGetTableEntry(0);
            boot->state = AOC_BOOT_STATE_OPEN_DIALOG;
        }
        break;
    }
    case AOC_BOOT_STATE_QUERY: {
        request = FUN_003887cc(g_aocSystem);
        if (boot->dialogOpen == 0 && reinterpret_cast<AocSystemBootView *>(g_aocSystem)->packageHandle != 0) {
            reinterpret_cast<AocSystemBootView *>(g_aocSystem)->phase = 6;
            FUN_0027ea28(boot->dialog, 0xBE, 2, 0);
            boot->dialogOpen = 1;
        }
        flags = g_aocMain->flags;
        g_aocMain->flags = flags & ~AOC_FLAG_ACTIVE_MASK;
        if ((flags & AOC_FLAG_CANCEL) != 0) {
            aocBootCancel(boot);
            break;
        }
        if (FUN_003943f8(&request) != 0) {
            boot->state = AOC_BOOT_STATE_CHECK;
            FUN_0027ea28(boot->dialog, 0xBE, 2, 0);
            boot->dialogOpen = 1;
            return 0;
        }
        if (strIsEmpty(&request) != 0 || byteIsAtLeast100(&request) != 0)
            boot->state = AOC_BOOT_STATE_OPEN_DIALOG;
        return 0;
    }
    case AOC_BOOT_STATE_OPEN_DIALOG:
        if (boot->dialogOpen != 0) {
            if (boot->frames < AOC_BOOT_DIALOG_MIN_FRAMES)
                return 0;
            FUN_0027e9c0(boot->dialog);
        }
        boot->state = AOC_BOOT_STATE_CLOSE_DIALOG;
        break;
    case AOC_BOOT_STATE_CLOSE_DIALOG:
        if (boot->dialogOpen != 0) {
            if (boot->frames < AOC_BOOT_DIALOG_MIN_FRAMES)
                return 0;
            if (reinterpret_cast<AocBootDialogView *>(boot->dialog)->ready == 0)
                return 0;
            jobOwnerFreeSlotAndStop(boot->dialog);
        }
        aocClearDisplayFlag(g_aocSystem);
        g_aocSystem->getPendingRequest();
        g_aocBootFinished = 1;
        boot->state = AOC_BOOT_STATE_DONE;
        return 0xFFFFFFFF;
    case AOC_BOOT_STATE_CANCEL:
        if ((flags & 4) == 0 && (flags & 8) == 0) {
            boot->frames = 0xFFFF;
            boot->state = AOC_BOOT_STATE_CLOSE_DIALOG;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
