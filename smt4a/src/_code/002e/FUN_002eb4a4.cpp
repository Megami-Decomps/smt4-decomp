/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb4a4` (_code @ 0x2eb4a4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5940(void);

typedef struct fn_002eb4a4_arg0 fn_002eb4a4_arg0;
struct fn_002eb4a4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined1 field_0x10; /* +0x10 */
};

extern unsigned char DAT_0055a284; /* 0x55a284 */

extern unsigned int *FUN_002eb994(fn_002eb4a4_arg0 *);
/* Supplied declaration required: FUN_002f5940. */


unsigned int * FUN_002eb4a4(fn_002eb4a4_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002eb994(param_1);
  *puVar1 = (unsigned int)&DAT_0055a284;
  FUN_002f5940();
  puVar1[3] = param_3;
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 4) = 0;
  return puVar1;
}

} /* extern "C" */
