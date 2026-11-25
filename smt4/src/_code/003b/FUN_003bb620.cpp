/* NON_MATCHING: the idle-clock reset and queued-texture test still differ in register allocation and scheduling. */
#include "ui/UiSpriteApi.h"
#include "shard/S3SceneWidget.h"
#include "shard/S1ListMenu.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "classes/Obj55ca08.h"
#include "code/Code004d.h"

/* The idle counter extends the widget. The selection interface is embedded in its menu prefix. */
struct SelectionTextureWork {
    SceneWidget widget;
    s32 idleFrames;
};
typedef char SelectionTextureWorkLayoutCheck[
    offsetof(SelectionTextureWork, idleFrames) == 0xCB8 ? 1 : -1];

static __inline Obj55ca08 *textureSelectionOwner(SelectionTextureWork *work)
{
    return (Obj55ca08 *)((u8 *)work + 0x74);
}

/* Evaluates `x` once per comparison: retail increments the idle clock up to three times through it. */
#define CLAMP(x, lo, hi) ((x) < (lo) ? (lo) : (x) > (hi) ? (hi) : (x))

extern "C" {
s32 flaggedValueHolderGetTotal(const FlaggedValueHolder *values);
void sub10OwnerStart(FlaggedValueHolder *values); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "selectOwnerGetSelected" has "C" linkage)
s32 selectOwnerGetSelected(Obj55ca08 *selector); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "sub10OwnerStart" has "C" linkage)
s32 inputConfirmPressed();
s8 uiSubStateGetReady(const Obj55ca08 *subState);
void asdTMTexTableLoadEntryAsync(u32 table, u32 key);

/* Queues the selected texture once the selection has remained unchanged. */
u32 FUN_003bb620(SelectionTextureWork *work)
{
    FlaggedValueHolder *values = (FlaggedValueHolder *)work;
    ListMenu *list = (ListMenu *)work;
    SceneWidget &widget = work->widget;
    u32 result = 0;
    s32 previous = flaggedValueHolderGetTotal(values);
    if (list->cursorMarked == 0) {
        textureSelectionOwner(work)->Obj55ca08::synchronize((const u8 *)work);
        sub10OwnerStart(values);
    }
    if (flaggedValueHolderGetTotal(values) != previous) {
        work->idleFrames = 0;
    } else {
        s32 frames = CLAMP(++work->idleFrames, 0, 256);
        work->idleFrames = frames;
        if (frames > 15) {
            s32 selected = flaggedValueHolderGetTotal(values);
            u16 key = widget.entries[selected]->lastKey;
            u32 nextKey = key + 1;
            s32 nextTexture = key + 2;
            if (!widget.loaded[nextKey]) {
                widget.queuedKey = nextKey;
                widget.queuedTex = nextTexture;
                if (!widget.loaded[nextKey]) {
                    asdTMTexTableLoadEntryAsync(SCENE_TEXTURE_TABLE, widget.queuedKey);
                    widget.loaded[nextKey] = 1;
                }
            }
        }
    }
    if (list->cursorMarked == 0) {
        if (uiSubStateGetReady(textureSelectionOwner(work)) != 0 &&
            stateCounterBelowLimit(values, selectOwnerGetSelected(textureSelectionOwner(work))) != 0) {
            result = 1;
        }
        if (inputConfirmPressed() != 0) {
            result = 1;
        }
    }
    return result;
}
} /* extern "C" */
