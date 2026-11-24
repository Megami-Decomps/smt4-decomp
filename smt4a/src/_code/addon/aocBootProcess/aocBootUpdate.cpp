#include "addon/aocBootProcess.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "addon/AocSystemSmt4a.h"
#include "addon/AocSystemA.h"
#include "ui/UiSpriteApi.h"

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

/* The sprite of the dialog whose animation the closing step waits for (uiSpriteGetCompletionState). */
struct AocBootDialogView {
    /* 0x000 */ u8 unk000[0x440];
    /* 0x440 */ UiSpriteState sprite;
};

extern "C" {
extern AocBootGlobals g_aocBoot;

void aocReleasePackageOwner(AocSystemA *system);
void jobOwnerFreeSlotAndStop(void *owner);
s32 asdFsIsSdCardDetected(void);
void jyoucyuGetTableEntry(u32 id);
void aocResetOperationState(AocSystemA *system);
void aocEntryPanelCreateText(void *owner, s32 a, s32 b, s32 c);
RequestParameters aocSystemMountStep(AocSystemA *system);
u8 startsWithH(const void *value);
u8 strIsEmpty(const void *value);
u8 byteIsAtLeast100(const void *value);

/* Leaves the boot dialog and waits for the cancel event of the add-on system. */
static __inline void aocBootCancel(AocBoot *boot)
{
    boot->state = AOC_BOOT_STATE_CANCEL;
    aocReleasePackageOwner(g_aocSystem);
    jobOwnerFreeSlotAndStop(boot->dialog);
    boot->dialogOpen = 0;
    if (sysLightEventTryWait(&g_aocMain->operationDone) != 0)
        g_aocMain->flags &= ~AOC_FLAG_PENDING_EVENT;
}

/* The AOC boot process step: checks the SD card, sends the first request, waits for the dialog and hands over;
 * a cancelled request closes the dialog first. Returns -1 once the boot has finished, else 0. */
u32 aocBootUpdate(void)
{
    AocBoot *boot = g_aocBoot.boot;
    RequestParameters request;
    if (boot->frames < AOC_BOOT_FRAMES_MAX)
        boot->frames++;

    u32 cancelled = aocMainTakeCancel();
    if (cancelled) {
        aocBootCancel(boot);
    } else {
        switch (boot->state) {
        case AOC_BOOT_STATE_CHECK: {
            if (sysLightEventTryWait(&g_aocMain->operationDone) != 0)
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
            cancelled = aocMainTakeCancel();
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
                if (boot->frames < AOC_BOOT_DIALOG_MIN_FRAMES ||
                    uiSpriteGetCompletionState(&reinterpret_cast<AocBootDialogView *>(boot->dialog)->sprite) == 0)
                    return 0;
                jobOwnerFreeSlotAndStop(boot->dialog);
            }
            aocClearDisplayFlag(g_aocSystem);
            g_aocSystem->getPendingRequest();
            g_aocBoot.finished = 1;
            boot->state = AOC_BOOT_STATE_DONE;
            return 0xFFFFFFFF;
        case AOC_BOOT_STATE_CANCEL:
            if (aocMainIsBusy(g_aocMain))
                break;
            boot->frames = 0xFFFF;
            boot->state = AOC_BOOT_STATE_CLOSE_DIALOG;
            break;
        }
    }
    return 0;
}

} /* extern "C" */
