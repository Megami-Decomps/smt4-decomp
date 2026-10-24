#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0043df70[];
int scrSetResult(void);
int scrGetArg(...);
int FUN_0030a2c0(unsigned int, int, int, unsigned int);

/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_0030a2c0. */


unsigned int FUN_00222068(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  FUN_0030a2c0(DAT_0043df70[temp_v0],0,0,temp_v1);
  scrSetResult();
  return 1;
}

} /* extern "C" */
