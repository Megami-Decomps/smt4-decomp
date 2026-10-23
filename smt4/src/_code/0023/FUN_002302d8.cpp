/* NON_MATCHING: scene/tail register assignment, paired page-controller loads and controller flag-update addressing differ. */
#include "shard/S2Scene3a.h"

extern "C" {
void ifTouchRegionClearAll(void *controller);
void FUN_00233818(void *work);
void ifTouchRegionRemove(void);
void FUN_00233670(void *work, s32 kind, u32 sprite, u32 state);
u16 FUN_002b8584(u32 bank, u32 entry);
void buttonHelpSelectMenuPreset(Scene3a *scene);

// Rebind the selected menu page, rebuild its touch regions, and choose its help flags.
void FUN_002302d8(Scene3a *scene, s32 refreshHelp)
{
    // This menu indexes nine pages, beyond the canonical two-slot scene view.
    struct Controller;
    struct ControllerVtable {
        void *unk00[2];
        void (*bind)(Controller *, const Scene3aSlotInfo *);
    };
    struct Controller {
        ControllerVtable *vtable;
        u16 flags;
        u8 unk06[0x5E];
        void *context;
    };
    struct MenuWork {
        u8 unk00[0x10];
        u8 active;
        u8 unk11[0x23];
    };
    struct MenuView {
        u32 flags;
        u8 unk04[0x824];
        MenuWork menu;
        Controller *controller;
        s32 page;
        u8 unk864[0x1C];
        Scene3aSlotInfo pages[9];
        u8 unkC94[0x150B8];
        s16 regions[2];
        s16 regionCount;
    };
    typedef char MenuViewOffsets[offsetof(MenuView, controller) == 0x85C &&
        offsetof(MenuView, regions) == 0x15D4C &&
        offsetof(MenuView, regionCount) == 0x15D50 ? 1 : -1];
    MenuView *work = reinterpret_cast<MenuView *>(scene);
    ifTouchRegionClearAll(work->controller);
    FUN_00233818(&work->menu);
    for (s32 index = 0; index < work->regionCount; ++index)
        ifTouchRegionRemove();
    work->regionCount = 0;
    work->regions[0] = -1;
    work->regions[1] = -1;
    work->controller->vtable->bind(work->controller, &work->pages[work->page]);
    work->controller->flags |= 0x1000;
    work->controller->context = reinterpret_cast<u8 *>(scene) + 0x380;
    u32 state = 9, sprite = 0x29;
    if (work->page == 7 || work->page == 8) {
        state = 10;
        sprite = 0x28;
    }
    FUN_00233670(&work->menu, 0x2B, sprite, state);
    work->menu.active = 1;
    work->regions[0] = FUN_002b8584(0x1D, 0x576);
    work->regions[1] = FUN_002b8584(0x1D, 0x577);
    work->regionCount += 2;
    if (refreshHelp)
        buttonHelpSelectMenuPreset(scene);
    u32 flags = work->flags & ~0xE00;
    work->flags = flags;
    if (work->page == 8)
        flags |= 0x800;
    else if (work->page == 7) {
        work->flags = flags | 0x400;
        return;
    } else
        flags |= 0x200;
    work->flags = flags;
}
}
