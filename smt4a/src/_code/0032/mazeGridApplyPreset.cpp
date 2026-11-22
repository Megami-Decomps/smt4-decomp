#include "gamedata/MapSaveBlockA.h"
#include "gamedata/DataTableAccess_VariantF.h"

/* unit-local: data table 0x4C's grid-map entry, only these fields are known */
struct GridMapDefinition {
    /* 0x0 */ u8 unk00[4];
    /* 0x4 */ u16 map;
    /* 0x6 */ u16 area;
    /* 0x8 */ s16 preset; /* index into the grid presets */
};
/* unit-local: one fixed maze layout (cells 15 to a row: 1 = floor, 2 and 3 = special cells) */
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
extern const GridPreset g_mazeGridPresets[];
void FUN_002296b0(s32 enabled);

/* Lays out the maze grid of grid map `id` from its preset: the cell states and special cells, the spawn and
 * second markers, the map ids and the display origin. */
void mazeGridApplyPreset(u32 id)
{
    MapSaveBlockA *work = gameFlagsGetBlock();
    const GridMapDefinition *definition = reinterpret_cast<const GridMapDefinition *>(dataTable4CGetEntry(id));
    const GridPreset *preset = &g_mazeGridPresets[definition->preset];
    const u8 *cells = preset->cells;
    work->maze.width = preset->width;
    work->maze.height = preset->height;
    FUN_002296b0(1);
    if (work->layer != -1) {
        work->layer = -1;
    }
    for (s32 y = 0; y < work->maze.height; ++y) {
        for (s32 x = 0; x < work->maze.width; ++x) {
            if (cells[y * 15 + x] != 1) {
                work->grid.cells[y][x].state = 2;
            } else {
                work->grid.cells[y][x].state = 1;
            }
            u8 kind = cells[y * 15 + x];
            if (kind == 2) {
                work->grid.cells[y][x].specialKind = 1;
                ++work->maze.specialCount;
            } else if (kind == 3) {
                work->grid.cells[y][x].specialKind = 2;
                ++work->maze.specialCount;
            } else {
                work->grid.cells[y][x].specialKind = 0;
            }
        }
    }
    work->maze.spawnX = preset->firstX;
    work->maze.spawnZ = preset->firstY;
    work->maze.secondX = preset->secondX;
    work->maze.secondZ = preset->secondY;
    if (work->maze.spawnX > 0 && work->maze.spawnZ > 0) {
        work->grid.cells[work->maze.spawnZ][work->maze.spawnX].markers.first = 1;
    }
    work->grid.cells[work->maze.secondZ][work->maze.secondX].markers.second = 1;
    work->sizeX = definition->map;
    work->sizeY = definition->area;
    work->maze.ready = 1;
    work->maze.displayX = preset->displayX;
    work->maze.displayY = preset->displayY;
}
}
