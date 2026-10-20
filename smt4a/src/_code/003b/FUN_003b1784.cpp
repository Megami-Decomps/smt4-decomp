#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(unsigned int);
int scrSetResult(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b1784(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = scrGetArg();
  scrSetResult((*(unsigned short *)(FUN_0019cac4(temp_v0) + 0x16) & 7) >> 2);
  return 1;
}

} /* extern "C" */
