/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa7d4` (_code @ 0x3aa7d4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003a8cc8(void);

typedef struct fn_003aa7d4_arg0 fn_003aa7d4_arg0;
struct fn_003aa7d4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x58c];
    undefined4 field_0x590; /* +0x590 */
    unsigned char pad_0x594[0x10];
    undefined1 field_0x5a4; /* +0x5a4 */
};

extern unsigned char DAT_00422400; /* 0x422400 */

extern unsigned int *FUN_0022cb58(void);
/* Supplied declaration required: FUN_003a8cc8. */


unsigned int * FUN_003aa7d4(fn_003aa7d4_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0022cb58();
  *puVar1 = (unsigned int)&DAT_00422400;
  FUN_003a8cc8();
  *(unsigned char *)(puVar1 + 0x169) = 1;
  puVar1[0x296d] = param_2;
  *(unsigned char *)(puVar1 + 0x296e) = 1;
  puVar1[0x164] = 0;
  return puVar1;
}

} /* extern "C" */
