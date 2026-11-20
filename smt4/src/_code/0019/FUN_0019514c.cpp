/* NON_MATCHING: readable rewrite from retail disassembly compiles (215 vs 200 rows); retail hoists the 0x424 literal and keeps the per-row loops as separate counters */
#include "common.h"
#include "gamedata/PlayLogTable.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

// One animated row widget (0x8c bytes each).
struct RowWidget {
    u8 unk00[0x8c];
};

extern "C" {

#define SCREEN_FRAME(s) (*reinterpret_cast<s32*>(reinterpret_cast<u8*>(s) + 0x340))
#define SCREEN_STATE(s) (*reinterpret_cast<s32*>(reinterpret_cast<u8*>(s) + 0x344))

void uiSlidingSpriteAdvance(void* widget, s32 arg);
u16 ifTouchRegionAddRequested(u32 group, u32 index);
s32 resourceRunOperationIfUnblocked(void* list);
s32 gridNavigationHandleConfirm(void* list, s32 arg);
u32 saveBlockGetPlaySeconds(void);
s32 uiScrollHandleActionsOrTouch(void* list, const TextureTableEntryIV *touchArea, s32 b, s32 c, s32 d, s32 e, u8* flags, s32 f, s32 g);
s32 eventQueueAddUniqueIfValid(u32 event);
s32 inputQueryButtonState(s32 a, s32 b);
void timerStart(void* widget, s32 a, s32 b);
void uiSpriteAdvanceAnimation(void* widget);

// Per-frame update of the animated scroll list: row fade-in, list input handling with
// cursor events, then row fade-out when the list is dismissed.
void FUN_0019514c(u8** screenRef)
{
    u8* screen = *screenRef;
    RowWidget* rows = reinterpret_cast<RowWidget*>(screen + 0x20);
    void* list = screen + 0x2dc;
    s8 ready = *reinterpret_cast<s8*>(screen + 0x2da);
    s32 frame = SCREEN_FRAME(screen);
    switch (SCREEN_STATE(screen)) {
    case 0:
        for (s32 i = 0; i < 5; i++) {
            if (i <= frame) uiSlidingSpriteAdvance(&rows[i], 0);
        }
        if (ready != 0) {
            *reinterpret_cast<u16*>(screen + 0x348) = ifTouchRegionAddRequested(0x30, 0x1a);
            *reinterpret_cast<u16*>(screen + 0x34a) = ifTouchRegionAddRequested(0x30, 0x1b);
            *reinterpret_cast<u16*>(screen + 0x34c) = ifTouchRegionAddRequested(0x30, 0x1c);
            *reinterpret_cast<u16*>(screen + 0x358) += 3;
            SCREEN_STATE(screen) = 1;
        }
        break;
    case 1: {
        s32 count = (s32)gridNavigationGetItemCount(list);
        for (s32 i = 0; i < count; i = i + 1, count = (s32)gridNavigationGetItemCount(list)) {
            u32 id = reinterpret_cast<s16*>(screen + 0x424)[i];
            void *table = dataTableGet(0x37, 0);
            PlayLogRecord *entries = static_cast<PlayLogRecord *>(dataTableGetEntries(table));
            if (id < dataTableGetCount(table) && &entries[id] != NULL && entries[id].counter < 0) {
                reinterpret_cast<u32*>(screen + 0x35c)[i] = saveBlockGetPlaySeconds();
            }
        }
        u8 flags = 0;
        s32 previous = resourceRunOperationIfUnblocked(list);
        s32 handled = uiScrollHandleActionsOrTouch(list, asdTMTexTableEntryAt(0x30, 0x1c), 0,
            *reinterpret_cast<s16*>(screen + 0x34c), *reinterpret_cast<s16*>(screen + 0x348),
            *reinterpret_cast<s16*>(screen + 0x34a), &flags, 0, 0);
        if (handled == 0) {
            if (gridNavigationHandleConfirm(list, 0) != 0) {
                if ((s32)gridNavigationGetItemCount(list) > 5) {
                    while (resourceRunOperationIfUnblocked(list) == previous) {
                        if (resourceRunOperationIfUnblocked(list) != 0 && listCursorGetRowIfUnblocked(list) == 0) break;
                        if (resourceRunOperationIfUnblocked(list) == (s32)gridNavigationGetItemCount(list) - 5 && listCursorGetRowIfUnblocked(list) == 4) break;
                        gridNavigationHandleConfirm(list, 0);
                    }
                }
            } else {
                if (inputQueryButtonState(1, 1) != 0) {
                    eventQueueAddUniqueIfValid(0x0100016e);
                    for (s32 i = 0; i < 5; i++) timerStart(&rows[i], 1, 0);
                    SCREEN_STATE(screen) = 2;
                }
                break;
            }
        }
        if (resourceRunOperationIfUnblocked(list) != previous) eventQueueAddUniqueIfValid(0x0100016e);
        break;
    }
    case 2:
        for (s32 i = 0; i < 5; i++) uiSpriteAdvanceAnimation(&rows[i]);
        if (ready != 0) SCREEN_STATE(screen) = 3;
        break;
    default:
        break;
    }
    SCREEN_FRAME(screen) = SCREEN_FRAME(screen) + 1;
}

} /* extern "C" */
