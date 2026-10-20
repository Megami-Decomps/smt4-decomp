#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_0027d98c(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0030b58c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027d98c();
  scrSetResult(temp_v0 == 4);
  return 1;
}

} /* extern "C" */
