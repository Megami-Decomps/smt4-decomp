/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ecdc` (_code @ 0x37ecdc, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7430. */
extern unsigned int FUN_002bb020(void);
extern unsigned int FUN_002bd440(void);
/* Supplied declaration required: FUN_0037a2a8. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


void FUN_0037ecdc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x60);
  temp_v0 = FUN_002bb020();
  FUN_0037a2a8(temp_v0,temp_v1);
  temp_v2 = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    do {
      if (*(int *)(param_1 + temp_v2 * 0x340 + 0x108) != 0) {
        nw_snd_internal_driver_Voice_Stop();
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(unsigned int *)(param_1 + 0xd0));
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = FUN_002bd440();
    FUN_002b7430(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  return;
}
