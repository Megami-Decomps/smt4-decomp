/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126d14` (_code @ 0x126d14, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002af390. */
/* Supplied declaration required: FUN_002b5cf0. */
/* Supplied declaration required: FUN_002b7014. */
/* Supplied declaration required: FUN_002b703c. */
/* Supplied declaration required: FUN_002b7148. */


void FUN_00126d14(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v0 = param_1;
  FUN_002b7148();
  param_1 = param_1 + 0x138;
  FUN_002b5cf0(param_1,temp_v0);
  FUN_002af390(temp_v0,param_1);
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) = 0x210;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf02bb;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = 0;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf02bc;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7014();
  temp_v1 = 0xa0000002;
  uStack_1c = 0xb02b9;
  uStack_18 = 2;
  uStack_14 = 0xf0242;
  FUN_002adba8(&temp_v1,0x10,1);
  FUN_002b703c();
  temp_v0 = DAT_004729e0;
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) = 1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0111;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = 1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0110;
  DAT_004729e4 = DAT_004729e4 + 2;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4) = 0;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0x100e0;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7014();
  return;
}
