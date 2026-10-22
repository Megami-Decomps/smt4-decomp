/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c0e8` (_code @ 0x11c0e8, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0011c0e8_arg0 fn_0011c0e8_arg0;
struct fn_0011c0e8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    undefined4 field_0x10; /* +0x10 */
    undefined1 field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
};

extern unsigned char DAT_0055a818; /* 0x55a818 */

extern int FUN_002e9ff4(unsigned int *);
extern unsigned int *_ZN9Obj55b314C1Ei(fn_0011c0e8_arg0 *, unsigned int);


void FUN_0011c0e8(fn_0011c0e8_arg0 *param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)_ZN9Obj55b314C1Ei(param_1,0);
  puVar1[6] = 0;
  *puVar1 = (unsigned int)&DAT_0055a818;
  temp_v0 = FUN_002e9ff4(puVar1 + 8);
  *(unsigned int *)(temp_v0 - 0x10) = 0;
  *(unsigned char *)(temp_v0 - 0xc) = 0;
  *(unsigned int *)(temp_v0 - 4) = 0;
  return;
}

} /* extern "C" */
