#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int shopGetResult(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b0700(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = shopGetResult();
  scrSetResult(*(unsigned char *)(temp_v0 + 0x1604c));
  return 1;
}

} /* extern "C" */
