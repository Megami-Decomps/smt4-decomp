/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7014` (_code @ 0x3f7014, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003f7014_arg0 fn_003f7014_arg0;
struct fn_003f7014_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    byte field_0x9; /* +0x9 */
    char field_0xa; /* +0xa */
};

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);


void FUN_003f7014(fn_003f7014_arg0 *param_1,unsigned int param_2,int param_3)

{
  nn_fnd_ExpHeapBase_Allocate
            (param_1->field_0x4,param_2,param_3,param_1->field_0x8,(unsigned int)param_1->field_0x9,
             (unsigned char)param_1->field_0xa);
  return;
}
