/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ff80` (_code @ 0x30ff80, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0030ffa8; /* 0x30ffa8 */

extern int FUN_002e783c(int);
extern unsigned int FUN_002e786a(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e7888. */


void FUN_0030ff80(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_2 != 0) {
    temp_v0 = FUN_002e783c(param_2);
    temp_v1 = FUN_002e786a(temp_v0 + 1,&LAB_0030ffa8,0);
    *param_1 = temp_v1;
    FUN_002e7888(temp_v1,param_2);
    return;
  }
  *param_1 = 0;
  return;
}
