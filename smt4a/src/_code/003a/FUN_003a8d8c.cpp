#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlGetMainState(void);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003a8d8c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  scrSetResult(*(short *)(temp_v1 + 0x2006) <= temp_v0);
  return 1;
}

} /* extern "C" */
