/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dca5c` (_code @ 0x1dca5c, 0x200 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002864d8. */
extern int FUN_002865c0(unsigned int);
/* Supplied declaration required: FUN_002c08f0. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


unsigned int FUN_001dca5c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_002c08f0();
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002865c0(6);
  piVar5 = (int *)(temp_v0 + 0x126c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1288))();
    *(unsigned char *)(temp_v0 + 0x1284) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v0 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5da8(6,1,0);
  piVar5 = (int *)(temp_v0 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  FUN_002864d8(3);
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x126c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1284) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1288))();
    *(unsigned char *)(temp_v0 + 0x1284) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  FUN_002c39a4(DAT_0044ea00);
  return 0;
}
