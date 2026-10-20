/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c9cc` (_code @ 0x30c9cc, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00306d24(...);
int FUN_00306d38(int, unsigned int);
int FUN_00306d44(int);

extern unsigned char DAT_0055a330; /* 0x55a330 */
extern unsigned char DAT_0055aaec; /* 0x55aaec */

extern int FUN_0030395c(int, unsigned int);
/* Supplied declaration required: FUN_00306d24. */
/* Supplied declaration required: FUN_00306d38. */
/* Supplied declaration required: FUN_00306d44. */


unsigned int *
FUN_0030c9cc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  *param_1 = (unsigned int)&DAT_0055aaec;
  *(unsigned char *)(param_1 + 1) = 0;
  puStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = FUN_00306d24(param_1 + 5,0,0xffff);
  temp_v0 = FUN_0030395c(temp_v0 + 0x1c,0);
  *(unsigned int *)(temp_v0 - 0x28) = 0;
  *(unsigned char **)(temp_v0 - 0x30) = &DAT_0055a330;
  *(unsigned int *)(temp_v0 - 0x24) = 0;
  temp_v1 = FUN_00306d24(&puStack_20,0,0xffff);
  FUN_00306d38(temp_v0 - 0x1c,temp_v1);
  *(unsigned int *)(temp_v0 - 8) = 0;
  *(unsigned int *)(temp_v0 - 0x20) = 0;
  *(unsigned int *)(temp_v0 - 4) = 0;
  FUN_00306d44(temp_v0);
  return (unsigned int *)(temp_v0 - 0x30);
}

} /* extern "C" */
