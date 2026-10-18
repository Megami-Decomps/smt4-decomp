/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012922c` (_code @ 0x12922c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012922c_arg0 fn_0012922c_arg0;
struct fn_0012922c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x8];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x30];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    void *field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined1 field_0x58; /* +0x58 */
    undefined1 field_0x59; /* +0x59 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_00559054; /* 0x559054 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002f5928(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002fb208. */
/* Supplied declaration required: FUN_002fb224. */
extern int FUN_0030cd36(void);
extern unsigned int *FUN_0030ce94(fn_0012922c_arg0 *);


unsigned long long
FUN_0012922c(fn_0012922c_arg0 *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int *temp_v3;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v3 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (unsigned int *)FUN_0030ce94(param_1);
  *puVar1 = (unsigned int)&DAT_00559054;
  puVar1[3] = *param_2;
  temp_v0 = FUN_002f5928(puVar1 + 4,1);
  puVar3 = (unsigned int *)(temp_v0 + 0x30);
  *puVar3 = 0;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned char *)(temp_v0 + 0x48) = 0;
  *(unsigned char *)(temp_v0 + 0x49) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  temp_v1 = FUN_0030cd36();
  *(int *)(temp_v0 + 0x40) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(temp_v0 + 0x40) + 8) = *(int *)(temp_v0 + 0x40);
  puVar1 = *(unsigned int **)(temp_v0 + 0x40);
  puVar1[3] = (unsigned int)puVar1;
  FUN_002fb208();
  temp_v3 = puVar1;
  FUN_002fb224(puVar3,&temp_v3);
  *puVar3 = *param_2;
  return romwright_piece_4_4(temp_v3,temp_v0 - 0x10);
}
