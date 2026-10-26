#include "AsdSDK/Source/Util/AsdListBox.h"
#include <stddef.h>
#include "util/AsdListBoxCreateDefault.h"

struct BattleCameraMenuOwner {
    u8 prefix[0x10];
    AsdListBox *menu;
};
struct BattleCameraMenuContext {
    u8 prefix[0x5C];
    u32 parent;
    u8 unk60[0x4448];
    u32 flags;
};
struct BattleCameraMenuState {
    u8 prefix[0x560];
    f32 value;
    u8 unk564[0xD0];
    u32 flags;
};
typedef char BattleCameraMenuOffsets[
    offsetof(BattleCameraMenuContext, flags) == 0x44A8 &&
    offsetof(BattleCameraMenuState, flags) == 0x634 ? 1 : -1];

extern "C" {
extern BattleCameraMenuState *g_btlMain;
extern const AsdListBoxEntry DAT_00435808[];
extern f32 DAT_00493554[3];
extern f32 DAT_00434310, DAT_00434314, DAT_00434318, DAT_00434320, DAT_0043432c;
extern u32 DAT_0043431c, DAT_004342d4, DAT_004342d8, DAT_00434324, DAT_004342e0;
extern u32 DAT_00434328, DAT_00434330, DAT_004342e4, DAT_00434334, DAT_00434338;
extern u32 DAT_004342e8, DAT_0043433c, DAT_00434340, DAT_004342ec, DAT_00434344;
extern u32 DAT_00434348, DAT_0043434c, DAT_00434350, DAT_00434354, DAT_00439cec, DAT_004342f0;
void asdListBoxAddItems(AsdListBox *, const AsdListBoxEntry *, s32 count);
void asdListBoxSetByteValue(AsdListBox *, s32 value);
void jobSetText(AsdListBox *, const char *);
void asdListBoxSetItemMode2(AsdListBox *, u32 index, u32 value);
void asdListBoxSetFloatItem(AsdListBox *, u32 index, s32 minimum, s32 maximum, f32 value);
void asdListBoxSetItemMode3(AsdListBox *, u32 index, u32 value, u32 minimum, u32 maximum, u8 flags);

/* Build the attack-camera debugging menu from the active camera parameters. */
void btlDebugCreateAttackCameraMenu(BattleCameraMenuOwner *owner, BattleCameraMenuContext *context)
{
    owner->menu = reinterpret_cast<AsdListBox *>(asdListBoxCreateDefault(context->parent, 0x73, 0, 0));
    asdListBoxAddItems(owner->menu, DAT_00435808, 31);
    asdListBoxSetByteValue(owner->menu, 1);
    jobSetText(owner->menu, "Attack Camera Menu");
    asdListBoxSetItemMode2(owner->menu, 0, (g_btlMain->flags & 0x100) >> 8);
    asdListBoxSetFloatItem(owner->menu, 1, -10, 10, g_btlMain->value);
    asdListBoxSetItemMode2(owner->menu, 2, (context->flags & 0x40000000) >> 30);
    asdListBoxSetFloatItem(owner->menu, 3, -100, 100, DAT_00493554[0]);
    asdListBoxSetFloatItem(owner->menu, 4, -100, 100, DAT_00493554[2]);
    asdListBoxSetFloatItem(owner->menu, 5, -100, 100, DAT_00434310);
    asdListBoxSetFloatItem(owner->menu, 6, -100, 100, DAT_00434314);
    asdListBoxSetFloatItem(owner->menu, 7, -50, 200, DAT_00434318);
    asdListBoxSetItemMode3(owner->menu, 8, DAT_0043431c, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 9, DAT_004342d4, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 10, DAT_004342d8, 0, 2, 0);
    asdListBoxSetFloatItem(owner->menu, 11, -90, 90, DAT_00434320);
    asdListBoxSetItemMode3(owner->menu, 12, DAT_00434324, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 13, DAT_004342e0, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 14, DAT_00434328, 0, 2, 0);
    asdListBoxSetFloatItem(owner->menu, 15, -90, 90, DAT_0043432c);
    asdListBoxSetItemMode3(owner->menu, 16, DAT_00434330, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 17, DAT_004342e4, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 18, DAT_00434334, 0, 2, 0);
    asdListBoxSetItemMode3(owner->menu, 19, DAT_00434338, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 20, DAT_004342e8, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 21, DAT_0043433c, 0, 2, 0);
    asdListBoxSetItemMode3(owner->menu, 22, DAT_00434340, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 23, DAT_004342ec, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 24, DAT_00434344, 0, 2, 0);
    asdListBoxSetItemMode3(owner->menu, 25, DAT_00434348, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 26, DAT_0043434c, -1, 100, 0);
    asdListBoxSetItemMode3(owner->menu, 27, DAT_00434350, 0, 2, 0);
    asdListBoxSetItemMode3(owner->menu, 28, DAT_00434354, 0, 999, 0);
    asdListBoxSetItemMode3(owner->menu, 29, DAT_00439cec, 0, 99, 0);
    asdListBoxSetItemMode3(owner->menu, 30, DAT_004342f0, 0, 99, 0);
}
}
