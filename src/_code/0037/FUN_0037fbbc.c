/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037fbbc` (_code @ 0x37fbbc, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421a24; /* 0x421a24 */

/* Supplied declaration required: FUN_002a23fc. */
extern unsigned int FUN_002a2414(void);
/* Supplied declaration required: FUN_002c423c. */
/* Supplied declaration required: FUN_0037b350. */
/* Supplied declaration required: FUN_0037bf28. */
/* Supplied declaration required: FUN_0037f770. */


int * FUN_0037fbbc(int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  param_1[0x11] = param_2 + 0x34;
  *param_1 = param_2;
  param_1[0x14] = param_2 + 0x48;
  *(unsigned char *)((int)param_1 + 0xf) = 1;
  FUN_0037f770(param_1);
  if ((char)param_1[3] != '\0') {
    temp_v0 = FUN_002a2414();
    FUN_002a23fc(temp_v0,param_1 + 0x11);
    *(unsigned char *)(param_1 + 3) = 0;
  }
  temp_v1 = 0;
  do {
    FUN_0037b350(param_1 + temp_v1 * 3 + 0x4c);
    FUN_0037bf28(param_1 + temp_v1 * 4 + 0x3c);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_002c423c(param_1);
  *param_1 = (int)&DAT_00421a24;
  return param_1;
}
