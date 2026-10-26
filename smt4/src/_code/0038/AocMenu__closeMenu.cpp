/* NON_MATCHING: only register allocation differs (this build hoists the constant 3 into r8, so the step/substep pair is stored with separate STRs instead of retail's STM, and registers r5-r7 are assigned differently). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "addon/AocSystem_VariantA.h"

extern "C" {
extern AocMain *g_aocMain;
extern AocSystem *g_aocSystem;
RequestParameters FUN_003887cc(AocSystem *system);
void FUN_0023392c(AocMenu *menu, s32 request, s32 mode);
void FUN_00233db8(AocMenu *menu, u32 request);
void FUN_00126fb8(void *query);
void FUN_002b8244(s32 mode);
void jobOwnerFreeSlotAndStop(void *owner);
void jobStopAndClearFlags(AocMenu *menu);
void aocReleasePackageOwner(AocSystem *system);
void aocResetOperationState(AocSystem *system);
u8 FUN_0026b564(void);
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
        FUN_0023392c(menu, -1, 0);
        jobOwnerFreeSlotAndStop(menu->jobOwner);
        jobStopAndClearFlags(menu);
        menu->step = 0x12;
        menu->substep = 0;
        if (menu->window != NULL) {
            delete menu->window;
            menu->window = NULL;
        }
        FUN_00126fb8(reinterpret_cast<u8 *>(g_aocMain) + 0x80);
        aocClearDisplayFlag(g_aocSystem);
        aocReleasePackageOwner(g_aocSystem);
        if (FUN_002ad1e0(&g_aocMain->objB) != 0)
            g_aocMain->flags &= ~0x10000u;
        return;
    }
    switch (menu->substep) {
    case 0:
        FUN_002b8244(0);
        FUN_0023392c(menu, -1, 0);
        menu->substep = 1;
        break;
    case 1:
        if (FUN_0026b564() != 0) {
            FUN_00233db8(menu, 1);
            aocResetOperationState(g_aocSystem);
            menu->substep = 2;
        }
        break;
    case 2:
        if (menu->flags & 0x200) {
            request = FUN_003887cc(g_aocSystem);
            if (strIsEmpty(&request) != 0) {
                menu->substep = 3;
            } else if (byteIsAtLeast100(&request) != 0) {
                menu->substep = 9999;
                if (FUN_002ad1e0(&g_aocMain->objB) != 0)
                    g_aocMain->flags &= ~0x10000u;
                jobStopAndClearFlags(menu);
            }
        }
        break;
    case 3:
        if (FUN_0026b564() != 0) {
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
            if (FUN_002ad1e0(&g_aocMain->objB) != 0)
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
