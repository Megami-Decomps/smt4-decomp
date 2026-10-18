/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b710` (_code @ 0x38b710, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
extern unsigned char FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: FUN_003dc530. */


void FUN_0038b710(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = DAT_0057f28c;
  *(unsigned char *)(DAT_0057f28c + 0x93e) = 1;
  temp_v2 = FUN_001bd100(param_1);
  *(unsigned char *)(temp_v0 + 0x90c) = temp_v2;
  *(short *)(temp_v0 + 0xcca) = (short)param_1;
  FUN_003dc530();
  FUN_003d498c(param_1,1);
  FUN_00184758(temp_v0 + 0x34,0);
  FUN_00184c00(temp_v0 + 0x34,8,0);
  temp_v1 = DAT_0057f28c;
  *(unsigned int *)(DAT_0057f28c + 8) = *(unsigned int *)(DAT_0057f28c + 4);
  *(unsigned int *)(temp_v1 + 4) = 1;
  *(unsigned int *)(temp_v1 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0x1c;
  return;
}
