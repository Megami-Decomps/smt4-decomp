/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0d50` (_code @ 0x3f0d50, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003f0e20. */


void FUN_003f0d50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 0x1ff8) != 0) {
    temp_v3 = 4;
    do {
      temp_v2 = *(int *)(param_1 + 0x1ed4) + temp_v3 * 0x1d0;
      if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 0x80) != 0) {
        temp_v0 = param_1;
        FUN_003f0e20(param_1,(int)*(short *)(temp_v2 + 0x6a));
        temp_v1 = 0;
        do {
          psVar2 = (short *)(*(int *)(param_1 + 0x1ff8) + temp_v1 * 0x18);
          if ((((*psVar2 == *(short *)(temp_v0 + 0x6e)) && (psVar2[1] == *(short *)(temp_v2 + 0x6a))) &&
              (psVar2[2] == *(short *)(temp_v0 + 0x166))) &&
             (*(int *)(psVar2 + 4) == *(int *)(temp_v0 + 0x170))) {
            *(unsigned int *)(psVar2 + 6) = *(unsigned int *)(temp_v2 + 0xc);
            break;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x32);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x36);
  }
  return;
}
