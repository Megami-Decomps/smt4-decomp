/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ac58` (_code @ 0x35ac58, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002613f0(int);
int FUN_003f36a4(int, int, int);
int FUN_003f391c(void);

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_002613f0. */
/* Supplied declaration required: FUN_003f36a4. */
/* Supplied declaration required: FUN_003f391c. */


unsigned int FUN_0035ac58(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  
  if ((param_1 != 0) && (temp_v1 = FUN_0018719c(0x4d7), temp_v1 != 0)) {
    temp_v1 = param_1 + 0x34;
    FUN_003f391c();
    temp_v2 = param_1 + 0x34;
    FUN_003f36a4(temp_v2,temp_v1,*(unsigned short *)(param_1 + 0x62));
    if (temp_v2 != 0) {
      temp_v0 = *(short *)(param_1 + 0x62);
      temp_v4 = 0;
      do {
        psVar4 = (short *)FUN_002613f0(temp_v4);
        if (*psVar4 == temp_v0) goto LAB_0035ad04;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
      temp_v4 = 0;
      do {
        psVar4 = (short *)FUN_002613f0(temp_v4);
        if (*psVar4 == 0) {
          puVar5 = (unsigned short *)FUN_002613f0(temp_v4);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
LAB_0035ad04:
          if (temp_v4 < 0) {
            return 0;
          }
          puVar5 = (unsigned short *)FUN_002613f0(temp_v4);
          *puVar5 = *(unsigned short *)(param_1 + 0x62);
          temp_v3 = FUN_002613f0(temp_v4);
          *(unsigned short *)(temp_v3 + 2) = *(unsigned short *)(param_1 + temp_v1 * 2 + 0x34);
          temp_v1 = FUN_002613f0(temp_v4);
          *(short *)(temp_v1 + 4) = (short)temp_v2;
          return 1;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x18);
    }
  }
  return 0;
}

} /* extern "C" */
