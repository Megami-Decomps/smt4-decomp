/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022ccec` (_code @ 0x22ccec, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004220cc; /* 0x4220cc */
extern unsigned char DAT_004221d8; /* 0x4221d8 */

extern int FUN_0022e614(int);
extern int FUN_0028757c(unsigned int *);


void FUN_0022ccec(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_004220cc;
  temp_v0 = FUN_0028757c(param_1 + 8);
  temp_v0 = FUN_0022e614(temp_v0 + 0xa8);
  *(unsigned char **)(temp_v0 + 0x494) = &DAT_004221d8;
  *(unsigned char *)(temp_v0 - 0xac) = 0;
  *(unsigned char *)(temp_v0 - 0xab) = 0;
  *(unsigned char *)(temp_v0 - 0xaa) = 0;
  *(unsigned int *)(temp_v0 + 0x4d8) = 0;
  *(unsigned int *)(temp_v0 + 0x4d0) = 0;
  *(unsigned int *)(temp_v0 + 0x4d4) = 0;
  return;
}
