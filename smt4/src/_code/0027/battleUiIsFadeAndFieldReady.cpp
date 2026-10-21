#include "common.h"
extern "C" {
struct BattleUiWork { u8 unk00[8]; u8 scene[0x21F8]; u8 field[1]; };
struct BattleUiGlobals { u8 unk00[0x20]; BattleUiWork *work; };
extern BattleUiGlobals g_btlUi;
s32 playSceneIsFadeOutDone(void *scene);
s32 FUN_0028be84(void *field);
/* Report readiness only after scene fade-out and the field operation both finish. */
s32 battleUiIsFadeAndFieldReady(void) { BattleUiWork *work=g_btlUi.work; if (playSceneIsFadeOutDone(work->scene)!=0 && FUN_0028be84(work->field)!=0) return 1; return 0; }
}
