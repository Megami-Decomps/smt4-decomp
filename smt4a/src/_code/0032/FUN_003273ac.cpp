/* NON_MATCHING: cached cell/marker-metadata pointers and saved-register allocation differ. */
#include "shard/W5_W5Match7_FlagBanks.h"
#include "gamedata/DataTableAccess_VariantF.h"

struct GridMapDefinition {
    u8 unk00[4];
    u16 map;
    u16 area;
    s16 preset;
};
struct GridPreset {
    const u8 *cells;
    u8 width, height;
    u8 unk06[4];
    s8 firstX, firstY;
    u8 secondX, secondY;
    u8 displayX, displayY;
};
typedef char GridPresetOffsets[sizeof(GridPreset) == 0x10 &&
    offsetof(GridPreset, width) == 4 && offsetof(GridPreset, firstX) == 0xa &&
    offsetof(GridPreset, secondX) == 0xc && offsetof(GridPreset, displayX) == 0xe &&
    offsetof(GridMapDefinition, preset) == 8 ? 1 : -1];

extern "C" {
extern const GridPreset DAT_005813a4[];
FlagWorkBanks *gameFlagsGetBlock();
void FUN_002296b0(s32 enabled);

void FUN_003273ac(u32 id)
{
    FlagWorkBanks *work = gameFlagsGetBlock();
    const GridMapDefinition *definition = reinterpret_cast<const GridMapDefinition *>(dataTable4CGetEntry(id));
    const GridPreset *preset = &DAT_005813a4[definition->preset];
    const u8 *cells = preset->cells;
    work->gridSize.width = preset->width;
    work->gridSize.height = preset->height;
    FUN_002296b0(1);
    if (work->table4c.level != -1) {
        work->table4c.level = -1;
    }
    for (s32 y = 0; y < work->gridSize.height; ++y) {
        for (s32 x = 0; x < work->gridSize.width; ++x) {
            MapCell &cell = work->mapCells.grid.cells[y][x];
            cell.state = cells[y * 15 + x] == 1 ? 1 : 2;
            u8 kind = cells[y * 15 + x];
            if (kind == 2) {
                cell.specialKind = 1;
                ++work->gridSetup.specialCount;
            } else if (kind == 3) {
                cell.specialKind = 2;
                ++work->gridSetup.specialCount;
            } else {
                cell.specialKind = 0;
            }
        }
    }
    s32 firstX = preset->firstX;
    work->gridSetup.firstX = preset->firstX;
    s32 firstY = preset->firstY;
    work->gridSetup.firstY = preset->firstY;
    work->gridSetup.secondX = preset->secondX;
    work->gridSetup.secondY = preset->secondY;
    if (firstX > 0 && firstY > 0) {
        work->mapCells.grid.cells[firstY][firstX].markers.first = 1;
    }
    work->mapCells.grid.cells[work->gridSetup.secondY][work->gridSetup.secondX].markers.second = 1;
    work->table4cHead.unk3a = definition->map;
    work->table4cHead.unk3b = definition->area;
    work->gridSetup.ready = 1;
    work->gridSetup.displayX = preset->displayX;
    work->gridSetup.displayY = preset->displayY;
}
}
