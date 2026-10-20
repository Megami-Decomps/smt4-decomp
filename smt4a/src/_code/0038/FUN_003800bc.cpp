#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003800bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v2 = 0;
  temp_v1 = btlGetMainState();
  if ((temp_v0 != 0) && (*(int *)(temp_v1 + 0x4e58) != *(int *)(temp_v1 + 0x4e5c))) {
    temp_v2 = 1;
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
