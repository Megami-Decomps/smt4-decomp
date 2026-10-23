/* NON_MATCHING: idle-clock clamp, texture queue reloads, and embedded-selector register allocation differ. */
#include "shard/S3SceneWidget.h"
#include "shard/S1ListMenu.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "classes/Obj55ca08.h"

// The idle counter extends the recovered widget prefix. The other views share its existing bytes.
struct SelectionTextureWork {
    SceneWidget widget;
    s32 idleFrames;
};
typedef char SelectionTextureWorkLayoutCheck[
    offsetof(SelectionTextureWork, idleFrames) == 0xcb8 ? 1 : -1];

extern "C" {
s32 flaggedValueHolderGetTotal(const FlaggedValueHolder *values);
void FUN_00233410(FlaggedValueHolder *values);
s32 FUN_002333f0(Obj55ca08 *selector);
s32 stateCounterBelowLimit(FlaggedValueHolder *values, s32 offset);
s32 FUN_0027ee9c();
void asdTMTexTableLoadEntryAsync(u32 table, u32 key);

u32 FUN_003bb620(SelectionTextureWork *work)
{
    FlaggedValueHolder *values = reinterpret_cast<FlaggedValueHolder *>(work);
    Obj55ca08 *selector = reinterpret_cast<Obj55ca08 *>(reinterpret_cast<u8 *>(work) + 0x74);
    ListMenu *list = reinterpret_cast<ListMenu *>(work);
    u32 result = 0;
    s32 previous = flaggedValueHolderGetTotal(values);
    if (list->cursorMarked == 0) {
        selector->Obj55ca08::synchronize(reinterpret_cast<const u8 *>(work));
        FUN_00233410(values);
    }
    if (flaggedValueHolderGetTotal(values) != previous) {
        work->idleFrames = 0;
    } else {
        // The range test advances the idle clock on each successful bound check.
        if (++work->idleFrames < 0) {
            work->idleFrames = 0;
        } else if (++work->idleFrames > 256) {
            work->idleFrames = 256;
        } else {
            ++work->idleFrames;
        }
        if (work->idleFrames >= 16) {
            s32 selected = flaggedValueHolderGetTotal(values);
            u32 key = work->widget.entries[selected]->lastKey;
            u32 nextKey = key + 1;
            if (work->widget.loaded[nextKey] == 0) {
                work->widget.queuedKey = nextKey;
                work->widget.queuedTex = key + 2;
                if (work->widget.loaded[nextKey] == 0) {
                    asdTMTexTableLoadEntryAsync(SCENE_TEXTURE_TABLE, work->widget.queuedKey);
                    work->widget.loaded[nextKey] = 1;
                }
            }
        }
    }
    if (list->cursorMarked == 0) {
        if (static_cast<s8>(selector->released) != 0 &&
            stateCounterBelowLimit(values, FUN_002333f0(selector)) != 0) {
            result = 1;
        }
        if (FUN_0027ee9c() != 0) {
            result = 1;
        }
    }
    return result;
}
}
