/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c29c4` (_code @ 0x2c29c4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */


void FUN_002c29c4(unsigned int *param_1)

{
/* irregular: irregular input(s): in_cr0, in_s1, in_s2, in_s8; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s8;
  
  *param_1 = 0;
  temp_v0 = (int)param_1 >> 0x20;
  do {
    *(unsigned int *)(temp_v0 + 0x94) = in_s1;
    in_s1 = *(unsigned int *)(temp_v0 + 0x1a4);
    *(unsigned int *)(temp_v0 + 0x1b8) = in_s8;
    *(unsigned int *)(temp_v0 + 0x10) = in_s2;
    coprocessor_storelong(0,in_cr0,param_1);
  } while( 1 );
}
