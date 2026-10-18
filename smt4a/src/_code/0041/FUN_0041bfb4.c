/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041bfb4` (_code @ 0x41bfb4, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834e4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0025cba0. */


void FUN_0041bfb4(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
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
  FUN_001677c0();
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0x3f800000;
  FUN_001834e4(&temp_v4);
  if (param_2 != 0) {
    FUN_0025cba0(0,0,400,0xf0,0xf5);
  }
  else {
    FUN_0025cba0(0,0,0x140,0xf0,0xd3);
  }
  temp_v0 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_001677c0();
  FUN_00183bb0();
  return;
}
