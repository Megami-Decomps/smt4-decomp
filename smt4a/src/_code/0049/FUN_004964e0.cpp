/* NON_MATCHING: saved menu/touch-bank registers, cursor loads and panel-field instruction scheduling differ. */
#include "shard/Shard0049.h"
#include "shard/MessageIdList.h"

class EquipmentMenuPanelView {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void bindCursor(EquipmentMenuCursor *);
    u16 flags;
    u8 unk06[0x5E];
    void *owner;
};
/* Touch handles extend beyond the shared equipment-menu prefix. */
struct EquipmentMenuResetView {
    union {
        EquipmentMenuState state;
        struct {
            u32 flags;
            u8 unk004[0x3A0];
            u8 ownerState[0x764];
            MessageIdList messages;
            EquipmentMenuPanelView *panel;
        } reset;
    };
    s16 touchHandles[2];
    s16 touchCount;
};
typedef char EquipmentMenuResetOffsets[
    offsetof(EquipmentMenuResetView, reset.messages) == 0xB08 &&
    offsetof(EquipmentMenuResetView, reset.panel) == 0xB3C &&
    offsetof(EquipmentMenuResetView, touchCount) == 0x16030 ? 1 : -1];
extern "C" {
void releaseEntriesB(EquipmentMenuPanelView *);
void releaseEntriesA(MessageIdList *);
void ifTouchRegionRemove();
void FUN_004d05c4(MessageIdList *, u32, s32, s32);
u16 FUN_001643b4(u32, u32);
void FUN_00498ff0(EquipmentMenuState *);

void FUN_004964e0(EquipmentMenuResetView *menu, s32 refresh)
{
    releaseEntriesB(menu->reset.panel);
    releaseEntriesA(&menu->reset.messages);
    for (s32 i = 0; i < menu->touchCount; ++i)
        ifTouchRegionRemove();
    menu->touchCount = 0;
    menu->touchHandles[0] = -1;
    menu->touchHandles[1] = -1;
    menu->reset.panel->bindCursor(&menu->state.cursors[menu->state.page]);
    menu->reset.panel->flags |= 0x1000;
    menu->reset.panel->owner = menu->reset.ownerState;
    s32 firstItem = 0x29;
    s32 itemCount = 9;
    if (menu->state.page == 7 || menu->state.page == 8) {
        firstItem = 0x28;
        itemCount = 10;
    }
    FUN_004d05c4(&menu->reset.messages, 0x20, firstItem, itemCount);
    menu->reset.messages.unk10 = 1;
    menu->touchHandles[0] = FUN_001643b4(0x14, 0x576);
    menu->touchHandles[1] = FUN_001643b4(0x14, 0x577);
    menu->touchCount += 2;
    if (refresh)
        FUN_00498ff0(&menu->state);
    menu->reset.flags &= ~0xE00;
    if (menu->state.page == 8)
        menu->reset.flags |= 0x800;
    else if (menu->state.page == 7)
        menu->reset.flags |= 0x400;
    else
        menu->reset.flags |= 0x200;
}
}
