#include "common.h"

extern "C" {

int FUN_00273c54(void);
int FUN_00273d34(void);
int FUN_00273f5c(void);
int FUN_00275e18(void);
int FUN_0027d908(void);
int FUN_0027d948(void);
int lmapMainUpdateObj(void);
extern int lmapMainIsRunning(void);
extern int mapMainIsBusy(void);

u32 scrComm_Map_SyncViewFromCamera(void)
{
    FUN_00273f5c();
    FUN_0027d908();
    if (mapMainIsBusy() != 0) {
        FUN_0027d948();
        FUN_0027d908();
        FUN_00273d34();
        FUN_00273c54();
        FUN_00275e18();
    } else {
        if (lmapMainIsRunning() != 0) {
            FUN_0027d948();
            FUN_0027d908();
            lmapMainUpdateObj();
        }
    }
    return 1;
}

} /* extern "C" */
