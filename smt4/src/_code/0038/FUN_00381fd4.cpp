/* NON_MATCHING: the anchor loop keeps the table entry in r1 in retail, the first offset loop adds y with its operands in other registers, and retail predicates the state (moveq 14/movne 3) ahead of one shared state/frame store. */
#include "ui/SpriteAnchorGroup.h"
#include "script/scrScriptProcess.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code002c.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "code/Code0013.h"

extern "C" {
extern const u8 DAT_00405878[23];
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
void titleSetSlotValueState2(s32 index, s32 mode);

void FUN_00381fd4(SpriteAnchorGroupWork *work)
{
    if (work->firstBuffer && work->firstArguments &&
        work->secondBuffer && work->secondArguments && asdTMTexTableNodeIsLoaded(0x31, 0)) {
        for (u32 index = 0; index < 23; ++index) {
            TextureTableEntryIV *entry = reinterpret_cast<TextureTableEntryIV *>(asdTMTexTableEntryAt(0x31, DAT_00405878[index]));
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
        work->firstProcess = scrScriptProcessCreate(work->firstBuffer, work->firstArguments);
        scriptProcessSetMode(work->firstProcess, 2);
        work->secondProcess = scrScriptProcessCreate(work->secondBuffer, work->secondArguments);
        scriptProcessSetMode(work->secondProcess, 2);
        if (work->mode != 1 && work->mode != 2) {
            work->state = 3;
            work->frame = 0;
            if (pairedAvailabilityGetState(0) == 3)
                titleSetSlotValueState2(0, 10);
            if (pairedAvailabilityGetState(1) == 3)
                titleSetSlotValueState2(1, 10);
        } else {
            work->state = 14;
            work->frame = 0;
        }
    }
}
}
