/* NON_MATCHING: cached cell/marker-metadata pointers and saved-register allocation differ. */
#include "gamedata/MapSaveBlockA.h"
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
void FUN_002296b0(s32 enabled);

void FUN_003273ac(u32 id)
{
    MapSaveBlockA *work = gameFlagsGetBlock();
    const GridMapDefinition *definition = reinterpret_cast<const GridMapDefinition *>(dataTable4CGetEntry(id));
    const GridPreset *preset = &DAT_005813a4[definition->preset];
    const u8 *cells = preset->cells;
    work->maze.width = preset->width;
    work->maze.height = preset->height;
    FUN_002296b0(1);
    if (work->layer != -1) {
        work->layer = -1;
    }
    for (s32 y = 0; y < work->maze.height; ++y) {
        for (s32 x = 0; x < work->maze.width; ++x) {
            MapCell &cell = work->grid.cells[y][x];
            cell.state = cells[y * 15 + x] == 1 ? 1 : 2;
            u8 kind = cells[y * 15 + x];
            if (kind == 2) {
                cell.specialKind = 1;
                ++work->maze.specialCount;
            } else if (kind == 3) {
                cell.specialKind = 2;
                ++work->maze.specialCount;
            } else {
                cell.specialKind = 0;
            }
        }
    }
    s32 firstX = preset->firstX;
    work->maze.spawnX = preset->firstX;
    s32 firstY = preset->firstY;
    work->maze.spawnZ = preset->firstY;
    work->maze.secondX = preset->secondX;
    work->maze.secondZ = preset->secondY;
    if (firstX > 0 && firstY > 0) {
        work->grid.cells[firstY][firstX].markers.first = 1;
    }
    work->grid.cells[work->maze.secondZ][work->maze.secondX].markers.second = 1;
    work->sizeX = definition->map;
    work->sizeY = definition->area;
    work->maze.ready = 1;
    work->maze.displayX = preset->displayX;
    work->maze.displayY = preset->displayY;
}
}
