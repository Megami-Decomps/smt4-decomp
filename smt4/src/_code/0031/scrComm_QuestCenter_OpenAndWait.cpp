#include "romwright_types.h"

extern "C" {

int FUN_002c564c(int);
int FUN_003840e4(void);
int QuestCenter_GetActiveEntry(void);

extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_003840e4. */
extern int QuestCenterMode_IsBusy(void);
/* Supplied declaration required: QuestCenter_GetActiveEntry. */


unsigned char scrComm_QuestCenter_OpenAndWait(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    FUN_002c564c(0);
    QuestCenter_GetActiveEntry();
    FUN_003840e4();
  }
  temp_v0 = QuestCenterMode_IsBusy();
  return temp_v0 == 0;
}

} /* extern "C" */
