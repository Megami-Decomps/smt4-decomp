#include "romwright_types.h"

extern "C" {

unsigned int FUN_0019cac4(unsigned int);
int scrSetResult(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b1a28(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_0019cac4(temp_v0);
  scrSetResult((*(unsigned short *)(temp_v1 + 0x16) & 0x1f) >> 4);
  return 1;
}

} /* extern "C" */
