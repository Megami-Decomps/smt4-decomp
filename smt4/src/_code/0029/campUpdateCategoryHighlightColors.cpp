#include "shard/W6_W6Match8_CampInventory.h"
#include "shard/PadState.h"

struct CampUnitCategoryRecord {
    u8 unk00[0x44];
    u16 categories;
};

extern "C" {
extern CampInventoryLists *g_camp;
s32 FUN_0029ee54(CampInventoryController *controller);
s32 FUN_0029efa8(CampInventoryController *controller);
s32 FUN_0029efc0(CampInventoryController *controller);
void memClear(void *buffer, u32 size);
PadState *gameGetPlayerData();
CampUnitCategoryRecord *gameGetUnitRecord(s32 unit);
u32 categoryGetColor(s16 category);
void FUN_0026dafc(u32 color);

void campUpdateCategoryHighlightColors()
{
    CampInventoryLists *work = g_camp;
    s32 count = FUN_0029ee54(&work->categories.controller);
    if (FUN_0029ee54(&work->categories.controller) < count) {
        count = FUN_0029ee54(&work->categories.controller);
    }
    u32 processed[25];
    memClear(processed, sizeof(processed));
    for (s32 row = 0; row < count; ++row) {
        s32 unit = reinterpret_cast<CampInventorySlot *>(work->categories.slotData)[row].unit;
        if (processed[unit + 1] != 0) {
            continue;
        }
        processed[unit + 1] = 1;
        u16 categories;
        if (unit < 0) {
            categories = gameGetPlayerData()->unk72;
        } else {
            categories = gameGetUnitRecord(unit)->categories;
        }
        s32 ordinal = 0;
        if (categories == 0) {
            work->categoryColors[unit + 1] = 0xffffffff;
        } else {
            for (s32 category = 1; category < 11; ++category) {
                if (categories & (1u << category)) {
                    if (work->categoryIndices[unit + 1] == ordinal) {
                        work->categoryColors[unit + 1] = categoryGetColor(category);
                        break;
                    }
                    ++ordinal;
                }
            }
        }
        if (++work->categoryTimers[unit + 1] >= 24) {
            work->categoryIndices[unit + 1] = (work->categoryIndices[unit + 1] + 1) % ordinal;
            work->categoryTimers[unit + 1] = 0;
        }
    }
    s32 page = FUN_0029efc0(&work->categories.controller);
    s32 row = FUN_0029efa8(&work->categories.controller);
    FUN_0026dafc(work->categoryColors[reinterpret_cast<CampInventorySlot *>(work->categories.slotData)[page + row].unit + 1]);
}
}
