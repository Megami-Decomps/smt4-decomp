/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001059f4` (_code @ 0x1059f4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strInit(...);
int FUN_002ec8a8(int, unsigned int);

typedef struct fn_001059f4_arg0 fn_001059f4_arg0;
struct fn_001059f4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x60];
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
};

extern unsigned char DAT_005587c4; /* 0x5587c4 */

/* Supplied declaration required: strInit. */
extern unsigned int *FUN_002eb77c(fn_001059f4_arg0 *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002ec8a8. */


int FUN_001059f4(fn_001059f4_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int uStack_18;
  
  uStack_18 = param_4;
  puVar1 = (unsigned int *)FUN_002eb77c(param_1,param_2,(unsigned int *)&uStack_18);
  puVar1[0x10] = param_4;
  puVar1[0xf] = param_3;
  *puVar1 = (unsigned int)&DAT_005587c4;
  temp_v0 = strInit(puVar1 + 0x11);
  *(unsigned int *)(temp_v0 + 0x28) = param_7;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = param_6;
  temp_v0 = strInit(temp_v0 + 0x2c);
  FUN_002ec8a8(temp_v0 - 0x2c,param_5);
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  FUN_002ec8a8(temp_v0,param_5);
  *(unsigned char *)(temp_v0 - 0x38) = 0;
  return temp_v0 - 0x70;
}

} /* extern "C" */
