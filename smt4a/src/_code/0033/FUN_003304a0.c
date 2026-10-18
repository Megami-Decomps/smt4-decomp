/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003304a0` (_code @ 0x3304a0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */
extern int DAT_0057f594; /* 0x57f594 */

extern unsigned int FUN_00236038(void);


unsigned int FUN_003304a0(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v2 = FUN_00236038();
  *(unsigned int *)(DAT_0057f58c + 0x19ec) = temp_v2;
  *(unsigned int *)(DAT_0057f590 + 0x19ec) = temp_v2;
  *(unsigned int *)(DAT_0057f594 + 0x19ec) = temp_v2;
  temp_v3 = 0;
  do {
    temp_v1 = temp_v3 * 4;
    temp_v0 = temp_v3 * 4;
    temp_v3 = temp_v3 + 2;
    *(unsigned int *)(*(int *)(temp_v1 + 0x5e2010) + 0x19ec) = temp_v2;
    *(unsigned int *)(*(int *)(temp_v0 + 0x5e2014) + 0x19ec) = temp_v2;
  } while (temp_v3 < 0xc);
  return 1;
}
