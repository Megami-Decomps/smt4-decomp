#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(unsigned short);
int scrSetResult(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b1758(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = scrGetArg();
  int p = FUN_0019cac4(temp_v0);
  scrSetResult((*(unsigned short *)(p + 0x16) & 0xf) >> 3);
  return 1;
}

} /* extern "C" */
