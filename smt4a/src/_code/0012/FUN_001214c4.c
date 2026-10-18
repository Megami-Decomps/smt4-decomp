/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001214c4` (_code @ 0x1214c4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001214c4_arg0 fn_001214c4_arg0;
struct fn_001214c4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5];
    undefined1 field_0x9; /* +0x9 */
    unsigned char pad_0xa[0x26];
    undefined4 field_0x30; /* +0x30 */
};

extern unsigned char DAT_0055b00c; /* 0x55b00c */

extern unsigned int *FUN_002e9f80(fn_001214c4_arg0 *);
extern int FUN_002ec75c(int);
extern int FUN_002ece14(unsigned int *, unsigned int);
extern int FUN_00302f28(int);


void FUN_001214c4(fn_001214c4_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80(param_1);
  *puVar1 = (unsigned int)&DAT_0055b00c;
  temp_v0 = FUN_002ece14(puVar1 + 3,param_2);
  *(unsigned int *)(temp_v0 + 0x24) = param_3;
  temp_v0 = FUN_002ec75c(temp_v0 + 0x28);
  temp_v0 = FUN_00302f28(temp_v0 + 0x1c);
  *(unsigned char *)(temp_v0 - 0x47) = 0;
  return;
}
