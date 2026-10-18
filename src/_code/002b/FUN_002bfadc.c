/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfadc` (_code @ 0x2bfadc, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern int DAT_004e3aa0; /* 0x4e3aa0 */
extern int DAT_004e3b18; /* 0x4e3b18 */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */


int FUN_002bfadc(unsigned int param_1,int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = &DAT_004e39e0;
  temp_v0 = DAT_004e3aa0;
  if (((param_1 < 2) || (temp_v0 = DAT_004e3b18, param_1 == 2)) && (temp_v0 == 0x500)) {
    return param_2 >> 7;
  }
  puVar3 = &DAT_004e3be0;
  if (param_1 >= 2) {
    puVar3 = (unsigned char *)(param_1 << 7);
    puVar1 = (unsigned int *)0xd1;
  }
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)*(unsigned short *)(puVar3 + 2);
  }
  return 1;
}
