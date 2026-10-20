/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011afd8` (_code @ 0x11afd8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0011afd8_arg0 fn_0011afd8_arg0;
struct fn_0011afd8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x8];
    undefined4 field_0x78; /* +0x78 */
};

extern unsigned char DAT_0055a3c4; /* 0x55a3c4 */

extern int constructObj0055affc(unsigned int *);
extern unsigned int *FUN_002eca10(fn_0011afd8_arg0 *, unsigned int, unsigned int *);


void FUN_0011afd8(fn_0011afd8_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
  unsigned int *puVar1;
  int temp_v0;
  int uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,(unsigned int *)&uStack_10);
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = (unsigned int)&DAT_0055a3c4;
  temp_v0 = constructObj0055affc(puVar1 + 0x1c);
  *(unsigned int *)(temp_v0 + 8) = 0;
  return;
}

} /* extern "C" */
