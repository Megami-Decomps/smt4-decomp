/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ffac` (_code @ 0x30ffac, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0030ffdc; /* 0x30ffdc */

/* Supplied declaration required: FUN_001107c4. */
extern int FUN_002e3390(int);
extern unsigned int FUN_002e786a(int, unsigned char *, unsigned int);


void FUN_0030ffac(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_2 != 0) {
    temp_v0 = FUN_002e3390(param_2);
    temp_v1 = FUN_002e786a(temp_v0 + 1,&LAB_0030ffdc,0);
    *param_1 = temp_v1;
    FUN_001107c4(param_2,temp_v1,temp_v0 + 1);
    return;
  }
  *param_1 = 0;
  return;
}
