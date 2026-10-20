/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e6c` (_code @ 0x106e6c, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineUrlDestroy(unsigned char [104]);
int FUN_002ee5b8(int, unsigned int);

extern unsigned char LAB_00106e98; /* 0x106e98 */

/* Supplied declaration required: onlineUrlDestroy. */
extern unsigned int FUN_002ee568(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002ee5b8. */


void FUN_00106e6c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [104];
  
  temp_v0 = FUN_002ee568(temp_v1,&LAB_00106e98);
  FUN_002ee5b8(param_1 + 0x24,temp_v0);
  onlineUrlDestroy(temp_v1);
  *(unsigned int *)(param_1 + 0x8c) = 0xffffffff;
  return;
}

} /* extern "C" */
