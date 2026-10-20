/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024f5ec` (_code @ 0x24f5ec, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023b724(unsigned int, int, int, int);
int FUN_002571e8(unsigned int);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c1b64(int, unsigned int);
int FUN_00343298(int, int *);
int FUN_00343778(int, unsigned int);
int FUN_00346f2c(unsigned int);
int FUN_00347198(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0023b724. */
/* Supplied declaration required: FUN_002571e8. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00343298. */
/* Supplied declaration required: FUN_00343778. */
/* Supplied declaration required: FUN_00346f2c. */
/* Supplied declaration required: FUN_00347198. */


void FUN_0024f5ec(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v5;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v6;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int temp_v7;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v8;
  
  FUN_002c1b64(DAT_0044ea00,param_1[5]);
  temp_v4 = param_1[6];
  uStack_54 = param_1[7];
  uStack_50 = param_1[8];
  uStack_48 = param_1[10];
  uStack_44 = param_1[0xb];
  uStack_40 = param_1[0xc];
  uStack_38 = param_1[0xe];
  uStack_34 = param_1[0xf];
  uStack_30 = param_1[0x10];
  uStack_28 = param_1[0x12];
  uStack_24 = param_1[0x13];
  uStack_20 = param_1[0x14];
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0x3f800000;
  FUN_00343298(DAT_0044ea00,&temp_v4);
  FUN_002571e8(param_2);
  temp_v3 = DAT_0044ea00;
  if ((*(unsigned short *)((int)param_1 + 0x12) & 0x100) != 0) {
    temp_v0 = FUN_002c5d80(5,0);
    piVar4 = (int *)(temp_v3 + 0x124c);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (!(*(char *)(temp_v3 + 0x1264) == '\0' && temp_v2 == temp_v0)) {
      (**(romwright_code **)(temp_v3 + 0x1268))(temp_v0);
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
  }
  else {
    temp_v0 = FUN_002c5d80(1,0);
    piVar4 = (int *)(temp_v3 + 0x124c);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (!(*(char *)(temp_v3 + 0x1264) == '\0' && temp_v2 == temp_v0)) {
      (**(romwright_code **)(temp_v3 + 0x1268))(temp_v0);
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
  }
  if (param_1[0x16] != 0) {
    FUN_00347198(*param_1);
    param_1[0x16] = 0;
  }
  FUN_00346f2c(*param_1);
  temp_v3 = 0;
  if (temp_v3 < *(short *)(param_1 + 2)) {
    do {
      FUN_00343778(DAT_0044ea00,param_1[1] + temp_v3 * 0x10);
      FUN_0023b724(*param_1,0,(int)*(short *)(param_1 + 3) * temp_v3 * 3,*(short *)(param_1 + 3) * 3);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(short *)(param_1 + 2));
  }
  FUN_002c18e4(DAT_0044ea00);
  FUN_002c198c(DAT_0044ea00);
  temp_v3 = DAT_0044ea00;
  piVar4 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar4;
  temp_v1 = piVar4[temp_v0 + 2];
  *piVar4 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  return;
}

} /* extern "C" */
