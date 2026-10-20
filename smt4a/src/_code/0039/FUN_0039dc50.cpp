#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_001b4aa0(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0039dc50(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001b4aa0();
  scrSetResult(temp_v0 == 4);
  return 1;
}

} /* extern "C" */
