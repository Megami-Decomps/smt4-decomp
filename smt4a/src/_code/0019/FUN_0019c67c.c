/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c67c` (_code @ 0x19c67c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005c1460; /* 0x5c1460 */
extern signed char DAT_005c1461; /* 0x5c1461 */
extern int DAT_005c1464; /* 0x5c1464 */


void FUN_0019c67c(unsigned char param_1)

{
  char temp_v0;
  int temp_v1;
  short *psVar3;
  
  temp_v1 = DAT_005c1464;
  temp_v0 = '\0';
  if (DAT_005c1460 != '\0') {
    temp_v0 = DAT_005c1461;
  }
  if (DAT_005c1460 != '\0' && temp_v0 != '\0') {
    psVar3 = (short *)(DAT_005c1464 + 0x4e00);
    *(unsigned char *)(DAT_005c1464 + *psVar3 * 0x138) = param_1;
    *(short *)(temp_v1 + 0x4e04) = *psVar3;
  }
  return;
}
