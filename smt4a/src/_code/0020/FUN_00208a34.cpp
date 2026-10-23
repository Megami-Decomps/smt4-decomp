#include "ui/ScreenWindowTransition.h"
#include "gamedata/DataTable.h"
#include "addon/aocMain.h"
extern "C" {
extern ScreenWindowTransition *g_sWin;
extern AocSystemA *g_aocSystem;
s32 FUN_001517b4(s32 category, s32 mode);
s32 FUN_00163fd4(u32 state);
s32 FUN_002321f8(const void *key, const void *entry);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 aocRunByName(AocSystemA *system, s32 table, s32 node, u32 enabled);
void FUN_001a6568(AocSystemA *system, s32 table, s32 node, u32 heap);
void asdTMTexLoadMainHeap(s32 table, s32 node);

/* Select a new screen-window skin, loading its texture from base or add-on content. */
void FUN_00208a34(s32 window, u32 flags)
{
    ScreenWindowTransition *work = g_sWin;
    if (work->current != window) {
        if (FUN_001517b4(9, 2) || FUN_00163fd4(6))
            flags = 0;
        work->previous = work->current;
        g_sWin->current = window;
        void *section = dataTableGet(0x47, 0);
        const void *entries = dataTableGetEntries(section);
        u32 count = dataTableGetCount(section);
        u16 id = window;
        const ScreenWindowTextureRecord *record = static_cast<const ScreenWindowTextureRecord *>(
            libc_bsearch(&id, entries, count, sizeof(ScreenWindowTextureRecord), FUN_002321f8));
        if (record != NULL && record->texture >= 0) {
            s32 node = record->texture;
            if (aocRunByName(g_aocSystem, 0x34, node, 1))
                FUN_001a6568(g_aocSystem, 0x34, node, 0x10000);
            else
                asdTMTexLoadMainHeap(0x34, node);
        }
        work->state = 4;
        work->frame = 0;
        work->transition = 0;
        work->flags = flags;
    }
}
}
