/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0c78` (_code @ 0x3f0c78, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, int);

/* Supplied declaration required: FUN_003f0e20. */


void FUN_003f0c78(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  
  if (*(int *)(param_1 + 0x1ff8) != 0) {
    temp_v2 = 4;
    do {
      puVar4 = (unsigned int *)(*(int *)(param_1 + 0x1ed4) + temp_v2 * 0x1d0);
      if ((puVar4[0x14] & 1) != 0 && (puVar4[0x14] & 0x80) != 0) {
        temp_v0 = param_1;
        FUN_003f0e20(param_1,(int)*(short *)((int)puVar4 + 0x6a));
        temp_v1 = 0;
        do {
          psVar2 = (short *)(*(int *)(param_1 + 0x1ff8) + temp_v1 * 0x18);
          if ((((*psVar2 == *(short *)(temp_v0 + 0x6e)) &&
               (psVar2[1] == *(short *)((int)puVar4 + 0x6a))) &&
              (psVar2[2] == *(short *)(temp_v0 + 0x166))) &&
             (*(int *)(psVar2 + 4) == *(int *)(temp_v0 + 0x170))) {
            *puVar4 = *(unsigned int *)(psVar2 + 6);
            puVar4[3] = *(unsigned int *)(psVar2 + 6);
            break;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x32);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x36);
  }
  return;
}

} /* extern "C" */
