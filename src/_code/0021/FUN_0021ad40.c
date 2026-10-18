/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ad40` (_code @ 0x21ad40, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0024f5ec. */
/* Supplied declaration required: FUN_0024f7d4. */
/* Supplied declaration required: FUN_0024f880. */
/* Supplied declaration required: FUN_0024f890. */
/* Supplied declaration required: FUN_00267d84. */


void FUN_0021ad40(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [24];
  
  if ((*param_1 != 0) && (temp_v0 = param_1[0xc], *(int *)(temp_v0 + 0x10) >= 2)) {
    temp_v2 = param_1[10];
    temp_v3 = *(int *)(temp_v0 + 0x20);
    if ((*(unsigned int *)(temp_v0 + 0xc) & 1) != 0) {
      FUN_0024f890(temp_v0,temp_v5);
      FUN_0024f880(param_1[0xc],temp_v4);
      FUN_0024f7d4(*(unsigned int *)(temp_v2 + 0x10),temp_v4,temp_v5);
      FUN_0024f7d4(*(unsigned int *)(temp_v2 + 0x14),temp_v4,temp_v5);
    }
    if (param_1[0xb] != 0) {
      FUN_00267d84();
    }
    temp_v1 = *(unsigned int *)(temp_v3 + 0x54);
    FUN_0024f5ec(*(unsigned int *)(temp_v2 + 0x10),temp_v1);
    FUN_0024f5ec(*(unsigned int *)(temp_v2 + 0x14),temp_v1);
  }
  return;
}
