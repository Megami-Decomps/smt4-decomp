#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003a9148(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlGetMainState();
  temp_v0 = *(int *)(temp_v0 + 0x4ce0);
  if (temp_v0 < 0) {
    temp_v0 = 0;
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
