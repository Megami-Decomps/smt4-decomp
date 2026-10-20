#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_002b06c4(unsigned short);

/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_003185b8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b06c4(scrGetArg());
  scrSetResult((*(unsigned short *)(temp_v0 + 0x16) & 0x3f) >> 5);
  return 1;
}

} /* extern "C" */
