/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041c1d4` (_code @ 0x41c1d4, 0x270 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */


void FUN_0041c1d4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float afStack_70 [20];
  
  temp_v5 = DAT_0059dbb4;
  temp_v2 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v5 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v2;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v4 != temp_v2) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  FUN_001677c0();
  FUN_00183bb0();
  FUN_001834a4(0x2b,*(unsigned int *)(param_1 + 0xc));
  FUN_00164b5c(2,0x2b,*(unsigned int *)(param_1 + 0xc),0,0,0xd3);
  temp_v5 = 0;
  do {
    temp_v2 = FUN_001834a4(0x2b,temp_v5 + 0x62);
    temp_v0 = *(short *)(temp_v2 + 8);
    temp_v9 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    afStack_70[temp_v5 * 2] = temp_v9;
    temp_v1 = *(short *)(temp_v2 + 10);
    temp_v9 = (float)VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    afStack_70[temp_v5 * 2 + 1] = temp_v9;
    FUN_001835b4(2,0x2b,0x5f,(int)temp_v0,(int)temp_v1,0xd3);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 9);
  temp_v2 = (*(int *)(param_1 + 0x10) + 1) % 4;
  *(int *)(param_1 + 0x10) = temp_v2;
  temp_v5 = *(int *)(param_1 + 0x14);
  if (temp_v2 < 1) {
    temp_v5 = temp_v5 + 1;
    *(int *)(param_1 + 0x14) = temp_v5;
  }
  temp_v5 = temp_v5 % 8;
  *(int *)(param_1 + 0x14) = temp_v5;
  temp_v6 = (temp_v5 + 4U) & 7;
  temp_v7 = (temp_v5 + 1U) & 7;
  temp_v8 = (temp_v6 + 1) & 7;
  FUN_001835b4(2,0x2b,0x61,(int)afStack_70[temp_v5 * 2],(int)afStack_70[temp_v5 * 2 + 1],0xd3);
  FUN_001835b4(2,0x2b,0x60,(int)afStack_70[temp_v7 * 2],(int)afStack_70[temp_v7 * 2 + 1],0xd3);
  FUN_001835b4(2,0x2b,0x61,(int)afStack_70[temp_v6 * 2],(int)afStack_70[temp_v6 * 2 + 1],0xd3);
  FUN_001835b4(2,0x2b,0x60,(int)afStack_70[temp_v8 * 2],(int)afStack_70[temp_v8 * 2 + 1],0xd3);
  temp_v5 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 - 1;
  if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v2 + 1]) {
    (**(romwright_code **)(temp_v5 + 0x1274))();
    *(unsigned char *)(temp_v5 + 0x1270) = 0;
  }
  FUN_001677c0();
  return;
}
