/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dff6c` (_code @ 0x3dff6c, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned short *, int);
int FUN_003df7c4(int);
int FUN_004cc6d4(unsigned short *, int, int);
int FUN_004ccf78(int);
int strncpy(unsigned short *, unsigned int, int);

typedef struct fn_003dff6c_arg0 fn_003dff6c_arg0;
struct fn_003dff6c_arg0 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined2 field_0x4; /* +0x4 */
    undefined2 field_0x6; /* +0x6 */
    undefined2 field_0x8; /* +0x8 */
    undefined2 field_0xa; /* +0xa */
    undefined2 field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
    ushort field_0x1e; /* +0x1e */
    unsigned char pad_0x20[0xa];
    undefined2 field_0x2a; /* +0x2a */
    undefined2 field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x2f];
    undefined1 field_0x5d; /* +0x5d */
    unsigned char pad_0x5e[0x2];
    undefined2 field_0x60; /* +0x60 */
    undefined2 field_0x62; /* +0x62 */
};

extern unsigned short *FUN_001801a4(void);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_004cc6d4. */
/* Supplied declaration required: FUN_004ccf78. */


void FUN_003dff6c(int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)FUN_001801a4();
  FUN_002e6354(puVar1,100);
  puVar1[0x30] = 0;
  puVar1[0x31] = (short)param_1;
  strncpy(puVar1 + 0x26,param_2,0x12);
  *(unsigned char *)((int)puVar1 + 0x5d) = 0;
  FUN_004ccf78(0);
  if (param_1 > 1) {
    FUN_004cc6d4(puVar1,(int)(short)(param_1 - 1),1);
  }
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  puVar1[4] = param_3[4];
  puVar1[5] = param_3[5];
  puVar1[6] = param_3[6];
  FUN_003df7c4(0);
  puVar1[0x15] = puVar1[0xe];
  puVar1[0x16] = puVar1[0xf];
  return;
}

} /* extern "C" */
