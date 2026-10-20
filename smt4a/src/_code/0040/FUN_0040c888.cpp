/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040c888` (_code @ 0x40c888, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_004fad68(unsigned int, unsigned int, int, int);
int FUN_004fb43c(...);

typedef struct fn_0040c888_arg1 fn_0040c888_arg1;
struct fn_0040c888_arg1 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x1b];
    short field_0x24; /* +0x24 */
    short field_0x26; /* +0x26 */
    undefined4 field_0x28; /* +0x28 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_004fad68. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_0040c888(unsigned int param_1,fn_0040c888_arg1 *param_2)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  float temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float in_s0;
  
  temp_v1 = param_2->field_0x28;
  temp_v2 = *(unsigned int *)(param_2 + 1);
  FUN_004fad68(DAT_00573808,temp_v1,(int)param_2->field_0x24,(int)param_2->field_0x26);
  FUN_0014aa78();
  switch(temp_v1) {
  case 2:
  case 5:
  case 8:
  case 9:
  case 0xc:
    if (in_s0 < -2.9650002f) {
      temp_v1 = 5;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    if (in_s0 < -0.99f) {
      temp_v1 = 4;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    if (2.94f < in_s0) {
      temp_v1 = 1;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    if (0.96500003f < in_s0) {
      temp_v1 = 2;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    break;
  default:
    temp_v0 = *(float *)(DAT_00571508 + 0x58c);
    if (in_s0 < temp_v0 + -17.0f) {
      temp_v1 = 5;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    if (in_s0 < temp_v0 + -9.0f) {
      temp_v1 = 4;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    if (temp_v0 + 17.0f < in_s0) {
      temp_v1 = 1;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    if (temp_v0 + 9.0f < in_s0) {
      temp_v1 = 2;
      FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
      return;
    }
    break;
  case 6:
  case 7:
  case 0xb:
    break;
  }
  temp_v1 = 3;
  FUN_004fb43c(0,*(unsigned int *)&param_2->field_0x8,temp_v2,0,0,temp_v1,0);
  return;
}

} /* extern "C" */
