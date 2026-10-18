/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ece14` (_code @ 0x2ece14, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002ece14_arg0 fn_002ece14_arg0;
typedef struct fn_002ece14_arg1 fn_002ece14_arg1;
struct fn_002ece14_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined1 field_0x1c; /* +0x1c */
    undefined1 field_0x1d; /* +0x1d */
    undefined1 field_0x1e; /* +0x1e */
};
struct fn_002ece14_arg1 {
    unsigned char pad_0x0[0x10];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x4];
    byte field_0x1c; /* +0x1c */
    byte field_0x1d; /* +0x1d */
    byte field_0x1e; /* +0x1e */
};

extern unsigned char DAT_0055af54; /* 0x55af54 */

extern unsigned int *FUN_002e9f80(fn_002ece14_arg0 *);
/* Supplied declaration required: FUN_002ec8a8. */
extern unsigned int FUN_003100f6(unsigned int *);


unsigned int * FUN_002ece14(fn_002ece14_arg0 *param_1,fn_002ece14_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80(param_1);
  *puVar1 = (unsigned int)&DAT_0055af54;
  puVar1[5] = param_2->field_0x14;
  *(unsigned char *)(puVar1 + 7) = 0;
  temp_v0 = FUN_003100f6(puVar1);
  puVar1[3] = temp_v0;
  temp_v0 = param_2->field_0x10;
  puVar1[6] = 0;
  puVar1[4] = temp_v0;
  FUN_002ec8a8(puVar1,param_2);
  *(unsigned char *)(puVar1 + 7) = param_2->field_0x1c & 0xfb;
  *(unsigned char *)((int)puVar1 + 0x1d) = param_2->field_0x1d;
  *(unsigned char *)((int)puVar1 + 0x1e) = param_2->field_0x1e;
  return puVar1;
}
