/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036b21c` (_code @ 0x36b21c, 0x404 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_00589170; /* 0x589170 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002e129c. */
/* Supplied declaration required: FUN_0034dc3c. */


unsigned int FUN_0036b21c(void)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  float temp_v6;
  int temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v2 = DAT_00589170;
  FUN_00157558(DAT_0059dbb4);
  temp_v7 = DAT_0059dbb4;
  temp_v3 = FUN_001692ac(1,0);
  piVar7 = (int *)(temp_v7 + 0x1258);
  temp_v4 = *piVar7;
  temp_v5 = piVar7[temp_v4 + 2];
  *piVar7 = temp_v4 + 1;
  piVar7[temp_v4 + 3] = temp_v3;
  if (*(char *)(temp_v7 + 0x1270) != '\0' || temp_v5 != temp_v3) {
    (**(romwright_code **)(temp_v7 + 0x1274))();
    *(unsigned char *)(temp_v7 + 0x1270) = 0;
  }
  temp_v6 = 0.27f;
  FUN_001879d0(DAT_0059dbb4);
  FUN_001835b4(2,0x2a,5000,(int)temp_v6,0,0xb);
  temp_v9 = 0.0f;
  temp_v6 = 0.26f;
  if (0.0f < *(float *)(temp_v2 + 0x1bc)) {
    temp_v8 = temp_v6;
    FUN_001879d0(DAT_0059dbb4);
    temp_v7 = (int)temp_v6;
    temp_v6 = temp_v8;
    FUN_001677c0();
    FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x1d8),*(unsigned int *)(temp_v2 + 0x1dc),
                 *(int *)(temp_v2 + 0x1b4) + temp_v7,*(unsigned int *)(temp_v2 + 0x1b8),6);
    FUN_001677c0();
  }
  if (temp_v9 < *(float *)(temp_v2 + 500)) {
    temp_v8 = temp_v6;
    FUN_001879d0(DAT_0059dbb4);
    temp_v7 = (int)temp_v6;
    temp_v6 = temp_v8;
    FUN_001677c0();
    FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x210),*(unsigned int *)(temp_v2 + 0x214),
                 *(int *)(temp_v2 + 0x1ec) + temp_v7,*(unsigned int *)(temp_v2 + 0x1f0),6);
    FUN_001677c0();
  }
  FUN_0034dc3c(temp_v2 + 0x9c);
  FUN_0034dc3c(temp_v2 + 0xd4);
  if (temp_v9 < *(float *)(temp_v2 + 0x14c)) {
    temp_v8 = temp_v6;
    FUN_001879d0(DAT_0059dbb4);
    temp_v7 = (int)temp_v6;
    temp_v6 = temp_v8;
    FUN_001677c0();
    FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x168),*(unsigned int *)(temp_v2 + 0x16c),
                 *(int *)(temp_v2 + 0x144) + temp_v7,*(unsigned int *)(temp_v2 + 0x148),0xb);
    FUN_001677c0();
  }
  if (temp_v9 < *(float *)(temp_v2 + 0x114)) {
    temp_v8 = temp_v6;
    FUN_001879d0(DAT_0059dbb4);
    temp_v7 = (int)temp_v6;
    temp_v6 = temp_v8;
    FUN_001677c0();
    FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x130),*(unsigned int *)(temp_v2 + 0x134),
                 *(int *)(temp_v2 + 0x10c) + temp_v7,*(unsigned int *)(temp_v2 + 0x110),0x10);
    FUN_001677c0();
  }
  if (temp_v9 < *(float *)(temp_v2 + 0x184)) {
    temp_v8 = temp_v6;
    FUN_001879d0(DAT_0059dbb4);
    temp_v7 = (int)temp_v6;
    temp_v6 = temp_v8;
    FUN_001677c0();
    FUN_001835b4(2,*(unsigned int *)(temp_v2 + 0x1a0),*(unsigned int *)(temp_v2 + 0x1a4),
                 *(int *)(temp_v2 + 0x17c) + temp_v7,*(unsigned int *)(temp_v2 + 0x180),0x10);
    FUN_001677c0();
  }
  temp_v7 = FUN_001834a4(0x2a,3);
  temp_v0 = **(short **)(temp_v7 + 0xc);
  temp_v1 = (*(short **)(temp_v7 + 0xc))[1];
  if (temp_v9 < *(float *)(temp_v2 + 0x22c)) {
    FUN_001879d0(DAT_0059dbb4);
    FUN_001677c0();
    temp_v7 = DAT_0059dbb4;
    temp_v3 = FUN_00169294(6,1,0);
    piVar7 = (int *)(temp_v7 + 0x12b8);
    temp_v4 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v3;
    if (*(char *)(temp_v7 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v7 + 0x12d4))();
      *(unsigned char *)(temp_v7 + 0x12d0) = 0;
    }
    FUN_002e129c(2,*(unsigned int *)(temp_v2 + 0x248),*(unsigned int *)(temp_v2 + 0x24c),
                 *(int *)(temp_v2 + 0x224) + (int)temp_v6,*(unsigned int *)(temp_v2 + 0x228),(int)temp_v0,
                 (int)temp_v1,0x10);
    temp_v2 = DAT_0059dbb4;
    temp_v7 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v2 + 0x12b8);
    temp_v3 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v7;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v7) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    FUN_001677c0();
  }
  FUN_001677c0();
  temp_v2 = DAT_0059dbb4;
  piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v7 = *piVar7;
  temp_v3 = piVar7[temp_v7 + 2];
  *piVar7 = temp_v7 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar7[temp_v7 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return 0;
}
