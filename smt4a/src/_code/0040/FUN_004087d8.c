/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004087d8` (_code @ 0x4087d8, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168594. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_004087d8(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  FUN_001677c0();
  FUN_00183bb0();
  temp_v2 = DAT_0059dbb4;
  temp_v1 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v2 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_001677c0();
  FUN_001834a4(0x2b,0x56);
  temp_v2 = FUN_001834a4(0x2b,0x59);
  temp_v5 = 0.26f;
  FUN_001879d0(DAT_0059dbb4);
  FUN_00164b5c(2,0x2b,7,(int)temp_v5,0,0xf1);
  temp_v6 = 0.0f;
  temp_v0 = **(short **)(temp_v2 + 0xc);
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = param_1 + 0x28;
  }
  FUN_00168594(param_1,4);
  VectorSignedToFloat((int)temp_v5 + ((int)temp_v0 - (int)temp_v6) / 2 + (int)*(short *)(temp_v2 + 8),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(4,0xffffffff);
  temp_v2 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_001677c0();
  return;
}
