#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_002b06c4(unsigned int);

/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_0031858c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b06c4((unsigned short)scrGetArg());
  scrSetResult((*(unsigned short *)(temp_v0 + 0x16) & 0x7f) >> 6);
  return 1;
}

} /* extern "C" */
