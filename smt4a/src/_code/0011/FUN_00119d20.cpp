/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119d20` (_code @ 0x119d20, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012220c(unsigned int);

typedef struct fn_00119d20_arg0 fn_00119d20_arg0;
struct fn_00119d20_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x38];
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0xc];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
};

extern unsigned char DAT_0055a220; /* 0x55a220 */
extern signed char DAT_0059935d; /* 0x59935d */

extern unsigned long long FUN_001146b8(void);
/* Supplied declaration required: FUN_0012220c. */
extern unsigned int *FUN_002eb77c(fn_00119d20_arg0 *, unsigned int, unsigned int *);


unsigned int *
FUN_00119d20(fn_00119d20_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned long long temp_v0;
  int uStack_18;
  
  uStack_18 = param_4;
  puVar1 = (unsigned int *)FUN_002eb77c(param_1,2,(unsigned int *)&uStack_18);
  puVar1[0x14] = 0;
  puVar1[0xf] = param_2;
  puVar1[0x10] = param_3;
  puVar1[0x15] = 0;
  *puVar1 = (unsigned int)&DAT_0055a220;
  if (DAT_0059935d == '\0') {
    FUN_0012220c(param_3);
    temp_v0 = FUN_001146b8();
    *(unsigned long long *)(puVar1 + 0x12) = temp_v0;
    *(unsigned char *)(puVar1 + 0xe) = 1;
  }
  return puVar1;
}

} /* extern "C" */
