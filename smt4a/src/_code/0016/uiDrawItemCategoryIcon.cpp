#include "shard/W6_W6Match6_ItemIcon.h"

struct Entry00192690;
struct ContentIconEntry {
    u8 unk00[0x23];
    u8 kind;
};
struct WeaponIconEntry {
    u8 unk00[0x40];
    u8 kind;
};
struct IconEquipment {
    u16 melee;
    u16 ranged;
    u16 ammunition;
    u16 head;
    u16 body;
    u16 legs;
    u16 accessory;
};

extern "C" {
u32 aocEntryGetKind(u32 id);
Entry00192690 *contentEntryFindById2(u32 id);
u8 *FUN_00192550(s32 id);
u32 requestKindToId(u32 kind);
u8 *gameGetPlayerData();
void FUN_0017ffa8(u32, u32, s32, u32, u32, u32);
void FUN_001835b4(u32, u32, s32, u32, u32, u32);

void uiDrawItemCategoryIcon(u32 id, s32 x, s32 y, s32 layer, s32 showEquipped)
{
    u32 frame = 0;
    bool equipped = false;
    switch (aocEntryGetKind(id)) {
    case 1:
    case 12:
        frame = requestKindToId(((WeaponIconEntry *)FUN_00192550(id))->kind);
        break;
    case 0: {
        u8 kind = ((ContentIconEntry *)contentEntryFindById2(id))->kind;
        if (kind == 0) {
            frame = 0x3ff;
        } else {
            frame = requestKindToId(kind);
        }
        break;
    }
    case 2:
        frame = 0x3f7;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->melee == id) {
            equipped = true;
        }
        break;
    case 3:
        frame = 0x3f8;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->ranged == id) {
            equipped = true;
        }
        break;
    case 4:
        frame = 0x3fa;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->head == id) {
            equipped = true;
        }
        break;
    case 5:
        frame = 0x3fb;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->body == id) {
            equipped = true;
        }
        break;
    case 6:
        frame = 0x3fc;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->legs == id) {
            equipped = true;
        }
        break;
    case 7:
        frame = 0x3fd;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->accessory == id) {
            equipped = true;
        }
        break;
    case 8:
        frame = 0x3f9;
        if (showEquipped && ((IconEquipment *)gameGetPlayerData())->ammunition == id) {
            equipped = true;
        }
        break;
    case 9:
    case 10:
        frame = 0x3fe;
        break;
    }
    FUN_0017ffa8(2, 11, frame, x, y, layer);
    if (equipped) {
        FUN_001835b4(2, 11, 0x417, x, y, layer + 1);
    }
}
}
