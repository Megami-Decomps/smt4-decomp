#include "gamedata/MapSaveBlock.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

s32 FUN_0027d98c(void);
s32 FUN_00287800(void);

/* Clears the map registration request: for modes 0, 1, 3 and 5 without a pending block it also resets two flag bytes. */
void FUN_00208be8(void)
{
    MapSaveBlock *work = gameGetMapBlock();

    if (work->registrationPending != 0) {
        work->registrationPending = 0;
        switch (FUN_0027d98c()) {
        case 0:
        case 1:
        case 3:
        case 5:
            if (FUN_00287800() == 0) {
                asdDebugHookVoid();
                gameGetMapBlock()->departureIndex = 0;
                gameGetMapBlock()->unk01C = 0;
            }
            break;
        case 2:
        case 4:
            break;
        }
    }
}

} /* extern "C" */
