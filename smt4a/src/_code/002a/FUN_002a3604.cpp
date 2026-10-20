/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3604` (_code @ 0x2a3604, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164b5c(int, int, int, int, int, int);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_0018291c(int *, int *, int *, int *, int, int);
int FUN_001835b4(int, int, int, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_0018291c. */
/* Supplied declaration required: FUN_001835b4. */


int FUN_002a3604(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  
  temp_v4 = *(int *)(param_1 + 4);
  temp_v0 = 0;
  if (temp_v4 != 0) {
    temp_v0 = *(int *)(temp_v4 + 8);
  }
  if (temp_v4 != 0 && temp_v0 != 0) {
    FUN_00157558(DAT_0059dbb4);
    temp_v0 = DAT_0059dbb4;
    temp_v1 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    if (*(int *)(temp_v4 + 0xc) != 1) {
      temp_v17 = 0x3f800000;
      temp_v18 = 0x3f800000;
      temp_v19 = 0x3f800000;
      temp_v20 = 0x3f800000;
      temp_v13 = 0x3f800000;
      temp_v14 = 0x3f800000;
      temp_v15 = 0x3f800000;
      temp_v16 = 0x3f800000;
      temp_v9 = 0x3f800000;
      temp_v10 = 0x3f800000;
      temp_v11 = 0x3f800000;
      temp_v12 = 0x3f800000;
      temp_v5 = 0x3f800000;
      temp_v6 = 0x3f800000;
      temp_v7 = 0x3f800000;
      temp_v8 = 0x3f800000;
      FUN_0018291c(&temp_v5,&temp_v9,&temp_v13,&temp_v17,0,1);
      FUN_001835b4(2,9,0,0,0,1);
    }
    else {
      FUN_00164b5c(2,9,0,0,0,1);
    }
    temp_v0 = DAT_0059dbb4;
    piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v4 = *piVar5;
    temp_v1 = piVar5[temp_v4 + 2];
    *piVar5 = temp_v4 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
    FUN_0016c560(DAT_0059dbb4);
    FUN_0016c410(DAT_0059dbb4);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
