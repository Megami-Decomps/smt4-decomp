/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001290e8` (_code @ 0x1290e8, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001290e8_arg0 fn_001290e8_arg0;
struct fn_001290e8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x50];
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    void *field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined1 field_0x6c; /* +0x6c */
    undefined1 field_0x6d; /* +0x6d */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_00559038; /* 0x559038 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002f5928(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002fb208. */
extern int FUN_0030cdfa(void);
/* Supplied declaration required: FUN_0030ce60. */
extern unsigned int *FUN_0030ce94(fn_001290e8_arg0 *);
/* Supplied declaration required: FUN_0030ceb8. */
/* Supplied declaration required: FUN_0030cf36. */


unsigned long long FUN_001290e8(fn_001290e8_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v3 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (unsigned int *)FUN_0030ce94(param_1);
  *puVar1 = (unsigned int)&DAT_00559038;
  puVar1 = puVar1 + 3;
  FUN_0030ce60(puVar1,param_2);
  temp_v0 = FUN_002f5928(puVar1 + 6,1);
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned char *)(temp_v0 + 0x48) = 0;
  *(unsigned char *)(temp_v0 + 0x49) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  temp_v1 = FUN_0030cdfa();
  *(int *)(temp_v0 + 0x40) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(temp_v0 + 0x40) + 8) = *(int *)(temp_v0 + 0x40);
  temp_v1 = *(int *)(temp_v0 + 0x40);
  *(int *)(temp_v1 + 0xc) = temp_v1;
  FUN_002fb208();
  temp_v3 = temp_v1;
  FUN_0030cf36((unsigned int *)(temp_v0 + 0x30),&temp_v3);
  FUN_0030ceb8();
  return romwright_piece_4_4(temp_v3,temp_v0 - 0x24);
}
