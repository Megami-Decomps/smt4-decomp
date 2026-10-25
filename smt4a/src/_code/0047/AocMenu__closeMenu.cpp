/* NON_MATCHING: only register allocation differs (this build hoists the constant 3 into r8, so the step/substep pair is stored with separate STRs instead of retail's STM, and registers r5-r7 are assigned differently). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "shard/W5_W5Match2_TimedState.h"
#include "util/AocClearDisplayFlag.h"

extern "C" {
extern QueuedRequestState *g_aocMain;
extern AocSystemA *g_aocSystem;
TimedState FUN_0046f3ac(AocSystemA *system);
TimedState *timeInitializeActiveState(TimedState *state);
void FUN_00477d10(AocMenu *menu, s32 request, s32 mode);
void FUN_0047bcdc(AocMenu *menu, u32 request);
void FUN_0016ccb4(void *query);
void FUN_00169548(s32 mode);
void jobOwnerFreeSlotAndStop(void *owner);
void jobFlagsWorkStop(AocMenu *menu);
void aocReleasePackageOwner(AocSystemA *system);
void aocResetOperationState(AocSystemA *system);
s32 sysLightEventTryWait(void *event);
u8 FUN_002e19f8(void);
u8 isEmptyString(const void *value);
u8 byteIsAtLeast100(const void *value);
}

/* Bit `bit` of a flag word, as 0 or 1. */
static __inline u32 flagBit(u32 flags, u32 bit)
{
    return (flags & (1u << bit)) >> bit;
}

/* Steps the add-on menu: closes it when the display flag says so, otherwise advances the request handshake. */
void AocMenu::closeMenu()
{
    AocMenu * menu = reinterpret_cast<AocMenu *>(this);
    TimedState request;
    timeInitializeActiveState(&request);
    u32 flags = g_aocMain->flags;
    u32 closing = flagBit(flags, 4);
    flags &= ~0x70u;
    g_aocMain->flags = flags;
    if (closing) {
        FUN_00477d10(menu, -1, 0);
        jobOwnerFreeSlotAndStop(menu->jobOwner);
        jobFlagsWorkStop(menu);
        menu->step = 0x12;
        menu->substep = 0;
        if (menu->window != NULL) {
            delete menu->window;
            menu->window = NULL;
        }
        FUN_0016ccb4(reinterpret_cast<u8 *>(g_aocMain) + 0x80);
        aocClearDisplayFlag(g_aocSystem);
        aocReleasePackageOwner(g_aocSystem);
        if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
            g_aocMain->flags &= ~0x10000u;
        return;
    }
    switch (menu->substep) {
    case 0:
        FUN_00169548(0);
        FUN_00477d10(menu, -1, 0);
        menu->substep = 1;
        break;
    case 1:
        if (FUN_002e19f8() != 0) {
            FUN_0047bcdc(menu, 1);
            aocResetOperationState(g_aocSystem);
            menu->substep = 2;
        }
        break;
    case 2:
        if (menu->flags & 0x200) {
            request = FUN_0046f3ac(g_aocSystem);
            if (isEmptyString(&request) != 0) {
                menu->substep = 3;
            } else if (byteIsAtLeast100(&request) != 0) {
                menu->substep = 9999;
                if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
                    g_aocMain->flags &= ~0x10000u;
                jobFlagsWorkStop(menu);
            }
        }
        break;
    case 3:
        if (FUN_002e19f8() != 0) {
            aocClearDisplayFlag(g_aocSystem);
            g_aocSystem->getPendingRequest();
            menu->step = 5;
            menu->substep = 0;
            if (menu->window != NULL) {
                delete menu->window;
                menu->window = NULL;
            }
        }
        break;
    case 9999:
        if (!flagBit(flags, 2) && !flagBit(flags, 3)) {
            aocClearDisplayFlag(g_aocSystem);
            aocReleasePackageOwner(g_aocSystem);
            if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
                g_aocMain->flags &= ~0x10000u;
            menu->step = 3;
            menu->substep = 0;
            if (menu->window != NULL) {
                delete menu->window;
                menu->window = NULL;
            }
        }
        break;
    }
}
