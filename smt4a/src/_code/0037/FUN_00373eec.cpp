#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_00373eec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = btlGetMainState();
  temp_v1 = scrGetArg(0);
  scrSetResult(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x23a4));
  return 1;
}

} /* extern "C" */
