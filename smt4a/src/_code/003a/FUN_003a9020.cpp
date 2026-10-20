#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003a9020(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlGetMainState();
  scrSetResult((int)*(short *)(temp_v0 + 0x4c72));
  return 1;
}

} /* extern "C" */
