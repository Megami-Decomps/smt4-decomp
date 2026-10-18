/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fec44` (_code @ 0x2fec44, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_002509d8. */
/* Supplied declaration required: FUN_002900b0. */
extern unsigned char FUN_00299224(unsigned int);
/* Supplied declaration required: FUN_002bdac0. */


void FUN_002fec44(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = DAT_0043dd50;
  *(unsigned char *)(DAT_0043dd50 + 0x5f2) = 1;
  temp_v2 = FUN_00299224(param_1);
  *(unsigned char *)(temp_v0 + 0x5c4) = temp_v2;
  *(short *)(temp_v0 + 0x97e) = (short)param_1;
  FUN_002509d8();
  FUN_002900b0(param_1,1);
  FUN_002bdac0(temp_v0 + 0x34,0);
  temp_v1 = DAT_0043dd50;
  *(unsigned int *)(DAT_0043dd50 + 8) = *(unsigned int *)(DAT_0043dd50 + 4);
  *(unsigned int *)(temp_v1 + 4) = 1;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0x1c;
  return;
}
