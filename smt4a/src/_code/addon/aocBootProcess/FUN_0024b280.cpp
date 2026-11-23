/* NON_MATCHING: AOC boot process step (SD card check, first request, wait for the dialog, hand over). Retail hoists the constant 1 into r7 at entry (the request's kind), keeps g_aocMain in r0 into the check case, reads the dialog's ready byte with ldrsb through a split base after a call boundary (nop), and cross-jumps the top cancel into the query case's copy; registers and block layout differ. */
#include "addon/aocBootProcess.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "addon/AocSystemSmt4a.h"
#include "addon/AocSystemA.h"

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
    /* 0x318 */ u8 unk318[0x14C];
    /* 0x464 */ u32 phase;
};

struct AocBootDialogView {
    /* 0x000 */ u8 unk000[0x4CA];
    /* 0x4CA */ s8 ready;
};

extern "C" {
extern AocBootGlobals g_aocBoot;

void aocReleasePackageOwner(AocSystemA *system);
void jobOwnerFreeSlotAndStop(void *owner);
s32 sysLightEventTryWait(void *event);
s32 asdFsIsSdCardDetected(void);
void jyoucyuGetTableEntry(u32 id);
void aocResetOperationState(AocSystemA *system);
void aocEntryPanelCreateText(void *owner, s32 a, s32 b, s32 c);
RequestParameters aocSystemMountStep(AocSystemA *system);
u8 startsWithH(const void *value);
u8 strIsEmpty(const void *value);
u8 byteIsAtLeast100(const void *value);

/* Bit `bit` of a flag word, as 0 or 1. */
static __inline u32 flagBit(u32 flags, u32 bit)
{
    return (flags & (1u << bit)) >> bit;
}

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

u32 FUN_0024b280(void)
{
    AocBoot *boot = g_aocBoot.boot;
    RequestParameters request(1);
    if (boot->frames < AOC_BOOT_FRAMES_MAX)
        boot->frames++;

    u32 flags = g_aocMain->flags;
    u32 cancelled = flagBit(flags, 4);
    g_aocMain->flags = flags & ~AOC_FLAG_ACTIVE_MASK;
    if (cancelled) {
        aocBootCancel(boot);
    } else {
        switch (boot->state) {
        case AOC_BOOT_STATE_CHECK: {
            if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
                g_aocMain->flags &= ~AOC_FLAG_PENDING_EVENT;
            if (asdFsIsSdCardDetected() != 0) {
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
            request = aocSystemMountStep(g_aocSystem);
            if (boot->dialogOpen == 0 && reinterpret_cast<AocSystemBootView *>(g_aocSystem)->packageHandle != 0) {
                reinterpret_cast<AocSystemBootView *>(g_aocSystem)->phase = 6;
                aocEntryPanelCreateText(boot->dialog, 0xBE, 2, 0);
                boot->dialogOpen = 1;
            }
            flags = g_aocMain->flags;
            cancelled = flagBit(flags, 4);
            g_aocMain->flags = flags & ~AOC_FLAG_ACTIVE_MASK;
            if (cancelled) {
                aocBootCancel(boot);
                break;
            }
            if (startsWithH(&request) != 0) {
                boot->state = AOC_BOOT_STATE_CHECK;
                aocEntryPanelCreateText(boot->dialog, 0xBE, 2, 0);
                boot->dialogOpen = 1;
                break;
            }
            if (strIsEmpty(&request) != 0 || byteIsAtLeast100(&request) != 0)
                boot->state = AOC_BOOT_STATE_OPEN_DIALOG;
            return 0;
        }
        case AOC_BOOT_STATE_OPEN_DIALOG:
            if (boot->dialogOpen != 0) {
                if (boot->frames < AOC_BOOT_DIALOG_MIN_FRAMES)
                    return 0;
                flagObjAdvance(boot->dialog);
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
            g_aocBoot.finished = 1;
            boot->state = AOC_BOOT_STATE_DONE;
            return 0xFFFFFFFF;
        case AOC_BOOT_STATE_CANCEL:
            if (flagBit(flags, 2))
                break;
            if (flagBit(flags, 3))
                break;
            boot->frames = 0xFFFF;
            boot->state = AOC_BOOT_STATE_CLOSE_DIALOG;
            break;
        }
    }
    return 0;
}

} /* extern "C" */
