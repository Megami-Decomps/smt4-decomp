/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105c54` (_code @ 0x105c54, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00105c54_arg0 fn_00105c54_arg0;
struct fn_00105c54_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5c];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
};

extern unsigned char LAB_00105ca0; /* 0x105ca0 */
extern unsigned char DAT_005587fc; /* 0x5587fc */

extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int *FUN_002eca10(fn_00105c54_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */


unsigned int * FUN_00105c54(fn_00105c54_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [16];
  unsigned char temp_v2 [8];
  
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v2);
  *puVar1 = (unsigned int)&DAT_005587fc;
  puVar1 = puVar1 + 0x1c;
  FUN_002eca44();
  puVar1[-2] = param_3;
  puVar1[-1] = param_2;
  puVar1[-4] = 0x1000;
  puVar1[-3] = 0;
  temp_v0 = FUN_002ea3c0(temp_v1,0x105bf5,0,&LAB_00105ca0);
  FUN_002ea3d0(puVar1 + -0x1c,temp_v0);
  return puVar1 + -0x1c;
}
