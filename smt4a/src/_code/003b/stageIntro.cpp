#include "shard/Shard003B.h"

extern "C" {

typedef struct StageSub {
    /* 0x00 */ u8 flag;
    /* 0x01 */ u8 unk01[0x23];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ s32 kind;
} StageSub;

typedef struct StageObj {
    /* 0x000 */ u8 unk000[0x9B4];
    /* 0x9B4 */ StageSub sub;
} StageObj;

extern StageObj *g_mapGimic;

extern void naviMainSetFlagsAndActivate(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void gameFlagSetValue(u32 index, s32 value, s32 flag);

/* Plays the stage's introduction for its kind (0, 4, 8, 0xE, 0x12) and then flags it. */
void stageIntro(void)
{
    StageSub *sub = &g_mapGimic->sub;

    if (sub->flag != 0) {
        if (sub->kind == 0) {
            naviMainSetFlagsAndActivate(0x4E, 8, 0, 0, 0, 0);
        }
        if (sub->kind == 4) {
            naviMainSetFlagsAndActivate(0xBF, 7, 0, 0, 0, 0);
        }
        if (sub->kind == 8) {
            naviMainSetFlagsAndActivate(0xCD, 3, 0, 0, 0, 0);
        }
        if (sub->kind == 0xE) {
            naviMainSetFlagsAndActivate(0xDA, 5, 0, 0, 0, 0);
        }
        if (sub->kind == 0x12) {
            naviMainSetFlagsAndActivate(0xED, 4, 0, 0, 0, 0);
        }
        gameFlagSetValue(sub->unk24, 1, 1);
    }
}

} /* extern "C" */
