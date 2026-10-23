#include "battle/btlGameOver.h"
#include "shard/GameDataBlocks.h"

struct BtlUi;
struct GameOverTimingView {
    u32 fadeFrame;
    u32 firstSlotFrame;
    u32 firstSlotRequest;
    u32 secondSlotFrame;
    u32 secondSlotRequest;
    u32 actionFrame;
    u32 actionValue;
    s32 actionParameter;
    u32 loadFrame;
};
extern "C" {
extern GameOverTimingView DAT_00439a70;
extern BtlUi *g_btlUiBlock;
extern const char DAT_004009cc[], DAT_004009e8[], DAT_0040098c[], DAT_004009ac[];
void FUN_00282820(s32, s32, s32, s32, s32, s32, s32, s32);
void btlUiPlaySceneFadeOutWhenReady(BtlUi *);
u32 FUN_0023f27c(s32, u32, u32, u32, void *, s32, s32, s32, s32);
void slotSetRequest(s32, u32, u32);
void asdLoadFileAsyncSimple(const char *, void **, s32);
GameSaveData *gameDataBlocksGetSaveData();
s32 FUN_0023f194(BtlGameOver *);

s32 FUN_003357c0(BtlGameOver *work)
{
    if (work->frameCounter == DAT_00439a70.fadeFrame) {
        FUN_00282820(0, 0, 0, 0, 8, 0, 11, 0);
        btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
    }
    if (work->frameCounter == DAT_00439a70.actionFrame)
        FUN_0023f27c(0, 0, DAT_00439a70.actionValue, 16, NULL,
                     DAT_00439a70.actionParameter, 0, 2, -1);
    if (work->frameCounter == DAT_00439a70.firstSlotFrame)
        slotSetRequest(0, DAT_00439a70.firstSlotRequest, 255);
    if (work->frameCounter == DAT_00439a70.secondSlotFrame)
        slotSetRequest(1, DAT_00439a70.secondSlotRequest, 255);
    if (work->frameCounter <= DAT_00439a70.loadFrame)
        return 0;
    work->state = 3;
    asdLoadFileAsyncSimple(!(work->unk04 & 1) ? DAT_004009cc : DAT_004009e8, &work->dataA, 0);
    asdLoadFileAsyncSimple(!(work->unk04 & 1) ? DAT_0040098c : DAT_004009ac, &work->dataB, 0);
    GameSaveData *save = gameDataBlocksGetSaveData();
    if (save->gameOver.gameOverContinueEnabled < 255)
        ++save->gameOver.gameOverContinueEnabled;
    work->state = 4;
    return FUN_0023f194(work);
}
}
