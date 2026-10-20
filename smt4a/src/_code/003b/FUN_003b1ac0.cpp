#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_0014af84(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b1ac0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  scrSetResult(*(unsigned char *)(temp_v0 + 0x27e3f));
  return 1;
}

} /* extern "C" */
