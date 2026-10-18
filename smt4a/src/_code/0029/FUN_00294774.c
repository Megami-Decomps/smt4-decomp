/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294774` (_code @ 0x294774, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00294774_arg0 fn_00294774_arg0;
typedef struct fn_00294774_arg0_p8c fn_00294774_arg0_p8c;
struct fn_00294774_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x30];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    float field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x10];
    float field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x14];
    fn_00294774_arg0_p8c *field_0x8c; /* +0x8c */
};
struct fn_00294774_arg0_p8c {
    unsigned char pad_0x0[0x40];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    unsigned char pad_0x50[0x18];
    undefined4 field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x24];
    undefined4 field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x18];
    undefined4 field_0xac; /* +0xac */
};

extern int DAT_00580c8c; /* 0x580c8c */

/* Supplied declaration required: FUN_001b4eb8. */


void FUN_00294774(fn_00294774_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = DAT_00580c8c + (int)param_1 * 100;
  if (*(int *)(temp_v0 + 0x68) != 0) {
    *(unsigned int *)(temp_v0 + 0x54) = in_s0;
    *(unsigned int *)(temp_v0 + 0x58) = in_s1;
    *(unsigned int *)(temp_v0 + 0x5c) = in_s2;
    *(unsigned int *)(temp_v0 + 0x60) = 0;
    FUN_001b4eb8(*(int *)(temp_v0 + 0x68),temp_v0 + 0x54);
    return;
  }
  return;
}
