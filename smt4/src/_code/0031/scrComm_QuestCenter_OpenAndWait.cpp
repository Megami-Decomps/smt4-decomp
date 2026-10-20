#include "common.h"

extern "C" {

int jyoucyuGetTableEntry(int index);
int FUN_003840e4(void);
int QuestCenter_GetActiveEntry(void);
extern int FUN_002893d8(void);
extern int QuestCenterMode_IsBusy(void);

u8 scrComm_QuestCenter_OpenAndWait(void)
{
    if (FUN_002893d8() == 0) {
        jyoucyuGetTableEntry(0);
        QuestCenter_GetActiveEntry();
        FUN_003840e4();
    }
    return QuestCenterMode_IsBusy() == 0;
}

} /* extern "C" */
