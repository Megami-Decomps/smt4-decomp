/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00315d34` (_code @ 0x315d34, 0x3b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int);
int FUN_00157558(int);
int FUN_00162790(int, unsigned int, unsigned char [144]);
int FUN_0016c4b8(int, int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_002371b0(void);
int FUN_00379664(int, int);
int FUN_003849cc(int, int, int, unsigned char [144], unsigned int);
int FUN_0038594c(...);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB8; /* 0xb8: local_b8 */
} void_stack;

extern int DAT_0058103c; /* 0x58103c */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned long long FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_002371b0. */
extern int FUN_00327638(int);
/* Supplied declaration required: FUN_00379664. */
/* Supplied declaration required: FUN_003849cc. */
/* Supplied declaration required: FUN_0038594c. */


unsigned int FUN_00315d34(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned long long temp_v8;
  long long temp_v9;
  unsigned long long temp_v10;
  unsigned char temp_v11 [144];
  
  temp_v2 = DAT_0059dbb4;
  temp_v8 = 0;
  if (*(int *)(DAT_0058103c + 0x3c) != 0) {
    temp_v6 = *(unsigned int *)(DAT_0058103c + 0x40);
    temp_v1 = FUN_001692ac(5,1);
    piVar7 = (int *)(temp_v2 + 0x1258);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    FUN_00157558(DAT_0059dbb4);
    FUN_0016c4b8(DAT_0059dbb4,0);
    FUN_0014e314(temp_v6);
    FUN_002371b0();
    temp_v2 = DAT_0059dbb4;
    piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar7;
    temp_v3 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  temp_v1 = DAT_0058103c;
  temp_v10 = FUN_001834a4(8,0x10b);
  temp_v2 = (int)((unsigned long long)temp_v10 >> 0x20);
  temp_v8 = temp_v8 & 0xffffffff;
  temp_v3 = (int)*(short *)(temp_v1 + 0xcce8);
  switch(*(short *)(temp_v1 + 0xcce8)) {
  case 0:
    return 0;
  case 1:
    temp_v0 = *(short *)(temp_v1 + 0xccea) + 1;
    temp_v3 = (int)temp_v0;
    *(short *)(temp_v1 + 0xccea) = temp_v0;
    temp_v2 = temp_v3 * 0x28;
    temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (unsigned long long)(unsigned int)(temp_v7 + -400.0f);
    if (temp_v3 >= 10) {
      temp_v3 = 2;
      *(unsigned short *)(temp_v1 + 0xcce8) = 2;
      *(unsigned short *)(temp_v1 + 0xccea) = 0;
    }
    break;
  case 2:
    temp_v3 = *(unsigned short *)(temp_v1 + 0xccea) + 1;
    *(short *)(temp_v1 + 0xccea) = (short)temp_v3;
    break;
  case 3:
    temp_v0 = *(short *)(temp_v1 + 0xccea) + 1;
    temp_v3 = (int)temp_v0;
    *(short *)(temp_v1 + 0xccea) = temp_v0;
    if (temp_v3 >= 0x32) {
      temp_v2 = (temp_v3 - 0x32) * 0x28;
      temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (unsigned long long)(unsigned int)-temp_v7;
    }
    if (temp_v3 >= 0x3d) {
      *(unsigned short *)(temp_v1 + 0xcce8) = 0;
      *(unsigned short *)(temp_v1 + 0xccea) = 0;
      return 0;
    }
    break;
  case 4:
    temp_v0 = *(short *)(temp_v1 + 0xccea) + 1;
    temp_v3 = (int)temp_v0;
    *(short *)(temp_v1 + 0xccea) = temp_v0;
    if (temp_v3 >= 10) {
      temp_v2 = (temp_v3 - 10) * 0x28;
      temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (unsigned long long)(unsigned int)-temp_v7;
    }
    if (temp_v3 >= 0x15) {
      *(unsigned short *)(temp_v1 + 0xcce8) = 0;
      *(unsigned short *)(temp_v1 + 0xccea) = 0;
      return 0;
    }
  }
  temp_v4 = 0;
  FUN_0038594c(temp_v3,temp_v2);
  temp_v7 = (float)temp_v8;
  if (0 < temp_v3) {
    do {
      temp_v2 = FUN_00327638(temp_v4);
      temp_v7 = (float)temp_v8;
      temp_v2 = (int)*(short *)(temp_v2 + 0x20);
      if (temp_v2 == -1) {
        return 0;
      }
      if (temp_v2 == *(short *)(temp_v1 + 0xccec)) break;
      temp_v4 = temp_v4 + 1;
      FUN_0038594c();
      temp_v7 = (float)temp_v8;
    } while (temp_v4 < temp_v2);
  }
  temp_v2 = (int)*(short *)(temp_v1 + 0xccec);
  if ((temp_v2 == 0x18) || (FUN_00379664(temp_v2,(int)*(short *)(temp_v1 + 0xccee)), temp_v2 != 0)) {
    temp_v2 = DAT_0059dbb4;
    temp_v3 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v2 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v3;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v5 != temp_v3) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    temp_v9 = (unsigned long long)(unsigned int)(int)temp_v7 << 0x20;
    temp_v2 = 0x107;
    do {
      FUN_001835b4(2,8,temp_v2,(int)((unsigned long long)temp_v9 >> 0x20),0,0xb);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x10b);
    FUN_003849cc((int)*(short *)(temp_v1 + 0xccec),(int)*(short *)(temp_v1 + 0xccee),0,temp_v11,
                 0xffffffff);
    VectorSignedToFloat((int)*(short *)((int)temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)((int)temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xffffffff,temp_v11);
    temp_v2 = DAT_0059dbb4;
    piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v1 = *piVar7;
    temp_v3 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
