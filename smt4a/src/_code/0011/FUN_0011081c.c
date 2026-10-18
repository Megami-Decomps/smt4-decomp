/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011081c` (_code @ 0x11081c, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0011081c_arg0 fn_0011081c_arg0;
struct fn_0011081c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x34];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
};

extern unsigned char LAB_00110878; /* 0x110878 */
extern unsigned char LAB_001108a0; /* 0x1108a0 */
extern unsigned char DAT_005593d0; /* 0x5593d0 */

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002fb58c. */
/* Supplied declaration required: FUN_002fba58. */


unsigned int *
FUN_0011081c(fn_0011081c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = FUN_002e9300(&uStack_18,&LAB_00110878);
  puVar2 = (unsigned int *)FUN_002fb58c(param_1,temp_v0);
  FUN_002e9318(&uStack_18);
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *puVar2 = (unsigned int)&DAT_005593d0;
  temp_v1 = FUN_002e760a(0x38);
  if (temp_v1 != 0) {
    FUN_002e9300(&uStack_18,&LAB_001108a0);
    temp_v0 = FUN_002fb58c(temp_v1,&uStack_18);
    puVar2[0x11] = temp_v0;
    FUN_002e9318(&uStack_18);
  }
  else {
    puVar2[0x11] = 0;
  }
  FUN_002fba58(puVar2,puVar2[0x11]);
  return puVar2;
}
