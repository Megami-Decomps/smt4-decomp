/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c750` (_code @ 0x11c750, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(unsigned int *, unsigned int);
int FUN_002eca44(void);

typedef struct fn_0011c750_arg0 fn_0011c750_arg0;
struct fn_0011c750_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5c];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
};

extern unsigned char LAB_0011c79c; /* 0x11c79c */
extern unsigned char DAT_0055a8a4; /* 0x55a8a4 */

extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int *FUN_002eca10(fn_0011c750_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */


unsigned int * FUN_0011c750(fn_0011c750_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [16];
  unsigned char temp_v2 [8];
  
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v2);
  *puVar1 = (unsigned int)&DAT_0055a8a4;
  puVar1 = puVar1 + 0x1c;
  FUN_002eca44();
  puVar1[-2] = param_3;
  puVar1[-1] = param_2;
  puVar1[-4] = 0x1000;
  puVar1[-3] = 0;
  temp_v0 = FUN_002ea3c0(temp_v1,0x11c69d,0,&LAB_0011c79c);
  FUN_002ea3d0(puVar1 + -0x1c,temp_v0);
  return puVar1 + -0x1c;
}

} /* extern "C" */
