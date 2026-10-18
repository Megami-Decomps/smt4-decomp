/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7f74` (_code @ 0x2d7f74, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0044ea00; /* 0x44ea00 */
extern signed char DAT_0044ea80; /* 0x44ea80 */
extern int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern int DAT_0044eaac; /* 0x44eaac */

/* Supplied declaration required: FUN_0024a878. */
/* Supplied declaration required: FUN_0024c350. */
/* Supplied declaration required: FUN_0028186c. */
/* Supplied declaration required: FUN_002880a8. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c4f8c. */
extern unsigned int FUN_002c501c(void);
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_002d7f74(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x11ec);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = 0;
  if (*(char *)(temp_v0 + 0x1204) != '\0' || temp_v3 != 0) {
    (**(romwright_code **)(temp_v0 + 0x1208))();
    *(unsigned char *)(temp_v0 + 0x1204) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v2 = FUN_002c5d80(1,0);
  piVar6 = (int *)(temp_v0 + 0x124c);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = DAT_0044ea00;
  temp_v3 = *(int *)(DAT_0044ea00 + 0x12ac);
  piVar6 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v2 = *(int *)(DAT_0044ea00 + temp_v3 * 4 + 0x12b4);
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  if (DAT_0044ea80 != '\0') {
    FUN_002880a8(DAT_0044ea00);
  }
  else {
    temp_v1 = FUN_002c501c();
    FUN_002c4f8c(DAT_0044ea00,temp_v1);
  }
  FUN_0024a878(1);
  if (DAT_0044eaa0 != 0) {
    FUN_0024c350();
  }
  if (DAT_0044ea90 != 0) {
    FUN_0028186c();
  }
  if (DAT_0044eaac != 0) {
    FUN_0024c350();
  }
  FUN_002c18e4(DAT_0044ea00);
  FUN_002c198c(DAT_0044ea00);
  temp_v0 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x11ec);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1204) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1208))();
    *(unsigned char *)(temp_v0 + 0x1204) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v0 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  return;
}
