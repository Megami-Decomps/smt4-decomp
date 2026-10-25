/* NON_MATCHING: allocation diagnostic metadata/NOP is absent; sprite/page registers and defaults relocation differ. */
#include "camp/PlayLog/PlayLog.h"
#include "classes/Obj4221a4.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdMemAlloc.h"

struct PlayLogPageA { u32 count; u32 values[50]; u32 details[25]; };
struct PlayLogScreenViewA {
    UiResourceParameters parameters;
    UiSpriteState sprites[5];
    Obj4221a4 window;
    s32 state;
    u8 unk348[0x10];
    s16 count;
    u16 unk35a;
    u32 values[50];
    u32 details[25];
    u8 hasPlayer;
    u8 page;
    u8 unk48a[2];
    PlayLogPageA pages[2];
    u32 pending;
    u32 unk6f0;
};
struct PlayLogDrawDefaultsA { u8 first[72]; u8 second[24]; u8 third[224]; };
struct PlayLogPlayerViewA { u8 unk00[0x66]; u16 id; };
extern "C" {
extern PlayLogWorkA *g_playLog;
extern const PlayLogDrawDefaultsA DAT_0052dd98;
void sysMemClear(void *memory, u32 size);
void asdTMTexTableLoadSprites(u32 table);
void asdTMTexLoadMainHeap(u32 table, s32 node);
void loadSlotEnsureLoaded(u32 slot);
void paramsClearPacket(UiResourceParameters *parameters);

void FUN_0014e188(UiSpriteState *sprite, u32 table, s32 image, UiResourceParameters *parameters, s32 active, f32 scale);
void uiSpriteSetKeyframe(UiSpriteState *sprite, s32 channel, s32 frame);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 image, s32 frame);
void FUN_0022feb0(void *work);
void __aeabi_memcpy4(void *output, const void *input, u32 size);
void FUN_00203b40(Obj4221a4 *window, u32 count, s32 rows, s32 first, s32 second, s32 third);
const PlayLogPlayerViewA *gameDataBlocksGetTable(void);

// Allocate play-log resources, build its sprites/pages and display the first page.
void FUN_00215254(void)
{
    if (g_playLog == NULL)
        g_playLog = static_cast<PlayLogWorkA *>(asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(PlayLogScreenViewA), 1));
    // The page storage follows the canonical play-log prefix.
    PlayLogScreenViewA *work = reinterpret_cast<PlayLogScreenViewA *>(g_playLog);
    sysMemClear(work, sizeof(*work));
    work->state = 0;
    work->pending = 0;
    asdTMTexTableLoadSprites(0x25);
    asdTMTexLoadMainHeap(0x25, 0);
    loadSlotEnsureLoaded(0x37);
    paramsClearPacket(&work->parameters);
    paramsInit(&work->parameters, DAT_0052dd98.first, sizeof(DAT_0052dd98.first), DAT_0052dd98.second, sizeof(DAT_0052dd98.second), 0, 0, 0, 0, DAT_0052dd98.third, sizeof(DAT_0052dd98.third));
    for (s32 index = 0; index < 5; ++index) {
        FUN_0014e188((&work->sprites[index]), 0x25, 0, &work->parameters, 1, 1.0f);
        uiSpriteSetKeyframe((&work->sprites[index]), 2, 0);
        uiSpriteSetImageKeyframe((&work->sprites[index]), 0, 0);
    }
    FUN_0022feb0(work);
    work->page = 0;
    __aeabi_memcpy4(work->values, work->pages[0].values, sizeof(work->values));
    __aeabi_memcpy4(work->details, work->pages[work->page].details, sizeof(work->details));
    FUN_00203b40(&work->window, work->pages[work->page].count, 5, 1, 0, 1);
    work->hasPlayer = 0;
    if (gameDataBlocksGetTable()->id != 0)
        work->hasPlayer = 1;
}
}
