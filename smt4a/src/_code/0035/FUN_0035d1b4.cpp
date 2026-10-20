#include "romwright_types.h"

extern "C" {

int FUN_0019f1a4(int, unsigned int);
int scrGetArg(...);
int scrSetResult(void);

/* Supplied declaration required: FUN_0019f1a4. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0035d1b4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  FUN_0019f1a4(temp_v0,temp_v1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
