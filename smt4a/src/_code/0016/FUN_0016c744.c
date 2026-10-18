/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016c744` (_code @ 0x16c744, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_001664bc. */
/* Supplied declaration required: FUN_00167ba0. */
/* Supplied declaration required: FUN_00177e6c. */
/* Supplied declaration required: FUN_001960f0. */
/* Supplied declaration required: FUN_0019eafc. */
/* Supplied declaration required: FUN_001b4128. */


void FUN_0016c744(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  temp_v0 = param_1;
  FUN_0019eafc();
  param_1 = param_1 + 0x138;
  FUN_00177e6c(param_1,temp_v0);
  FUN_001960f0(temp_v0,param_1);
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = 0x210;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf02bb;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = 0;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf02bc;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  FUN_001664bc();
  temp_v1 = 0xa0000002;
  uStack_1c = 0xb02b9;
  uStack_18 = 2;
  uStack_14 = 0xf0242;
  FUN_001b4128(&temp_v1,0x10,1);
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = 1;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0111;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = 1;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0110;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = 0;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0x100e0;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  FUN_001664bc();
  return;
}
