#include "shard/SaveWork.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

SaveWork *gameGetMapBlock(void);
s32 FUN_0027d98c(void);
s32 FUN_00287800(void);

/* Clears the map registration request: for modes 0, 1, 3 and 5 without a pending block it also resets two flag bytes. */
void FUN_00208be8(void)
{
    SaveWork *work = gameGetMapBlock();

    if (work->mapRegistration.pending != 0) {
        work->mapRegistration.pending = 0;
        switch (FUN_0027d98c()) {
        case 0:
        case 1:
        case 3:
        case 5:
            if (FUN_00287800() == 0) {
                asdDebugHookVoid();
                gameGetMapBlock()->unk03 = 0;
                gameGetMapBlock()->unk1C = 0;
            }
            break;
        case 2:
        case 4:
            break;
        }
    }
}

} /* extern "C" */
