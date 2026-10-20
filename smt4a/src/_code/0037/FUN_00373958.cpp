#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern int btlGetMainState(void);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_00373958(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  if (temp_v0 < 0x10) {
    temp_v1 = btlGetMainState();
    scrSetResult(*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0x4c88));
  }
  return 1;
}

} /* extern "C" */
