/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227068` (_code @ 0x227068, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164b5c(int, int, int, int, int, int);
int FUN_001677c0(void);
int FUN_0016c410(int);
int FUN_0016c560(int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int FUN_002adba8(int);
int FUN_002e6354(int [5], int);

typedef int romwright_code(...);
/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_00227068(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  int aiStack_68 [5];
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  
  FUN_00157558(DAT_0059dbb4);
  FUN_00183bb0();
  temp_v2 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v2 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v0;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v0) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_001677c0();
  FUN_002e6354(aiStack_68,0x48);
  aiStack_68[1] = FUN_002adba8(0);
  aiStack_68[1] = aiStack_68[1] * 1000;
  temp_v7 = FUN_002adba8(1);
  aiStack_68[3] = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(2);
  temp_v8 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(3);
  temp_v9 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(4);
  temp_v10 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(5);
  temp_v11 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(6);
  temp_v12 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(7);
  temp_v13 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(8);
  temp_v6 = 0.35f;
  temp_v14 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v5 = temp_v6;
  FUN_001879d0(DAT_0059dbb4);
  FUN_00164b5c(2,0x2e,aiStack_68[(unsigned int)*(unsigned char *)(param_1 + 0x22) * 2],(int)temp_v6,0,0xb);
  temp_v1 = FUN_002adba8(*(unsigned char *)(param_1 + 0x22));
  temp_v2 = FUN_0018206c(0x2e,temp_v1);
  if (temp_v2 != 0) {
    FUN_001879d0(DAT_0059dbb4);
    FUN_001835b4(2,0x2e,aiStack_68[(unsigned int)*(unsigned char *)(param_1 + 0x22) * 2 + 1],(int)temp_v5,0,0xc);
  }
  temp_v2 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v0 = *piVar6;
  temp_v3 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return;
}

} /* extern "C" */
