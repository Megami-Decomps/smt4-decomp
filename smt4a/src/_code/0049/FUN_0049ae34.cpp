/* NON_MATCHING: armcc lowers the three active states to comparisons rather than retail's five-entry jump table and allocates the menu/state base registers oppositely. */
#include "shard/Shard0049.h"

extern "C" {
s32 FUN_0023b3d0(void);
void FUN_0031f718(s32 item, u32 mode);
void FUN_002a7324(u32 mode);
s32 FUN_004cfe4c(EquipmentMenuCursor *cursor);
s32 FUN_00192718(s32 item);
void FUN_0034aa94(u32 slot, s32 item);
s32 FUN_0026c3a0(void);
void FUN_002c85b0(void);
void FUN_00333f6c(void);
void FUN_0022e774(void);
void FUN_00345718(u32 mode);
void FUN_001aea28(u32 owner, u32 handle);
extern u32 DAT_0056fcc0;
extern EquipmentMenuReadyState *DAT_0057f578;
}

/* Finish equipment selection or tear down the menu's active child resource. */
extern "C" void FUN_0049ae34(EquipmentMenuState *menu)
{
    switch (menu->state) {
    case 1:
        if (FUN_0023b3d0()) {
            FUN_0031f718(-1, 0);
            FUN_002a7324(1);
            s32 page = menu->page;
            s32 index = FUN_004cfe4c(&menu->cursors[page]);
            s16 item = menu->pages[page].items[index].id;
            if (item != 0) {
                if (FUN_00192718(item) == 4) {
                    FUN_0034aa94(0, item);
                }
                if (FUN_00192718(item) == 5) {
                    FUN_0034aa94(1, item);
                }
                if (FUN_00192718(item) == 6) {
                    FUN_0034aa94(2, item);
                }
            }
            menu->state = 2;
        }
        break;
    case 3:
        if (FUN_0026c3a0()) {
            menu->state = 0;
            FUN_002c85b0();
            FUN_00333f6c();
            DAT_0057f578->ready = 1;
        }
        break;
    case 4:
        if (FUN_0023b3d0() && menu->state != 3) {
            if (menu->state == 1) {
                menu->state = 4;
            } else {
                FUN_0022e774();
                menu->state = 3;
                FUN_00345718(0);
                if (menu->resource != NULL) {
                    FUN_001aea28(DAT_0056fcc0, menu->resource->handle);
                    if (menu->resource != NULL) {
                        menu->resource->destroy();
                        menu->resource = NULL;
                    }
                }
            }
        }
        break;
    }
}
