/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd1e8` (_code @ 0x2fd1e8, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002fd1e8_arg0 fn_002fd1e8_arg0;
struct fn_002fd1e8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x10];
    undefined2 field_0x14; /* +0x14 */
    unsigned char pad_0x16[0x2];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

extern unsigned char DAT_00559234; /* 0x559234 */

extern int FUN_002e9520(unsigned int *, unsigned int);
extern unsigned int *FUN_002e9f80(fn_002fd1e8_arg0 *, unsigned int, unsigned int, unsigned int);


void FUN_002fd1e8(fn_002fd1e8_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_r2; 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int in_r2;
  
  puVar1 = (unsigned int *)FUN_002e9f80(param_1,param_2,in_r2,param_2);
  *puVar1 = (unsigned int)&DAT_00559234;
  temp_v0 = FUN_002e9520(puVar1 + 3,param_2);
  *(unsigned short *)(temp_v0 + 8) = 1;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  return;
}

} /* extern "C" */
