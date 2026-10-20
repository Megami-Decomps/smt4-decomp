/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106fcc` (_code @ 0x106fcc, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strHolderAssignBytes(unsigned int, int, undefined4);
int strHolderAssignU32(unsigned int, int *);

typedef struct fn_00106fcc_arg1 fn_00106fcc_arg1;
struct fn_00106fcc_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: strHolderAssignBytes. */
/* Supplied declaration required: strHolderAssignU32. */


void FUN_00106fcc(unsigned int param_1,fn_00106fcc_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2->field_0x10;
  strHolderAssignU32(param_1,&temp_v0);
  strHolderAssignBytes(param_1,param_2->field_0xc + param_2->field_0x18,param_2->field_0x10);
  return;
}

} /* extern "C" */
