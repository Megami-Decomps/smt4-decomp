/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343364` (_code @ 0x343364, 0x410 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7638(unsigned int);
int FUN_002c1b64(...);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0023d450(unsigned char);
extern int FUN_002865c0(unsigned int);
/* Supplied declaration required: FUN_002b7638. */
extern unsigned int FUN_002c15ac(unsigned int);
extern unsigned int FUN_002c15d4(unsigned int);
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned char);
extern int packNibblesAndByte(unsigned int, unsigned int);
extern int FUN_00310578(unsigned int, unsigned int, unsigned int);
extern int FUN_0031b854(unsigned int);


void FUN_00343364(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  unsigned int temp_v5;
  int *piVar12;
  unsigned int in_fpscr;
  
  temp_v5 = 0;
  temp_v0 = *(unsigned int *)(param_1 + 0x11e4);
  temp_v1 = FUN_002c15ac(*(unsigned int *)(param_1 + 0x528));
  VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_002c15d4(*(unsigned int *)(param_1 + 0x528));
  VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_4 & 4) != 0) {
    temp_v5 = 2;
  }
  FUN_002c1b64(param_1,0);
  temp_v2 = FUN_002c5d80(1,(param_4 & 2) != 0);
  piVar6 = (int *)(param_1 + 0x124c);
  temp_v4 = *piVar6;
  temp_v3 = piVar6[temp_v4 + 2];
  *piVar6 = temp_v4 + 1;
  piVar6[temp_v4 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1264) != '\0' || temp_v3 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1268))();
    *(unsigned char *)(param_1 + 0x1264) = 0;
  }
  temp_v2 = FUN_002865c0(1);
  piVar7 = (int *)(param_1 + 0x126c);
  temp_v3 = *piVar7;
  temp_v4 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 + 1;
  piVar7[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1284) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1288))();
    *(unsigned char *)(param_1 + 0x1284) = 0;
  }
  temp_v2 = FUN_0023d450((param_4 & 1) != 0);
  piVar8 = (int *)(param_1 + 0x128c);
  temp_v3 = *piVar8;
  temp_v4 = piVar8[temp_v3 + 2];
  *piVar8 = temp_v3 + 1;
  piVar8[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x12a4) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x12a8))();
    *(unsigned char *)(param_1 + 0x12a4) = 0;
  }
  temp_v2 = packNibblesAndByte(1,0);
  piVar9 = (int *)(param_1 + 0x12ac);
  temp_v3 = *piVar9;
  temp_v4 = piVar9[temp_v3 + 2];
  *piVar9 = temp_v3 + 1;
  piVar9[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x12c4) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x12c8))();
    *(unsigned char *)(param_1 + 0x12c4) = 0;
  }
  temp_v2 = FUN_00310578(1,param_3,0xff);
  piVar10 = (int *)(param_1 + 0x120c);
  temp_v3 = *piVar10;
  temp_v4 = piVar10[temp_v3 + 2];
  *piVar10 = temp_v3 + 1;
  piVar10[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1224) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1228))();
    *(unsigned char *)(param_1 + 0x1224) = 0;
  }
  temp_v2 = FUN_0031b854(temp_v5);
  piVar12 = (int *)(param_1 + 0x122c);
  temp_v3 = *piVar12;
  temp_v4 = piVar12[temp_v3 + 2];
  *piVar12 = temp_v3 + 1;
  piVar12[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1244) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1248))();
    *(unsigned char *)(param_1 + 0x1244) = 0;
  }
  FUN_002b7638(param_2);
  temp_v2 = *piVar12;
  temp_v3 = piVar12[temp_v2 + 2];
  *piVar12 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1244) != '\0' || temp_v3 != piVar12[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1248))(piVar12[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1244) = 0;
  }
  temp_v2 = *piVar10;
  temp_v3 = piVar10[temp_v2 + 2];
  *piVar10 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1224) != '\0' || temp_v3 != piVar10[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1228))(piVar10[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1224) = 0;
  }
  temp_v2 = *piVar9;
  temp_v3 = piVar9[temp_v2 + 2];
  *piVar9 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x12c4) != '\0' || temp_v3 != piVar9[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x12c8))(piVar9[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x12c4) = 0;
  }
  temp_v2 = *piVar8;
  temp_v3 = piVar8[temp_v2 + 2];
  *piVar8 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x12a4) != '\0' || temp_v3 != piVar8[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x12a8))(piVar8[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x12a4) = 0;
  }
  temp_v2 = *piVar7;
  temp_v3 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1284) != '\0' || temp_v3 != piVar7[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1288))(piVar7[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1284) = 0;
  }
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1268))(piVar6[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1264) = 0;
  }
  FUN_002c1b64(param_1,temp_v0);
  return;
}

} /* extern "C" */
