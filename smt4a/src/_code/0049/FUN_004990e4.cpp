/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004990e4` (_code @ 0x4990e4, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164b5c(int, int, int, int, int);
int FUN_0016c410(...);
int FUN_0016c560(...);
int FUN_001834a4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int FUN_003fabfc(unsigned int, int, float [3], unsigned int, int);
int FUN_00499b58(unsigned int *);
int FUN_004ff364(unsigned int, int);
int VectorSignedToFloat(...);
int aeabi_idivmod(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
extern int FUN_00267bd0(void);
extern int FUN_00284f50(void);
extern int FUN_00284f70(void);
/* Supplied declaration required: FUN_003fabfc. */
/* Supplied declaration required: FUN_00499b58. */
/* Supplied declaration required: FUN_004ff364. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_004990e4(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar6;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8 [3];
  
  FUN_00157558(DAT_0059dbb4);
  FUN_00183bb0();
  temp_v1 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v1 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v0;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v4 != temp_v0) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  if (param_1[5] != 1) {
    FUN_00499b58(param_1);
    temp_v1 = FUN_00267bd0();
    if (temp_v1 != 0) {
      temp_v1 = FUN_00284f50();
      temp_v0 = FUN_00284f70();
      temp_v8[1] = 3.43318e-43f;
      temp_v8[2] = 3.44719e-43f;
      temp_v6 = *(char *)((int)param_1 + 0x21) != '\0';
      if (temp_v6) {
        temp_v3 = FUN_001834a4(0x20,0xf5);
        temp_v8[0] = 1.82169e-44f;
        FUN_00164b5c(2,0x20,6,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0);
      }
      if ((char)param_1[8] != '\0') {
        temp_v3 = FUN_001834a4(0x20,temp_v8[temp_v6 + 1]);
        temp_v8[0] = 1.82169e-44f;
        FUN_00164b5c(2,0x20,7,*(short *)(temp_v3 + 8) + temp_v1,*(short *)(temp_v3 + 10) + temp_v0);
      }
    }
    temp_v6 = (*param_1 & 0x2000) != 0;
    temp_v2 = 0;
    if (temp_v6) {
      temp_v2 = param_1[1];
    }
    if ((temp_v6 && 0 < (int)temp_v2) && ((int)temp_v2 < 0x14)) {
      temp_v7 = 0.33f;
      FUN_001879d0(DAT_0059dbb4);
      temp_v7 = (float)VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8[1] = 46.0f;
      temp_v8[2] = 0.0f;
      param_1[0x5816] = param_1[0x5816] + 2;
      temp_v8[0] = temp_v7;
      FUN_004ff364(param_1[0x5815],0);
      aeabi_idivmod(param_1[0x5816],(int)temp_v7);
      param_1[0x5816] = temp_v5;
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_003fabfc(param_1[0x5815],0,temp_v8,0xffffffff,0);
    }
  }
  temp_v1 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v0 = *piVar6;
  temp_v3 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v1 + 0x1274))();
    *(unsigned char *)(temp_v1 + 0x1270) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return;
}

} /* extern "C" */
