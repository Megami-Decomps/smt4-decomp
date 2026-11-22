/* NON_MATCHING: 30 lines (18 by shape), one inlining decision. Retail materialises the 1 it stores into `state` where
 * the change ends (`mov r0, #1`) and so keeps 0 in r6 and 1 in r7 (the list set-up's two stack arguments are one
 * `strd r6, [sp]`); this build stores the hoisted 1 and numbers the two registers the other way round.
 * The unit is IDENTICAL when it is compiled as one translation unit with the screen's update (playLogUpdate): the
 * plain `static` playLogSetState then has six callers and armcc inlines it late, where a lone caller is inlined
 * early. The project's `multifile` entry cannot express that (it compiles with --no_autoinline). */
#include "camp/PlayLog/PlayLogSprites.h"

extern "C" {
void __aeabi_memcpy4(void *, const void *, u32); // declcheck: local (the shared declaration does not compile here or changes this unit)
void gridNavigationConfigure(ScrollSelection *list, u32 count, u32 rows, u32 first, u32 second, u32 third);

/* Steps the play log's page change: slides the rows out, shows the other page and slides the rows back in, then
 * returns the screen to its list state. */
void playLogChangePage(PlayLogWorkA *work)
{
    switch (work->pageStep) {
    case 0:
        for (s32 index = 0; index < 5; ++index)
            uiSpriteAdvanceAnimation(&work->sprites[index], 1.0f);
        if (!uiSpriteGetCompletionState(&work->sprites[4]))
            return;
        work->pageStep = 1;
        break;
    case 1:
        break;
    case 2:
        for (s32 index = 0; index < 5; ++index)
            uiSpriteAdvanceAnimation(&work->sprites[index], 1.0f);
        if (!uiSpriteGetCompletionState(&work->sprites[4]))
            return;
        work->pageStep = 3;
        /* fall through */
    case 3:
        playLogSetState(work, 1);
        return;
    default:
        return;
    }
    if (work->page == 0)
        work->page = 1;
    else
        work->page = 0;
    __aeabi_memcpy4(work->values, work->pages[work->page].values, sizeof(work->values));
    __aeabi_memcpy4(work->ids, work->pages[work->page].ids, sizeof(work->ids));
    gridNavigationConfigure(&work->list, work->pages[work->page].count, 5, 1, 0, 1);
    s32 animation = 0;
    if (!work->pageDirection)
        animation = 2;
    playLogSelectAnimation(work, animation);
    work->pageStep = 2;
}
}
