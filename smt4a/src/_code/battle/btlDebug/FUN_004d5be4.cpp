/* NON_MATCHING: only case 2's 64-bit mask update differs: retail keeps the mask pointer in r2 (ldm r2,{r1,r2} / ldm r2,{r1,r3}) with the same hoisted address setup, the build keeps it in r1 and splits the loads (ldr). Every other case and the jump table match. */
#include "battle/btlCamera.h"
#include "battle/btlMain.h"
#include "AsdSDK/Source/Util/AsdListBox.h"

namespace {
struct CameraDebugMenu {
    u8 prefix[0x10];
    AsdListBox *list;
};
}
extern "C" {
extern BtlCameraA *g_btlCamera;
extern u64 DAT_00571718;
extern f32 DAT_005e1554[3];
extern f32 DAT_00571570;
extern f32 DAT_00571574;
extern f32 DAT_00571578;
extern s32 DAT_0057157c;
extern s32 DAT_00571514;
extern s32 DAT_00571518;
extern f32 DAT_00571580;
extern s32 DAT_00571584;
extern s32 DAT_00571520;
extern s32 DAT_00571588;
extern f32 DAT_0057158c;
extern s32 DAT_00571590;
extern s32 DAT_00571524;
extern s32 DAT_00571594;
extern s32 DAT_00571598;
extern s32 DAT_00571528;
extern s32 DAT_0057159c;
extern s32 DAT_005715a0;
extern s32 DAT_0057152c;
extern s32 DAT_005715a4;
extern s32 DAT_005715a8;
extern s32 DAT_005715ac;
extern s32 DAT_005715b0;
extern s32 DAT_005715b4;
extern s32 DAT_0057aa10;
extern s32 DAT_00571530;
s32 listBoxItemHasOwner(AsdListBox *list);
f32 *asdListBoxGetFloatValuePtr(AsdListBox *list, u32 index);
s32 *asdListBoxGetIntValuePtr(AsdListBox *list, u32 index);
void effectSetValue(BtlCameraA *camera, f32 value);

// Apply a debug-menu change to the camera effect parameters or the battle's marker mask.
void FUN_004d5be4(CameraDebugMenu *menu, BtlMainStateA *battle, u32 index)
{
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(menu->list))
            g_btlCamera->flags |= 0x100;
        else
            g_btlCamera->flags &= ~0x100;
        return;
    case 1:
        effectSetValue(g_btlCamera, *asdListBoxGetFloatValuePtr(menu->list, index));
        return;
    case 2: {
        s32 enabled = listBoxItemHasOwner(menu->list);
        const u64 *mask = &DAT_00571718;
        u64 *bits = &battle->markerMasks.bits;
        if (enabled)
            *bits = *mask | *bits;
        else
            *bits &= ~*mask;
        return;
    }
    case 3:
        DAT_005e1554[0] = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 4:
        DAT_005e1554[2] = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 5:
        DAT_00571570 = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 6:
        DAT_00571574 = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 7:
        DAT_00571578 = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 8:
        DAT_0057157c = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 9:
        DAT_00571514 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 10:
        DAT_00571518 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 11:
        DAT_00571580 = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 12:
        DAT_00571584 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 13:
        DAT_00571520 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 14:
        DAT_00571588 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 15:
        DAT_0057158c = *asdListBoxGetFloatValuePtr(menu->list, index);
        return;
    case 16:
        DAT_00571590 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 17:
        DAT_00571524 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 18:
        DAT_00571594 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 19:
        DAT_00571598 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 20:
        DAT_00571528 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 21:
        DAT_0057159c = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 22:
        DAT_005715a0 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 23:
        DAT_0057152c = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 24:
        DAT_005715a4 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 25:
        DAT_005715a8 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 26:
        DAT_005715ac = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 27:
        DAT_005715b0 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 28:
        DAT_005715b4 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 29:
        DAT_0057aa10 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    case 30:
        DAT_00571530 = *asdListBoxGetIntValuePtr(menu->list, index);
        return;
    default:
        return;
    }
}
}
