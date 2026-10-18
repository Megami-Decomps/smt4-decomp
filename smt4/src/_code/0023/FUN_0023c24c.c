/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c24c` (_code @ 0x23c24c, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023ea20. */
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002d582c. */


void FUN_0023c24c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar6;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  do {
    temp_v0 = param_1 + temp_v3 * 0x28;
    piVar6 = (int *)(temp_v0 + 400);
    if (((*(unsigned int *)(temp_v0 + 0x1b4) & 8) == 0) && (*piVar6 != 0)) {
      temp_v1 = *(int *)(temp_v0 + 0x194);
      temp_v4 = temp_v1 == param_2;
      if (temp_v4) {
        temp_v1 = *(int *)(temp_v0 + 0x198);
      }
      if (temp_v4 && temp_v1 == param_3) {
        FUN_0023ea20(*piVar6,0);
        FUN_002d582c(*piVar6);
        puVar2 = (unsigned int *)*piVar6;
        *puVar2 = *puVar2 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 1;
        *(unsigned int *)(temp_v0 + 0x1b4) = *(unsigned int *)(temp_v0 + 0x1b4) | 8;
        temp_v1 = FUN_002939f4();
        temp_v0 = *(int *)(temp_v1 + 0x1e98) + *(int *)(temp_v0 + 0x1ac) * 0x114;
        temp_v2 = *(unsigned int *)(temp_v0 + 0x50);
        if ((temp_v2 & 0x10) != 0) {
          temp_v2 = *(unsigned int *)(temp_v0 + 0xf8) & 2;
        }
        else {
          temp_v2 = temp_v2 & 0x80000;
        }
        if (temp_v2 == 0) {
          puVar2 = (unsigned int *)*piVar6;
          *puVar2 = *puVar2 | 2;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x32);
  return;
}
