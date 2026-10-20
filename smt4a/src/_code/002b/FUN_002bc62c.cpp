/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc62c` (_code @ 0x2bc62c, 0x494 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(...);
int FUN_0019e3d0(unsigned int);
int FUN_001a1ea8(unsigned int);
int FUN_002c0fc4(void);
int FUN_003578a0(void);
int FUN_00377c60(void);
int FUN_00379a48(void);
int FUN_003a3400(void);
int FUN_004837ac(int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int DAT_00580238; /* 0x580238 */
extern int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005f1bc8; /* 0x5f1bc8 */
extern int DAT_005f1bd0; /* 0x5f1bd0 */
extern int DAT_005f1c00; /* 0x5f1c00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern unsigned int FUN_00153f64(unsigned int, unsigned int);
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a1ea8. */
/* Supplied declaration required: FUN_002c0fc4. */
/* Supplied declaration required: FUN_003578a0. */
/* Supplied declaration required: FUN_00377c60. */
/* Supplied declaration required: FUN_00379a48. */
/* Supplied declaration required: FUN_003a3400. */
/* Supplied declaration required: FUN_004837ac. */


unsigned int FUN_002bc62c(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = DAT_00580238;
  if (*(int *)(DAT_00580238 + 0xc) < 0xd) {
    return 0;
  }
  if (*(int *)(DAT_00580238 + 0xc) >= 0x70) {
    return 0;
  }
  FUN_004837ac(DAT_00580238 + 0xf4);
  temp_v3 = DAT_0059dbb4;
  if (DAT_005f1bc8 != 0) {
    temp_v0 = FUN_001692ac(5,1);
    piVar7 = (int *)(temp_v3 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    FUN_0016c4b8(DAT_0059dbb4,0);
    FUN_002c0fc4();
    temp_v3 = DAT_0059dbb4;
    piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
  }
  temp_v3 = DAT_0059dbb4;
  if (DAT_005f1c00 != 0) {
    temp_v0 = FUN_001692ac(5,0);
    piVar7 = (int *)(temp_v3 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    FUN_0016c4b8(DAT_0059dbb4,0);
    FUN_00377c60();
    temp_v3 = DAT_0059dbb4;
    piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
  }
  temp_v3 = DAT_00580238;
  if (*(char *)(temp_v1 + 0xb) != '\0') {
    temp_v0 = *(int *)(DAT_00580238 + 0x38);
    temp_v1 = temp_v0 + 1;
    *(int *)(DAT_00580238 + 0x38) = temp_v1;
    if (temp_v1 >= 0x1f) {
      temp_v1 = temp_v0 - 0x1d;
      *(int *)(temp_v3 + 0x38) = temp_v1;
    }
    temp_v6 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v6 * 2184.5f,3);
    FUN_001a1ea8(temp_v7 & 0xffff);
    temp_v1 = DAT_0059dbb4;
    temp_v0 = FUN_001692ac(5,0);
    piVar7 = (int *)(temp_v1 + 0x1258);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    temp_v1 = *(int *)(temp_v3 + 0xe4);
    if (*(char *)(temp_v3 + 0xe1) != '\0') {
      if (temp_v1 < 0xd8) {
        temp_v1 = temp_v1 + 0x20;
        *(int *)(temp_v3 + 0xe4) = temp_v1;
      }
      if (temp_v1 >= 0xd9) {
        temp_v1 = 0xd8;
      }
      temp_v6 = *(float *)(temp_v3 + 0xe8);
      *(int *)(temp_v3 + 0xe4) = temp_v1;
      if ((int)temp_v6 < 0x42820000) {
        temp_v6 = temp_v6 + 5.0f;
        *(float *)(temp_v3 + 0xe8) = temp_v6;
      }
      if ((int)temp_v6 >= 0x42820001) {
        temp_v6 = 65.0f;
      }
    }
    else {
      if (temp_v1 >= 0x39) {
        temp_v1 = temp_v1 - 0x20;
        *(int *)(temp_v3 + 0xe4) = temp_v1;
        if (temp_v1 < 0x39) {
          temp_v1 = 0x38;
        }
      }
      else {
        temp_v1 = 0x38;
      }
      temp_v6 = *(float *)(temp_v3 + 0xe8);
      *(int *)(temp_v3 + 0xe4) = temp_v1;
      if ((int)temp_v6 >= 0x42200001) {
        temp_v6 = temp_v6 - 5.0f;
        *(float *)(temp_v3 + 0xe8) = temp_v6;
      }
      if ((int)temp_v6 < 0x42200001) {
        temp_v6 = 40.0f;
      }
    }
    *(float *)(temp_v3 + 0xe8) = temp_v6;
    temp_v7 = *(unsigned int *)(temp_v3 + 0xe4);
    temp_v2 = FUN_00153f64(8,2);
    FUN_0016c4b8(DAT_0059dbb4,temp_v2);
    temp_v1 = DAT_0059dbb4;
    temp_v3 = FUN_00169294(6,7,0);
    piVar7 = (int *)(temp_v1 + 0x12b8);
    temp_v0 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v3;
    if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v0 != temp_v3) {
      (**(romwright_code **)(temp_v1 + 0x12d4))();
      *(unsigned char *)(temp_v1 + 0x12d0) = 0;
    }
    FUN_0019e3d0(temp_v7 | 0xffffff00);
    temp_v1 = DAT_0059dbb4;
    piVar7 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v3 = *piVar7;
    temp_v0 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v0 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
  }
  if (DAT_005f1bd0 != 1) {
    if (DAT_005f1bd0 != 2) {
      if (DAT_005f1bd0 == 3) {
        FUN_003a3400();
      }
    }
    else {
      FUN_003578a0();
    }
  }
  else {
    FUN_00379a48();
  }
  return 0;
}

} /* extern "C" */
