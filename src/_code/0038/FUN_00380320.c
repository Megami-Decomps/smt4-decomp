/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380320` (_code @ 0x380320, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00380320_arg0 fn_00380320_arg0;
struct fn_00380320_arg0 {
    unsigned char pad_0x0[0x1c];
    int field_0x1c; /* +0x1c */
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    void *field_0x24; /* +0x24 */
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0x3];
    undefined4 field_0x2c; /* +0x2c */
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
};

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00235c70. */
/* Supplied declaration required: FUN_002af3b4. */
extern int FUN_0037b73c(int, int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0037bf4c. */


void FUN_00380320(fn_00380320_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1->field_0x38 == 0) && (temp_v1 = param_1->field_0x34, temp_v1 != -1)) {
    param_4 = 0;
    temp_v0 = param_1->field_0x1c + 0xc;
    FUN_002af3b4(temp_v0,temp_v1,*(unsigned int *)&param_1->field_0x20,2,0);
    if ((temp_v0 == 0) &&
       (UNRECOVERED_JUMPTABLE = param_1->field_0x24, UNRECOVERED_JUMPTABLE != (romwright_code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x003803f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0,0,0,*(unsigned int *)&param_1->field_0x28);
      return;
    }
    temp_v0 = param_1->field_0x1c + 0xc;
    FUN_00235c70(temp_v0,temp_v1);
    param_1->field_0x38 = temp_v0;
  }
  temp_v1 = param_1->field_0x38;
  FUN_0037bf4c(temp_v1,*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1->field_0x30);
  if (temp_v1 == 0) {
    temp_v1 = FUN_0037b73c(param_1->field_0x1c + 0xc,param_1->field_0x38,*(unsigned int *)(param_1 + 1),
                         *(unsigned int *)&param_1->field_0x20,param_4);
    if ((temp_v1 == 0) &&
       (UNRECOVERED_JUMPTABLE = param_1->field_0x24, UNRECOVERED_JUMPTABLE != (romwright_code *)0x0)) {
      (*UNRECOVERED_JUMPTABLE)(0,0,0,*(unsigned int *)&param_1->field_0x28);
      return;
    }
    temp_v1 = param_1->field_0x38;
    FUN_0037bf4c(temp_v1,*(unsigned int *)(param_1 + 1),*(unsigned int *)&param_1->field_0x30);
  }
  if (param_1->field_0x24 == (romwright_code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0038043c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1->field_0x24)(1,param_1->field_0x38,temp_v1,*(unsigned int *)&param_1->field_0x28);
  return;
}
