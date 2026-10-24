/* NON_MATCHING: battle debug list box item-changed handler (copies the edited item into the matching debug setting); written from the decompilation, switch lowering not compared with retail */
#include "common.h"

struct BtlDebugMenu {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};

struct BtlMainDebug {
    /* 0x000 */ u8 unk000[0x560];
    /* 0x560 */ u32 debugTarget;
    /* 0x564 */ u8 unk564[0xD0];
    /* 0x634 */ u32 flags;
};

struct BtlUnitDebugFlags {
    /* 0x0000 */ u8 unk0000[0x44A8];
    /* 0x44A8 */ u32 flags;
};

#define BTL_MAIN_FLAG_DEBUG_OWNER 0x100
#define BTL_UNIT_FLAG_DEBUG_OWNER 0x40000000

extern "C" {
extern BtlMainDebug *g_btlMain;
extern u32 DAT_004342d4;
extern u32 DAT_004342d8;
extern u32 DAT_004342e0;
extern u32 DAT_004342e4;
extern u32 DAT_004342e8;
extern u32 DAT_004342ec;
extern u32 DAT_004342f0;
extern u32 DAT_00434310;
extern u32 DAT_00434314;
extern u32 DAT_00434318;
extern u32 DAT_0043431c;
extern u32 DAT_00434320;
extern u32 DAT_00434324;
extern u32 DAT_00434328;
extern u32 DAT_0043432c;
extern u32 DAT_00434330;
extern u32 DAT_00434334;
extern u32 DAT_00434338;
extern u32 DAT_0043433c;
extern u32 DAT_00434340;
extern u32 DAT_00434344;
extern u32 DAT_00434348;
extern u32 DAT_0043434c;
extern u32 DAT_00434350;
extern u32 DAT_00434354;
extern u32 DAT_00439cec;
extern u32 DAT_00493554;
extern u32 DAT_0049355c;

u32 *asdListBoxGetItemText(u32 box);
s32 listBoxItemHasOwner(u32 box);
u32 *asdListBoxGetItemValuePtr(u32 box, u32 item);

static __inline void listBoxStoreText(u32 box, u32 *destination)
{
    *destination = *asdListBoxGetItemText(box);
}

static __inline void listBoxStoreValue(u32 box, u32 item, u32 *destination)
{
    *destination = *asdListBoxGetItemValuePtr(box, item);
}

void FUN_003c5ffc(BtlDebugMenu *menu, BtlUnitDebugFlags *unit, u32 index)
{
    u32 box = menu->listBox;
    switch (index) {
    case 0:
        if (listBoxItemHasOwner(box) != 0)
            g_btlMain->flags |= BTL_MAIN_FLAG_DEBUG_OWNER;
        else
            g_btlMain->flags &= ~BTL_MAIN_FLAG_DEBUG_OWNER;
        break;
    case 1:
        g_btlMain->debugTarget = *asdListBoxGetItemText(box);
        break;
    case 2:
        if (listBoxItemHasOwner(box) != 0)
            unit->flags |= BTL_UNIT_FLAG_DEBUG_OWNER;
        else
            unit->flags &= ~BTL_UNIT_FLAG_DEBUG_OWNER;
        break;
    case 3:
        DAT_00493554 = *asdListBoxGetItemText(box);
        break;
    case 4:
        DAT_0049355c = *asdListBoxGetItemText(box);
        break;
    case 5:
        listBoxStoreText(box, &DAT_00434310);
        break;
    case 6:
        listBoxStoreText(box, &DAT_00434314);
        break;
    case 7:
        listBoxStoreText(box, &DAT_00434318);
        break;
    case 8:
        listBoxStoreValue(box, index, &DAT_0043431c);
        break;
    case 9:
        listBoxStoreValue(box, index, &DAT_004342d4);
        break;
    case 10:
        listBoxStoreValue(box, index, &DAT_004342d8);
        break;
    case 0xb:
        listBoxStoreText(box, &DAT_00434320);
        break;
    case 0xc:
        listBoxStoreValue(box, index, &DAT_00434324);
        break;
    case 0xd:
        listBoxStoreValue(box, index, &DAT_004342e0);
        break;
    case 0xe:
        listBoxStoreValue(box, index, &DAT_00434328);
        break;
    case 0xf:
        listBoxStoreText(box, &DAT_0043432c);
        break;
    case 0x10:
        listBoxStoreValue(box, index, &DAT_00434330);
        break;
    case 0x11:
        listBoxStoreValue(box, index, &DAT_004342e4);
        break;
    case 0x12:
        listBoxStoreValue(box, index, &DAT_00434334);
        break;
    case 0x13:
        listBoxStoreValue(box, index, &DAT_00434338);
        break;
    case 0x14:
        listBoxStoreValue(box, index, &DAT_004342e8);
        break;
    case 0x15:
        listBoxStoreValue(box, index, &DAT_0043433c);
        break;
    case 0x16:
        listBoxStoreValue(box, index, &DAT_00434340);
        break;
    case 0x17:
        listBoxStoreValue(box, index, &DAT_004342ec);
        break;
    case 0x18:
        listBoxStoreValue(box, index, &DAT_00434344);
        break;
    case 0x19:
        listBoxStoreValue(box, index, &DAT_00434348);
        break;
    case 0x1a:
        listBoxStoreValue(box, index, &DAT_0043434c);
        break;
    case 0x1b:
        listBoxStoreValue(box, index, &DAT_00434350);
        break;
    case 0x1c:
        listBoxStoreValue(box, index, &DAT_00434354);
        break;
    case 0x1d:
        listBoxStoreValue(box, index, &DAT_00439cec);
        break;
    case 0x1e:
        listBoxStoreValue(box, index, &DAT_004342f0);
        break;
    default:
        break;
    }
}

} /* extern "C" */
