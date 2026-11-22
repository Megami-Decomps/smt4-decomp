/* NON_MATCHING: one scheduling difference: retail sets the first page copy's size (r2) after its source address, the build before it. */
#include "camp/PlayLog/PlayLog.h"
#include "classes/Obj4221a4.h"
#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>
#include "ui/UiSpriteState.h"

struct PlayLogPlayerViewA { u8 unk00[0x66]; u16 id; };
extern "C" {
extern PlayLogWorkA *g_playLog;
void sysMemClear(void *memory, u32 size);
void asdTMTexTableLoadSprites(u32 table);
void loadSlotEnsureLoaded(u32 slot);
void paramsClearPacket(UiResourceParameters *parameters);

void playLogBuildPages(void *work);
void gridNavigationConfigure(ScrollSelection *list, u32 count, s32 rows, s32 first, s32 second, s32 third);
const PlayLogPlayerViewA *gameDataBlocksGetTable(void);

/* Animation key tables passed to paramsInit; the original file defined them statically. */
static const UiSpritePositionKey sPlayLogPositionKeys[] = {
    {320, 0, 0, 0, 8, 0, 0},
    {0, 0, -320, 0, 4, 0, 0},
    {30, 0, 0, 0, 5, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {-30, 0, 0, 0, 5, 0, 0},
    {0, 0, 30, 0, 3, 0, 0},
};
static const UiSpriteScalarKey sPlayLogAlphaKeys[] = {
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
};
static const SpriteAnimationCommand sPlayLogCommands[] = {
    {4, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {3, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {2, 0, {0, 0, 0}, -3, 0, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
    {5, 0, {0, 0, 0}, -3, 1, 0, {0, 0, 0}, -3, 0, {0, 0, 0}},
    {-1, 0, {0, 0, 0}, -1, -1, 0, {0, 0, 0}, -1, 0, {0, 0, 0}},
};

// Allocate play-log resources, build its sprites/pages and display the first page.
void playLogCreate(void)
{
    if (g_playLog == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\PlayLog\\PlayLog.cpp", 419);
        g_playLog = static_cast<PlayLogWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(PlayLogWorkA), 1));
    }
    PlayLogWorkA *work = g_playLog;
    sysMemClear(work, sizeof(*work));
    work->state = 0;
    work->pageStep = 0;
    asdTMTexTableLoadSprites(0x25);
    asdTMTexLoadMainHeap(0x25, 0);
    loadSlotEnsureLoaded(0x37);
    paramsClearPacket(&work->parameters);
    paramsInit(&work->parameters, sPlayLogPositionKeys, sizeof(sPlayLogPositionKeys), sPlayLogAlphaKeys,
               sizeof(sPlayLogAlphaKeys), NULL, 0, NULL, 0, sPlayLogCommands, sizeof(sPlayLogCommands));
    for (s32 index = 0; index < 5; ++index) {
        uiSpriteStateInitFromSource((&work->sprites[index]), 0x25, 0, &work->parameters, 1, 1.0f);
        uiSpriteSetKeyframe((&work->sprites[index]), 2, 0);
        uiSpriteSetImageKeyframe((&work->sprites[index]), 0, 0);
    }
    playLogBuildPages(work);
    work->page = 0;
    memcpy(work->values, work->pages[0].values, sizeof(work->values));
    memcpy(work->ids, work->pages[work->page].ids, sizeof(work->ids));
    gridNavigationConfigure(&work->list, work->pages[work->page].count, 5, 1, 0, 1);
    work->hasPlayer = 0;
    if (gameDataBlocksGetTable()->id != 0)
        work->hasPlayer = 1;
}
}
