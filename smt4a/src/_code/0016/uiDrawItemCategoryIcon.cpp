#include "shard/W6_W6Match6_ItemIcon.h"
#include "shard/TextureDrawCall.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/GamePlayerData.h"

struct Entry00192690;
struct ContentIconEntry {
    u8 unk00[0x23];
    u8 kind;
};

extern "C" {
u32 aocEntryGetKind(u32 id);
Entry00192690 *contentEntryFindById2(u32 id);
u32 requestKindToId(u32 kind);
void texTableRecordCallWithParams(u32, u32, s32, u32, u32, u32);

void uiDrawItemCategoryIcon(u32 id, s32 x, s32 y, s32 layer, s32 showEquipped)
{
    u32 frame = 0;
    bool equipped = false;
    switch (aocEntryGetKind(id)) {
    case 1:
    case 12:
        frame = requestKindToId(dataTable8FindRecord(id)->iconKind);
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
        if (showEquipped && (gameGetPlayerData())->equipped.weapon == id) {
            equipped = true;
        }
        break;
    case 3:
        frame = 0x3f8;
        if (showEquipped && (gameGetPlayerData())->equipped.gun == id) {
            equipped = true;
        }
        break;
    case 4:
        frame = 0x3fa;
        if (showEquipped && (gameGetPlayerData())->equipped.head == id) {
            equipped = true;
        }
        break;
    case 5:
        frame = 0x3fb;
        if (showEquipped && (gameGetPlayerData())->equipped.body == id) {
            equipped = true;
        }
        break;
    case 6:
        frame = 0x3fc;
        if (showEquipped && (gameGetPlayerData())->equipped.legs == id) {
            equipped = true;
        }
        break;
    case 7:
        frame = 0x3fd;
        if (showEquipped && (gameGetPlayerData())->equipped.accessory == id) {
            equipped = true;
        }
        break;
    case 8:
        frame = 0x3f9;
        if (showEquipped && (gameGetPlayerData())->equipped.bullets == id) {
            equipped = true;
        }
        break;
    case 9:
    case 10:
        frame = 0x3fe;
        break;
    }
    texTableRecordCallWithParams(2, 11, frame, x, y, layer);
    if (equipped) {
        texDrawTableEntryAtStoredOrigin(2, 11, 0x417, x, y, layer + 1);
    }
}
}
