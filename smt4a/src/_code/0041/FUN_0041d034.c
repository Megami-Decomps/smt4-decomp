/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041d034` (_code @ 0x41d034, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00344cd0. */


void FUN_0041d034(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_001677c0();
  FUN_001835b4(2,0x2b,0xe,*param_1,param_1[1],2);
  FUN_00344cd0(param_2,*param_1,param_1[1],0x2b,8,9,10,4,6,5,7,param_1[3],param_1[4],param_1[5],2,0)
  ;
  FUN_001677c0();
  return;
}
