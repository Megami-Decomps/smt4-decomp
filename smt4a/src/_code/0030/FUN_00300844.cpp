/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300844` (_code @ 0x300844, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00300844_arg0 fn_00300844_arg0;
struct fn_00300844_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x1];
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x2];
    undefined4 field_0x8; /* +0x8 */
};

extern unsigned char DAT_0055b31c; /* 0x55b31c */

extern unsigned int *FUN_00106e4c(fn_00300844_arg0 *);


void FUN_00300844(fn_00300844_arg0 *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00106e4c(param_1);
  puVar1[3] = param_2;
  puVar1[2] = 0;
  *puVar1 = (unsigned int)&DAT_0055b31c;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  return;
}

} /* extern "C" */
