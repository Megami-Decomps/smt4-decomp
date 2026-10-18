/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026dafc` (_code @ 0x26dafc, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */

extern int FUN_0029e9cc(unsigned short);


void FUN_0026dafc(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044e144;
  if (((DAT_0044e144 != 0) && (*(char *)(DAT_0044e144 + 0x1e66) != '\r')) &&
     ((*(char *)(DAT_0044e144 + 0x1e66) != '\x06' ||
      (temp_v1 = FUN_0029e9cc(*(unsigned short *)(DAT_0044e144 + 0x1300)), temp_v1 != 0)))) {
    *(unsigned int *)(temp_v0 + 0x1898) = param_1;
  }
  return;
}
