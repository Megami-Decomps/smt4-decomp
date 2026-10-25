#include <new>
#include "title/titleMain.h"
#include "classes/FloatState.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

namespace {
struct TitleFirstState { FloatState state; u8 unk60[0x6fc - sizeof(FloatState)]; };
struct TitleSecondState { FloatState state; u8 unk60[0x508 - sizeof(FloatState)]; };
struct TitleThirdState { FloatState state; u8 unk60[0x128 - sizeof(FloatState)]; };
struct TitleSceneStorage {
    u8 unk0000[0x4a0];       // 0x0000
    TitleFirstState first;   // 0x04a0
    TitleSecondState second; // 0x0b9c
    TitleThirdState third;   // 0x10a4
    f32 unitValues[4];       // 0x11cc
    u8 unk11dc[0x1c0];       // 0x11dc
};
}

extern "C" {
void FUN_0010f144(TitleScene*);
extern TitleScene* g_titleScene;

// Allocate the full scene, construct its state blocks and publish it.
void FUN_00105b94()
{
    TitleSceneStorage* scene = new (asdOperatorNew(sizeof(TitleSceneStorage))) TitleSceneStorage;
    if (scene != NULL) {
        f32 *values = scene->unitValues;
        values[0] = 1.0f;
        values[1] = 1.0f;
        values[2] = 1.0f;
        values[3] = 1.0f;
    }
    g_titleScene = (TitleScene*)scene;
    FUN_0010f144((TitleScene*)scene);
}
}
