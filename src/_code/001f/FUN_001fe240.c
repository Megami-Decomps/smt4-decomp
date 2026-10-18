/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fe240` (_code @ 0x1fe240, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0028186c. */
extern int FUN_002865c0(unsigned int);
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


unsigned int FUN_001fe240(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = DAT_0044ea00;
  temp_v4 = *param_1;
  if (*(int *)(temp_v4 + 0x10) - 1U < 0x62) {
    temp_v0 = FUN_002865c0(6);
    piVar4 = (int *)(temp_v3 + 0x126c);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1284) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1288))();
      *(unsigned char *)(temp_v3 + 0x1284) = 0;
    }
    temp_v3 = DAT_0044ea00;
    temp_v0 = FUN_002c5d80(1,0);
    piVar4 = (int *)(temp_v3 + 0x124c);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = DAT_0044ea00;
    temp_v0 = FUN_002c5da8(6,1,0);
    piVar4 = (int *)(temp_v3 + 0x12ac);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v3 = 0;
    do {
      temp_v0 = temp_v4 + temp_v3 * 0xc;
      if (*(char *)(temp_v0 + 0x56c) != '\0') {
        FUN_0028186c(*(unsigned int *)(temp_v0 + 0x568));
      }
      temp_v0 = DAT_0044ea00;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    piVar4 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v3 = *piVar4;
    temp_v4 = piVar4[temp_v3 + 2];
    *piVar4 = temp_v3 - 1;
    if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v4 != piVar4[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x12c8))();
      *(unsigned char *)(temp_v0 + 0x12c4) = 0;
    }
    temp_v3 = DAT_0044ea00;
    piVar4 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v4 = *piVar4;
    temp_v0 = piVar4[temp_v4 + 2];
    *piVar4 = temp_v4 - 1;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v0 != piVar4[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = DAT_0044ea00;
    piVar4 = (int *)(DAT_0044ea00 + 0x126c);
    temp_v4 = *piVar4;
    temp_v0 = piVar4[temp_v4 + 2];
    *piVar4 = temp_v4 - 1;
    if (*(char *)(temp_v3 + 0x1284) != '\0' || temp_v0 != piVar4[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1288))();
      *(unsigned char *)(temp_v3 + 0x1284) = 0;
    }
  }
  return 0;
}
