/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004097b4` (_code @ 0x4097b4, 0x410 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164034(unsigned int);
int FUN_0016c4b8(...);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164034. */
extern unsigned int asdGxPresetsGetByKind(unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned char);
/* Supplied declaration required: FUN_0016c4b8. */
extern unsigned int asdGxPresetsGetHeightByKind(unsigned int);
extern int FUN_00387580(unsigned int);
extern int FUN_003a48dc(unsigned int, unsigned int, unsigned int);
extern int flagsPackFourBooleans(unsigned char);
extern int packThreeFields(unsigned int);


void FUN_004097b4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
  temp_v0 = *(unsigned int *)(param_1 + 0x11f0);
  temp_v1 = asdGxPresetsGetHeightByKind(*(unsigned int *)(param_1 + 0x52c));
  VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = asdGxPresetsGetByKind(*(unsigned int *)(param_1 + 0x52c));
  VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_4 & 4) != 0) {
    temp_v5 = 2;
  }
  FUN_0016c4b8(param_1,0);
  temp_v2 = FUN_001692ac(1,(param_4 & 2) != 0);
  piVar6 = (int *)(param_1 + 0x1258);
  temp_v4 = *piVar6;
  temp_v3 = piVar6[temp_v4 + 2];
  *piVar6 = temp_v4 + 1;
  piVar6[temp_v4 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1270) != '\0' || temp_v3 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1274))();
    *(unsigned char *)(param_1 + 0x1270) = 0;
  }
  temp_v2 = FUN_00387580(1);
  piVar7 = (int *)(param_1 + 0x1278);
  temp_v3 = *piVar7;
  temp_v4 = piVar7[temp_v3 + 2];
  *piVar7 = temp_v3 + 1;
  piVar7[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1290) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1294))();
    *(unsigned char *)(param_1 + 0x1290) = 0;
  }
  temp_v2 = flagsPackFourBooleans((param_4 & 1) != 0);
  piVar8 = (int *)(param_1 + 0x1298);
  temp_v3 = *piVar8;
  temp_v4 = piVar8[temp_v3 + 2];
  *piVar8 = temp_v3 + 1;
  piVar8[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x12b0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x12b4))();
    *(unsigned char *)(param_1 + 0x12b0) = 0;
  }
  temp_v2 = packNibblesAndByte(1,0);
  piVar9 = (int *)(param_1 + 0x12b8);
  temp_v3 = *piVar9;
  temp_v4 = piVar9[temp_v3 + 2];
  *piVar9 = temp_v3 + 1;
  piVar9[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x12d0) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x12d4))();
    *(unsigned char *)(param_1 + 0x12d0) = 0;
  }
  temp_v2 = FUN_003a48dc(1,param_3,0xff);
  piVar10 = (int *)(param_1 + 0x1218);
  temp_v3 = *piVar10;
  temp_v4 = piVar10[temp_v3 + 2];
  *piVar10 = temp_v3 + 1;
  piVar10[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1230) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1234))();
    *(unsigned char *)(param_1 + 0x1230) = 0;
  }
  temp_v2 = packThreeFields(temp_v5);
  piVar12 = (int *)(param_1 + 0x1238);
  temp_v3 = *piVar12;
  temp_v4 = piVar12[temp_v3 + 2];
  *piVar12 = temp_v3 + 1;
  piVar12[temp_v3 + 3] = temp_v2;
  if (*(char *)(param_1 + 0x1250) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(param_1 + 0x1254))();
    *(unsigned char *)(param_1 + 0x1250) = 0;
  }
  FUN_00164034(param_2);
  temp_v2 = *piVar12;
  temp_v3 = piVar12[temp_v2 + 2];
  *piVar12 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1250) != '\0' || temp_v3 != piVar12[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1254))(piVar12[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1250) = 0;
  }
  temp_v2 = *piVar10;
  temp_v3 = piVar10[temp_v2 + 2];
  *piVar10 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1230) != '\0' || temp_v3 != piVar10[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1234))(piVar10[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1230) = 0;
  }
  temp_v2 = *piVar9;
  temp_v3 = piVar9[temp_v2 + 2];
  *piVar9 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x12d0) != '\0' || temp_v3 != piVar9[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x12d4))(piVar9[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x12d0) = 0;
  }
  temp_v2 = *piVar8;
  temp_v3 = piVar8[temp_v2 + 2];
  *piVar8 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x12b0) != '\0' || temp_v3 != piVar8[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x12b4))(piVar8[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x12b0) = 0;
  }
  temp_v2 = *piVar7;
  temp_v3 = piVar7[temp_v2 + 2];
  *piVar7 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1290) != '\0' || temp_v3 != piVar7[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1294))(piVar7[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1290) = 0;
  }
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(param_1 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(param_1 + 0x1274))(piVar6[temp_v2 + 1]);
    *(unsigned char *)(param_1 + 0x1270) = 0;
  }
  FUN_0016c4b8(param_1,temp_v0);
  return;
}

} /* extern "C" */
