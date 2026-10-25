/* NON_MATCHING: state-block and touch-region-count base registers r5/r6 are exchanged. */
#include "shard/X14_EngineUnits.h"
#include "shard/Shard0031.h"
#include "util/CalleeContracts.h"
#include "gamedata/SaveSlotTable.h"

struct ScriptRunState;
extern "C" {
s32 ifTouchRegionRemove(void);
void sysPlaySe(u16 sound);
void FUN_00168980(s32 mode);
void FUN_0019de98(s32 target, u32 color);
void scrScriptProcessStartEntry(ScriptRunState *script, s32 entry);
void statusDownSwitchTab(u8 value);
void FUN_002c8538(u8 value);
void FUN_002c85b0(u8 value);
void FUN_00333f6c(void);
void FUN_0033449c(u8 value);
void FUN_00371f18(void);
void buttonHelpSetMode(s32 mode);
void FUN_003a7b2c(void);
u32 gameDataBlocksGetWord(void);
s32 aocDataBlockHasEntries(void);

void FUN_0020b490(EngineUnits *result, s32 mode)
{
    struct ResultModeView {
        u8 unk0000[0x4364];
        s32 mode;
        s32 previousMode;
        s32 frame;
        u32 unk4370;
        u32 progress;
        u32 unk4378;
        u32 pending;
        u8 unk4380[0x20];
        ScriptRunState *script;
        u8 unk43a4[0x10];
        s16 touchRegionCount;
    };
    ResultModeView *work = reinterpret_cast<ResultModeView *>(result);
    work->previousMode = work->mode;
    work->mode = mode;
    work->frame = 0;
    work->progress = 0;
    work->pending = 0;
    for (s32 region = 0; region < work->touchRegionCount; ++region)
        ifTouchRegionRemove();
    work->touchRegionCount = 0;

    s32 sound = -1;
    switch (work->mode) {
    case 1: sound = 100; break;
    case 11: sound = 0xa0; break;
    case 12: sound = 0x67; break;
    case 14: sound = 0x68; break;
    case 15: sound = 0xe1; break;
    case 16: sound = 0x6a; break;
    case 17: sound = 0x6c; break;
    case 18: sound = 0xe3; break;
    case 19: sound = 0x66; break;
    case 20: sound = 0x67; break;
    }
    if (sound >= 0) {
        FUN_0019de98(0, 0xf4f4f4ff);
        sysPlaySe(static_cast<u16>(sound));
    }
    if (work->mode == 23) {
        if (aocDataBlockHasEntries()) {
            FUN_00371f18();
            FUN_003a7b2c();
            FUN_002c85b0(0);
            statusDownSwitchTab(0);
            FUN_0023b45c(0);
            FUN_002c8538(0);
            FUN_0033449c(0);
            FUN_00333f6c();
            u32 required = gameDataBlocksGetWord();
            if (required != 0 && required <= *reinterpret_cast<const u32 *>(gameGetSlotTable())) {
                work->mode = 22;
                sysPlaySe(0x92);
                scrScriptProcessStartEntry(work->script, 5);
            } else {
                buttonHelpSetMode(0);
                FUN_00168980(3);
            }
        } else {
            work->mode = 24;
        }
    }
}
}
