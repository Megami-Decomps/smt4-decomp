/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001054b4` (_code @ 0x1054b4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001054b4_arg0 fn_001054b4_arg0;
struct fn_001054b4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x34];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
};

extern unsigned char DAT_00558744; /* 0x558744 */

extern int FUN_002eac34(unsigned int);
extern unsigned int *FUN_002eb994(fn_001054b4_arg0 *, unsigned int);
extern int FUN_002eb9b0(unsigned int *, int);


void FUN_001054b4(fn_001054b4_arg0 *param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002eb994(param_1,0xb);
  puVar1[2] = 0;
  *puVar1 = (unsigned int)&DAT_00558744;
  temp_v0 = FUN_002eac34(1);
  temp_v0 = FUN_002eb9b0(puVar1 + 4,*(int *)(temp_v0 + 0x74) * 3);
  *(unsigned int *)(temp_v0 + 0x30) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0xffffffff;
  return;
}
