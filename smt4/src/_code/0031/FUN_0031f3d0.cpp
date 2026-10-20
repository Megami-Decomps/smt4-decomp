#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_002b06c4(unsigned int);

/* Supplied declaration required: scrSetResult. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_0031f3d0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_002b06c4(temp_v0);
  scrSetResult((*(unsigned char *)(temp_v1 + 0xa5) & 3) >> 1);
  return 1;
}

} /* extern "C" */
