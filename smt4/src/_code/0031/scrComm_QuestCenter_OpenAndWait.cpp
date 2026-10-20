#include "common.h"

extern "C" {

int jyoucyuGetTableEntry(int index);
int flagsSetBit0(void);
int QuestCenter_GetActiveEntry(void);
extern int scrGetCommandFrame(void);
extern int QuestCenterMode_IsBusy(void);

u8 scrComm_QuestCenter_OpenAndWait(void)
{
    if (scrGetCommandFrame() == 0) {
        jyoucyuGetTableEntry(0);
        QuestCenter_GetActiveEntry();
        flagsSetBit0();
    }
    return QuestCenterMode_IsBusy() == 0;
}

} /* extern "C" */
