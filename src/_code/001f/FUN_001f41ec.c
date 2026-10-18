/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f41ec` (_code @ 0x1f41ec, 0x288 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0043ded0; /* 0x43ded0 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002857f4. */
extern int FUN_00286834(unsigned int);
extern int FUN_002b756c(unsigned int);
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


unsigned int FUN_001f41ec(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = FUN_002c0ac8();
  temp_v4 = DAT_0044ea00;
  temp_v1 = FUN_002c5f7c(1,0);
  piVar5 = (int *)(temp_v4 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = DAT_0044ea00;
  temp_v1 = FUN_00286834(6);
  piVar5 = (int *)(temp_v4 + 0x126c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1284) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1288))();
    *(unsigned char *)(temp_v4 + 0x1284) = 0;
  }
  temp_v4 = DAT_0044ea00;
  temp_v1 = FUN_002c5fa4(6,7,0);
  piVar5 = (int *)(temp_v4 + 0x12ac);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  temp_v4 = 0;
  if (temp_v4 < *(int *)(temp_v0 + 0x2c)) {
    do {
      temp_v1 = temp_v0 + temp_v4 * 4;
      if (*(char *)(DAT_0043ded0 + 0x5c) != '\0') {
        temp_v2 = FUN_002bf41c(*(unsigned int *)(temp_v1 + 4));
        if (temp_v2 != 0) {
          FUN_002857f4(*(unsigned int *)(temp_v1 + 4),(int)*(float *)(temp_v0 + 0x60),
                       (int)*(float *)(temp_v0 + 100));
        }
      }
      else {
        temp_v2 = FUN_002bf41c(*(unsigned int *)(temp_v1 + 4));
        if ((temp_v2 != 0) && (temp_v2 = FUN_002b756c(*(unsigned int *)(temp_v1 + 4)), temp_v2 == 4)) {
          FUN_002857f4(*(unsigned int *)(temp_v1 + 4),(int)*(float *)(temp_v0 + 0x60),
                       (int)*(float *)(temp_v0 + 100));
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(temp_v0 + 0x2c));
  }
  temp_v4 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  temp_v4 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x126c);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1284) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1288))();
    *(unsigned char *)(temp_v4 + 0x1284) = 0;
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return 0;
}
