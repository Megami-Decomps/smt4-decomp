/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012199c` (_code @ 0x12199c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);
int FUN_0030ff4c(void);

extern unsigned char DAT_0055b09c; /* 0x55b09c */

extern int onlineStringDestroy(int);
/* Supplied declaration required: FUN_002ecac4. */
extern int vectorDestroyBytes(unsigned int *);
/* Supplied declaration required: FUN_0030ff4c. */


void FUN_0012199c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b09c;
  if (param_1[0x1b] != 0) {
    FUN_0030ff4c();
    param_1[0x1b] = 0;
  }
  temp_v0 = vectorDestroyBytes(param_1 + 0x1f);
  temp_v0 = onlineStringDestroy(temp_v0 - 0xc);
  FUN_002ecac4(temp_v0 - 0x70);
  return;
}

} /* extern "C" */
