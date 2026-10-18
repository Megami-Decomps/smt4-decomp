/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011468c` (_code @ 0x11468c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011468c_arg0 fn_0011468c_arg0;
struct fn_0011468c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x1c];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
};

extern unsigned char DAT_005596e4; /* 0x5596e4 */

extern int FUN_002ec75c(unsigned int *);
extern unsigned int *FUN_002fd0e4(fn_0011468c_arg0 *);


void FUN_0011468c(fn_0011468c_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002fd0e4(param_1);
  *puVar1 = (unsigned int)&DAT_005596e4;
  temp_v0 = FUN_002ec75c(puVar1 + 2);
  *(unsigned int *)(temp_v0 + 0x1c) = param_3;
  *(unsigned int *)(temp_v0 + 0x18) = param_2;
  return;
}
