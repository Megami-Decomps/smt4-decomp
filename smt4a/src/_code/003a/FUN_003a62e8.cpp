/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a62e8` (_code @ 0x3a62e8, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002613f0(int);

/* Supplied declaration required: FUN_002613f0. */
extern int FUN_003f3104(int);
extern int FUN_004bca68(int, unsigned short);


void FUN_003a62e8(int param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned short *puVar4;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = *(short *)(param_1 + 0x62);
  while (psVar2 = (short *)FUN_002613f0(temp_v2), *psVar2 != temp_v0) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x18) {
      return;
    }
  }
  temp_v1 = FUN_002613f0(temp_v2);
  temp_v1 = FUN_004bca68(param_1,*(unsigned short *)(temp_v1 + 2));
  if (temp_v1 == 0) {
    puVar4 = (unsigned short *)FUN_002613f0(temp_v2);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    if (param_1 != 0) {
      temp_v0 = *(short *)(param_1 + 0x62);
      temp_v2 = 0;
      do {
        psVar2 = (short *)FUN_002613f0(temp_v2);
        if (*psVar2 == temp_v0) goto LAB_003a63b8;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x18);
      temp_v2 = 0;
      do {
        psVar2 = (short *)FUN_002613f0(temp_v2);
        if (*psVar2 == 0) {
          puVar4 = (unsigned short *)FUN_002613f0(temp_v2);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
LAB_003a63b8:
          if (temp_v2 < 0) {
            return;
          }
          temp_v1 = FUN_003f3104(param_1);
          if (temp_v1 == 0) {
            return;
          }
          puVar4 = (unsigned short *)FUN_002613f0(temp_v2);
          *puVar4 = *(unsigned short *)(param_1 + 0x62);
          temp_v2 = FUN_002613f0(temp_v2);
          *(short *)(temp_v2 + 6) = (short)temp_v1;
          return;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x18);
    }
  }
  return;
}

} /* extern "C" */
