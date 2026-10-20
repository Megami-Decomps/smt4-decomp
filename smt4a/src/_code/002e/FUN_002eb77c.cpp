/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb77c` (_code @ 0x2eb77c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002eb77c_arg0 fn_002eb77c_arg0;
struct fn_002eb77c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined1 field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x2];
    undefined1 field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x1];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined1 field_0x38; /* +0x38 */
    undefined1 field_0x39; /* +0x39 */
    undefined1 field_0x3a; /* +0x3a */
};

extern unsigned char DAT_0055ae2c; /* 0x55ae2c */

extern unsigned int *FUN_002e9f80(fn_002eb77c_arg0 *);


void FUN_002eb77c(fn_002eb77c_arg0 *param_1,unsigned char param_2,unsigned char *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002e9f80(param_1);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  *puVar1 = (unsigned int)&DAT_0055ae2c;
  *(unsigned char *)(puVar1 + 8) = param_2;
  *(unsigned char *)((int)puVar1 + 0x21) = *param_3;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(unsigned char *)((int)puVar1 + 0x22) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[6] = 0;
  *(unsigned char *)((int)puVar1 + 0x39) = 0;
  *(unsigned char *)((int)puVar1 + 0x3a) = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)(puVar1 + 0xe) = 1;
  return;
}

} /* extern "C" */
