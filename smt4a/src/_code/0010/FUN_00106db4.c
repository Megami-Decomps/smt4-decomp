/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106db4` (_code @ 0x106db4, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00106db4_arg0 fn_00106db4_arg0;
struct fn_00106db4_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x10];
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

extern unsigned char DAT_00558960; /* 0x558960 */

/* Supplied declaration required: FUN_00114e54. */
extern unsigned int FUN_001174ec(void);
extern int FUN_002e760a(unsigned int);
extern unsigned int *FUN_002eb4a4(fn_00106db4_arg0 *, unsigned int, unsigned int);


unsigned int * FUN_00106db4(fn_00106db4_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002eb4a4(param_1,10,0);
  *puVar1 = (unsigned int)&DAT_00558960;
  temp_v0 = FUN_002e760a(0x28);
  if (temp_v0 != 0) {
    FUN_00114e54();
  }
  puVar1[6] = temp_v0;
  temp_v0 = FUN_002e760a(0x54);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_001174ec();
  }
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = temp_v1;
  return puVar1;
}
