#include "battle/btlView.h"
#include "code/Code001c.h"

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
void* asdMemoryAllocTraced(u32 size, const char* sourceFile, u32 sourceLine);

void FUN_002440f4(void)
{
    BattleViewState *view = gameFlagIsSet(0x4D0) ? &g_battleViewState : NULL;
    if (view != NULL) {
        MoriModelContent* object = static_cast<MoriModelContent*>(asdMemoryAllocTraced(0x20, DAT_00531448, 0x233));
        if (object) {
            object = modelListInit(object);
        }
        view->attachments.primary[0] = object;
        modelLoadFileAsyncByName(object, DAT_00531478);

        object = static_cast<MoriModelContent*>(asdMemoryAllocTraced(0x20, DAT_00531448, 0x236));
        if (object) {
            object = modelListInit(object);
        }
        view->attachments.primary[1] = object;
        modelLoadFileAsyncByName(object, DAT_0053148c);

        object = static_cast<MoriModelContent*>(asdMemoryAllocTraced(0x20, DAT_00531448, 0x239));
        if (object) {
            object = modelListInit(object);
        }
        view->attachments.primary[2] = object;
        modelLoadFileAsyncByName(object, DAT_005314a4);

        object = static_cast<MoriModelContent*>(asdMemoryAllocTraced(0x20, DAT_00531448, 0x23C));
        if (object) {
            object = modelListInit(object);
        }
        view->children[0] = object;
        modelLoadFileAsyncByName(object, DAT_005314bc);

        object = static_cast<MoriModelContent*>(asdMemoryAllocTraced(0x20, DAT_00531448, 0x23F));
        if (object) {
            object = modelListInit(object);
        }
        view->children[1] = object;
        modelLoadFileAsyncByName(object, DAT_005314d4);

        object = static_cast<MoriModelContent*>(asdMemoryAllocTraced(0x20, DAT_00531448, 0x242));
        if (object) {
            object = modelListInit(object);
        }
        view->children[2] = object;
        modelLoadFileAsyncByName(object, DAT_005314ec);
    }
}
}
