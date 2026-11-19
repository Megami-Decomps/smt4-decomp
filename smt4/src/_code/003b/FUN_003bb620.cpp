/* NON_MATCHING: idle-clock clamp, texture queue reloads, and embedded-selector register allocation differ. */
#include "ui/UiSpriteApi.h"
#include "shard/S3SceneWidget.h"
#include "shard/S1ListMenu.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "classes/Obj55ca08.h"
#include "code/Code004d.h"

// The idle counter extends the recovered widget prefix. The other views share its existing bytes.
struct SelectionTextureWork {
    SceneWidget widget;
    s32 idleFrames;
};
typedef char SelectionTextureWorkLayoutCheck[
    offsetof(SelectionTextureWork, idleFrames) == 0xcb8 ? 1 : -1];

extern "C" {
s32 flaggedValueHolderGetTotal(const FlaggedValueHolder *values);
void sub10OwnerStart(FlaggedValueHolder *values); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "selectOwnerGetSelected" has "C" linkage)
s32 selectOwnerGetSelected(Obj55ca08 *selector); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "sub10OwnerStart" has "C" linkage)
s32 FUN_0027ee9c();
s8 uiSubStateGetReady(const Obj55ca08 *subState);
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
        sub10OwnerStart(values);
    }
    if (flaggedValueHolderGetTotal(values) != previous) {
        work->idleFrames = 0;
    } else {
        // The range test advances the idle clock through the stored word on each successful bound check.
        s32 *clock = &work->idleFrames;
        s32 frames = *clock + 1;
        *clock = frames;
        if (frames < 0) {
            frames = 0;
        } else {
            frames = frames + 1;
            *clock = frames;
            if (frames > 256) {
                frames = 256;
            } else {
                frames = frames + 1;
                *clock = frames;
            }
        }
        work->idleFrames = frames;
        if (frames >= 16) {
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
        if (uiSubStateGetReady(selector) != 0 &&
            stateCounterBelowLimit(values, selectOwnerGetSelected(selector)) != 0) {
            result = 1;
        }
        if (FUN_0027ee9c() != 0) {
            result = 1;
        }
    }
    return result;
}
}
