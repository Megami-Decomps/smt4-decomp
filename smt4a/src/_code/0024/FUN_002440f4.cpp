#include "battle/btlView.h"

extern "C" {
extern BattleViewState g_battleViewState;
extern const char DAT_00531448[];
extern const char DAT_00531478[];
extern const char DAT_0053148c[];
extern const char DAT_005314a4[];
extern const char DAT_005314bc[];
extern const char DAT_005314d4[];
extern const char DAT_005314ec[];

s32 gameFlagIsSet(u32 flag);
BattleViewOwner* FUN_00178b04(u32 size, const char* sourceFile, u32 sourceLine);
BattleViewOwner* modelListInit(BattleViewOwner* storage);
void FUN_001cd3ec(BattleViewOwner* object, const char* name);

void FUN_002440f4(void)
{
    BattleViewState *view = gameFlagIsSet(0x4D0) ? &g_battleViewState : NULL;
    if (view != NULL) {
        BattleViewOwner* object = FUN_00178b04(0x20, DAT_00531448, 0x233);
        if (object) {
            object = modelListInit(object);
        }
        view->attachments.primary[0] = object;
        FUN_001cd3ec(object, DAT_00531478);

        object = FUN_00178b04(0x20, DAT_00531448, 0x236);
        if (object) {
            object = modelListInit(object);
        }
        view->attachments.primary[1] = object;
        FUN_001cd3ec(object, DAT_0053148c);

        object = FUN_00178b04(0x20, DAT_00531448, 0x239);
        if (object) {
            object = modelListInit(object);
        }
        view->attachments.primary[2] = object;
        FUN_001cd3ec(object, DAT_005314a4);

        object = FUN_00178b04(0x20, DAT_00531448, 0x23C);
        if (object) {
            object = modelListInit(object);
        }
        view->children[0] = object;
        FUN_001cd3ec(object, DAT_005314bc);

        object = FUN_00178b04(0x20, DAT_00531448, 0x23F);
        if (object) {
            object = modelListInit(object);
        }
        view->children[1] = object;
        FUN_001cd3ec(object, DAT_005314d4);

        object = FUN_00178b04(0x20, DAT_00531448, 0x242);
        if (object) {
            object = modelListInit(object);
        }
        view->children[2] = object;
        FUN_001cd3ec(object, DAT_005314ec);
    }
}
}
