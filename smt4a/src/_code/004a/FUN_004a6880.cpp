/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a6880` (_code @ 0x4a6880, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004a4bc8(void);

typedef struct fn_004a6880_arg0 fn_004a6880_arg0;
struct fn_004a6880_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x848];
    undefined4 field_0x84c; /* +0x84c */
    unsigned char pad_0x850[0x10];
    undefined1 field_0x860; /* +0x860 */
};

extern unsigned char DAT_0055c8d8; /* 0x55c8d8 */

/* Supplied declaration required: FUN_004a4bc8. */
extern unsigned int *FUN_004a82cc(void);


unsigned int * FUN_004a6880(fn_004a6880_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_004a82cc();
  *puVar1 = (unsigned int)&DAT_0055c8d8;
  FUN_004a4bc8();
  *(unsigned char *)(puVar1 + 0x218) = 1;
  puVar1[0x2a1d] = param_2;
  *(unsigned char *)(puVar1 + 0x2a1e) = 1;
  puVar1[0x213] = 0;
  return puVar1;
}

} /* extern "C" */
