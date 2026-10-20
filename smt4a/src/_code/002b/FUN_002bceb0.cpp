/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bceb0` (_code @ 0x2bceb0, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0040ae70(...);
int FUN_0040afe0(...);
int FUN_0040b0f8(...);

typedef struct fn_002bceb0_arg0 fn_002bceb0_arg0;
struct fn_002bceb0_arg0 {
    unsigned char pad_0x0[0x30];
    int field_0x30; /* +0x30 */
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x98];
    undefined4 field_0xd0; /* +0xd0 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp118; /* 0x118: local_118 */
} param_1_stack;

extern signed char DAT_005f1623; /* 0x5f1623 */
extern signed char DAT_005f1858; /* 0x5f1858 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(unsigned int);
/* Supplied declaration required: FUN_0040afe0. */
/* Supplied declaration required: FUN_0040b0f8. */


void FUN_002bceb0(fn_002bceb0_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [128];
  unsigned char temp_v3 [132];
  
  if (DAT_005f1858 != '\0') {
    FUN_00100388(temp_v3,"map/m%03d/e%03d_%02d_dz.bcenv",param_1->field_0x30,param_1->field_0x30,
                 param_1->field_0x34);
    FUN_00100388(temp_v2,"map/m%03d/e%03d_%02d_dz.bch",param_1->field_0x30,param_1->field_0x30,
                 param_1->field_0x34);
  }
  if (DAT_005f1623 != '\0') {
    FUN_00100388(temp_v3,"map/m%03d/e%03d_%02d.bcenv",0x18,0x18,1);
    FUN_00100388(temp_v2,"map/m%03d/e%03d_%02d.bch",0x18,0x18,1);
  }
  else {
    FUN_00100388(temp_v3,"map/m%03d/e%03d_%02d.bcenv",param_1->field_0x30,param_1->field_0x30,
                 param_1->field_0x34);
    FUN_00100388(temp_v2,"map/m%03d/e%03d_%02d.bch",param_1->field_0x30,param_1->field_0x30,
                 param_1->field_0x34);
  }
  FUN_0040b0f8(param_1->field_0xd0,temp_v2);
  temp_v0 = FUN_0040af60(param_1->field_0xd0);
  if (temp_v0 != 0) {
    temp_v0 = param_1->field_0x30;
    temp_v1 = temp_v0 == 0x20;
    if (temp_v1) {
      temp_v0 = param_1->field_0x34;
    }
    if (temp_v1 && temp_v0 == 2) {
      FUN_0040afe0(param_1->field_0xd0,3,0);
      return;
    }
    FUN_0040ae70(param_1->field_0xd0,1);
  }
  return;
}

} /* extern "C" */
