/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141140` (_code @ 0x141140, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00141140_arg0 fn_00141140_arg0;
struct fn_00141140_arg0 {
    unsigned char pad_0x0[0x198];
    undefined4 field_0x198; /* +0x198 */
    unsigned char pad_0x19c[0x18];
    undefined4 field_0x1b4; /* +0x1b4 */
    undefined4 field_0x1b8; /* +0x1b8 */
    undefined4 field_0x1bc; /* +0x1bc */
    undefined4 field_0x1c0; /* +0x1c0 */
    unsigned char pad_0x1c4[0x8];
    undefined4 field_0x1cc; /* +0x1cc */
    undefined4 field_0x1d0; /* +0x1d0 */
    unsigned char pad_0x1d4[0x27c];
    undefined4 field_0x450; /* +0x450 */
    undefined4 field_0x454; /* +0x454 */
    undefined4 field_0x458; /* +0x458 */
    unsigned char pad_0x45c[0x1];
    undefined1 field_0x45d; /* +0x45d */
    undefined1 field_0x45e; /* +0x45e */
};

extern unsigned char DAT_00421f0c; /* 0x421f0c */
extern unsigned char DAT_00421f20; /* 0x421f20 */

extern unsigned int *FUN_0014bfec(void);
extern int FUN_0014c450(unsigned int *);
extern int FUN_0014c900(unsigned int *);
extern unsigned int *FUN_002a7b78(int);


void FUN_00141140(fn_00141140_arg0 *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0014bfec();
  *puVar1 = (unsigned int)&DAT_00421f20;
  temp_v0 = FUN_0014c900(puVar1 + 0x3d);
  *(unsigned int *)(temp_v0 + 0xa0) = param_2;
  puVar1 = (unsigned int *)FUN_002a7b78(temp_v0 + 0xa4);
  *puVar1 = (unsigned int)&DAT_00421f0c;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xd] = 0xffffffff;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  temp_v0 = FUN_0014c450(puVar1 + 0x10);
  *(unsigned int *)(temp_v0 + 0x278) = 0;
  *(unsigned int *)(temp_v0 + 0x27c) = 0;
  *(unsigned int *)(temp_v0 + 0x280) = 0;
  *(unsigned char *)(temp_v0 + 0x285) = 0;
  *(unsigned char *)(temp_v0 + 0x286) = 0;
  return;
}
