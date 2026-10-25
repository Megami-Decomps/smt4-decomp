#include "ui/HunterDatabaseWork.h"
#include "text/TextDraw.h"

extern "C" {
void asdTMTexTableLoadTmx(u32, u32);
void asdTMTexLoadMainHeap(u32, s32);
void asdLoadFileAsyncSimple(const char *, u32 *, u32);
void FUN_004029f4(HunterDatabaseWork *, s32, s32);
void FUN_00405c94(HunterDatabaseWork *);
void FUN_00471d94(u32);
extern u32 g_aocSystem;
extern const char DAT_0052d10c[];
extern const char DAT_0052d0e0[];
u32 spriteHandleCreate(u32);
void *textureGetIndexedResource(u32);

// Load the hunter database text and textures, acquire shared tables, and create six sprites.
void hunterDatabaseLoadResources(HunterDatabaseWork *work)
{
    work->selection = 0;
    work->values[0] = 0;
    work->values[1] = 0;
    work->values[2] = 0;
    work->values[3] = 0;
    work->active = 0;
    work->pending = 0;
    work->state = 0;
    asdLoadFileAsyncSimple(DAT_0052d10c, &work->messages, 0);
    asdLoadFileAsyncSimple(DAT_0052d0e0, &work->helpMessages, 0);
    FUN_00471d94(g_aocSystem);
    work->acquisitionFlags = 0;
    asdTMTexTableLoadTmx(0x32, 0);
    for (s32 index = 0; index < 2; ++index)
        asdTMTexLoadMainHeap(0x32, index);
    for (s32 index = 0; index < 2; ++index) {
        u32 table;
        switch ((u8)index) {
        case 0: table = 1; break;
        case 1: table = 15; break;
        default: table = ~0u; break;
        }
        if (!textureGetIndexedResource(table)) {
            asdTMTexTableLoadTmx(table, 0);
            work->acquiredTables[index] = 1;
        }
    }
    for (s32 index = 0; index < 6; ++index) {
        u32 sprite = spriteHandleCreate(0);
        work->sprites[index] = sprite;
        FUN_001527d8(sprite, ~0u);
    }
    FUN_00405c94(work);
    FUN_004029f4(work, 1, 0);
}
}
