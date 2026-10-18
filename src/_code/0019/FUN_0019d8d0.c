/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019d8d0` (_code @ 0x19d8d0, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002c0b1c. */
/* Supplied declaration required: FUN_002c1d3c. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


void FUN_0019d8d0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  
  temp_v3 = *param_1;
  temp_v0 = *(unsigned char *)((int)param_1 + 3);
  FUN_002c1d3c(DAT_0044ea00,0);
  temp_v1 = DAT_0044ea00;
  temp_v2 = FUN_002c5f7c(1,0);
  piVar7 = (int *)(temp_v1 + 0x124c);
  temp_v4 = *piVar7;
  temp_v5 = piVar7[temp_v4 + 2];
  *piVar7 = temp_v4 + 1;
  piVar7[temp_v4 + 3] = temp_v2;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != temp_v2) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  FUN_002c0b1c((temp_v3 << 0x18) | (((temp_v3 >> 8) & 0xff) << 0x10) | (((temp_v3 >> 0x10) & 0xff) << 8) |
               (unsigned int)temp_v0);
  temp_v1 = DAT_0044ea00;
  piVar7 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v2 = *piVar7;
  temp_v4 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 - 1;
  if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1268))();
    *(unsigned char *)(temp_v1 + 0x1264) = 0;
  }
  return;
}
