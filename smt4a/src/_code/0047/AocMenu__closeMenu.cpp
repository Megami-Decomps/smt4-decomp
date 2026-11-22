#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "addon/AocSystemSmt4a.h"
#include "addon/AocSystemA.h"

extern "C" {
RequestParameters FUN_0046f3ac(AocSystemA *system);
void aocMenuSetButtonHelp(AocMenu *menu, s32 request, s32 mode);
void aocLoadingTaskStart(AocMenu *menu, u32 request);
void FUN_0016ccb4(void *query);
void buttonHelpSetEnabled(s32 mode);
void jobOwnerFreeSlotAndStop(void *owner);
void jobFlagsWorkStop(AocMenu *menu);
void aocReleasePackageOwner(AocSystemA *system);
void aocResetOperationState(AocSystemA *system);
s32 sysLightEventTryWait(void *event);
u8 buttonHelpStateIsNot3(void);
u8 strIsEmpty(const void *value);
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
    RequestParameters request;
    u32 flags = g_aocMain->flags;
    u32 closing = flagBit(flags, 4);
    flags &= ~0x70u;
    g_aocMain->flags = flags;
    if (closing) {
        aocMenuSetButtonHelp(menu, -1, 0);
        jobOwnerFreeSlotAndStop(menu->jobOwner);
        jobFlagsWorkStop(menu);
        aocMenuChangeStep(menu, 0x12);
        FUN_0016ccb4(reinterpret_cast<u8 *>(g_aocMain) + 0x80);
        aocClearDisplayFlag(g_aocSystem);
        aocReleasePackageOwner(g_aocSystem);
        if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
            g_aocMain->flags &= ~0x10000u;
        return;
    }
    switch (menu->substep) {
    case 0:
        buttonHelpSetEnabled(0);
        aocMenuSetButtonHelp(menu, -1, 0);
        menu->substep = 1;
        break;
    case 1:
        if (buttonHelpStateIsNot3() != 0) {
            aocLoadingTaskStart(menu, 1);
            aocResetOperationState(g_aocSystem);
            menu->substep = 2;
        }
        break;
    case 2:
        if (menu->flags & 0x200) {
            request = FUN_0046f3ac(g_aocSystem);
            if (strIsEmpty(&request) != 0) {
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
        if (buttonHelpStateIsNot3() != 0) {
            aocClearDisplayFlag(g_aocSystem);
            g_aocSystem->getPendingRequest();
            aocMenuChangeStep(menu, 5);
        }
        break;
    case 9999:
        if (flagBit(flags, 2))
            break;
        if (flagBit(flags, 3))
            break;
        aocClearDisplayFlag(g_aocSystem);
        aocReleasePackageOwner(g_aocSystem);
        if (sysLightEventTryWait(reinterpret_cast<u8 *>(g_aocMain) + 0x98) != 0)
            g_aocMain->flags &= ~0x10000u;
        aocMenuChangeStep(menu, 3);
        break;
    }
}
