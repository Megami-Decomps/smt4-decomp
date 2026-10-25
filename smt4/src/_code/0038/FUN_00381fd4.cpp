/* NON_MATCHING: anchor operand allocation and repeated mode-comparison scheduling differ; process modes use the real inlined setter. */
#include "ui/SpriteAnchorGroup.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern const u8 DAT_00405878[23];
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 index);
TextureTableEntryIV *FUN_002bf4f8(u32 table, s32 index);
ScriptRunState *FUN_00297060(void *buffer, void *arguments);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
s32 FUN_002c2a04(s32 index);
void FUN_002a03d8(s32 index, s32 mode);

void FUN_00381fd4(SpriteAnchorGroupWork *work)
{
    if (work->firstBuffer && work->firstArguments &&
        work->secondBuffer && work->secondArguments && asdTMTexTableNodeIsLoaded(0x31, 0)) {
        for (u32 index = 0; index < 23; ++index) {
            TextureTableEntryIV *entry = FUN_002bf4f8(0x31, DAT_00405878[index]);
            const TextLayoutEntryPrefixIV *layout = (const TextLayoutEntryPrefixIV *)entry;
            work->current[index].x = work->rest[index].x = (f32)layout->x;
            work->current[index].y = work->rest[index].y = (f32)layout->y;
            if (entry->placement) {
                work->optional[index].x = (f32)entry->placement->x;
                work->optional[index].y = (f32)entry->placement->y;
            }
        }
        for (s32 index = 0; index < 7; ++index) {
            work->current[index + 4].x += work->rest[21].x;
            work->current[index + 4].y += work->rest[21].y;
        }
        for (s32 index = 0; index < 10; ++index) {
            work->current[index + 11].x += work->rest[22].x;
            work->current[index + 11].y += work->rest[22].y;
        }
        work->firstProcess = FUN_00297060(work->firstBuffer, work->firstArguments);
        scriptProcessSetMode(work->firstProcess, 2);
        work->secondProcess = FUN_00297060(work->secondBuffer, work->secondArguments);
        scriptProcessSetMode(work->secondProcess, 2);
        work->state = work->mode == 1 || work->mode == 2 ? 14 : 3;
        work->frame = 0;
        if (work->mode != 1 && work->mode != 2) {
            if (FUN_002c2a04(0) == 3)
                FUN_002a03d8(0, 10);
            if (FUN_002c2a04(1) == 3)
                FUN_002a03d8(1, 10);
        }
    }
}
}
