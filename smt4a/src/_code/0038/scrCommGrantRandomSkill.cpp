/* NON_MATCHING: unit starts at0x38df2c PUSH but the real entry's MOVr0,#0 is at0x38df28, so scrGetArg's required index setup is omitted. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_0023acdc(void);
int scrSetResult(int);
int FUN_003f0e20(int, int);
int nkmGrowthLearnRandomSkill(void);

/* Supplied declaration required: btlGetMainState. */
extern int gameGetSlotRecord(int);
extern int scrGetArg(void);
/* Supplied declaration required: FUN_0023acdc. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: nkmGrowthLearnRandomSkill. */


unsigned int scrCommGrantRandomSkill(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x6d) {
    btlGetMainState();
    temp_v1 = btlGetMainState();
    FUN_003f0e20(temp_v1,temp_v0);
    temp_v0 = *(int *)(temp_v1 + 0x3fc);
  }
  else {
    temp_v0 = gameGetSlotRecord(temp_v0 - 0x6d);
  }
  nkmGrowthLearnRandomSkill();
  if (0 < temp_v0) {
    FUN_0023acdc();
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
