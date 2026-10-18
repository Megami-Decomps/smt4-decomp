/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba5bc` (_code @ 0x1ba5bc, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001ba5bc_arg0 fn_001ba5bc_arg0;
struct fn_001ba5bc_arg0 {
    unsigned char pad_0x0[0x1c];
    byte field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3b];
    byte field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x23];
    byte field_0x7c; /* +0x7c */
    byte field_0x7d; /* +0x7d */
    unsigned char pad_0x7e[0x22];
    byte field_0xa0; /* +0xa0 */
    byte field_0xa1; /* +0xa1 */
};

extern unsigned char LAB_00200080; /* 0x200080 */


unsigned int * FUN_001ba5bc(fn_001ba5bc_arg0 *param_1,unsigned int *param_2,int param_3)

{
  unsigned int *puVar1;
  
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = (unsigned int)&LAB_00200080;
    puVar1 = param_2 + 3;
    param_2[2] = 0;
    param_2 = param_2 + 4;
    *puVar1 = 0;
  }
  *param_2 = (unsigned int)(param_1->field_0x1c != 5) | ((unsigned int)(param_1->field_0x58 != 0) << 1) |
             ((unsigned int)(param_1->field_0x7c != 0) << 2) | ((unsigned int)param_1->field_0xa1 << 8) |
             ((unsigned int)(param_1->field_0xa0 != 0) << 10) | ((unsigned int)(param_1->field_0x7d != 0) << 0xd) |
             0x1000;
  param_2[1] = 0xf0080;
  param_2[2] = (unsigned int)(param_1->field_0x1c != 5) | ((unsigned int)(param_1->field_0x58 != 0) << 1) |
               ((unsigned int)(param_1->field_0x7c != 0) << 2) | ((unsigned int)param_1->field_0xa1 << 8) |
               ((unsigned int)(param_1->field_0xa0 != 0) << 10) | ((unsigned int)(param_1->field_0x7d != 0) << 0xd)
               | 0x11000;
  param_2[3] = 0xf0080;
  return param_2 + 4;
}
