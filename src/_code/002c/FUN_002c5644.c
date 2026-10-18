/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5644` (_code @ 0x2c5644, 0x160 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0011d0e4. */
extern int FUN_0011d11c(void);
extern unsigned int *FUN_0011d664(unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_0011d7a8. */
/* Supplied declaration required: FUN_001371a0. */
/* Supplied declaration required: FUN_002bb480. */
/* Supplied declaration required: FUN_002bb4d4. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002bbd10. */
/* Supplied declaration required: FUN_002bc3c8. */
/* Supplied declaration required: FUN_002c1320. */
/* Supplied declaration required: func_0x006c5d64. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c5644(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 16 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  char temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_0011d11c();
  temp_v2 = -0x375f3010;
  temp_v3 = -0x1f5f33f8;
  if (temp_v0 != 9) {
    FUN_002c1320(0,0);
    FUN_002bb480(9);
    FUN_002bb6b8();
    temp_v0 = 1;
    FUN_0011d7a8();
    FUN_002bb648();
    if ((temp_v0 == -0x375f3010 || temp_v0 == -0x1f5f33f8) || temp_v0 == -0x375f33fe) {
      temp_v2 = param_3 + 0x58;
      puVar3 = (unsigned int *)(param_3 + 0x100);
      temp_v3 = *(int *)(param_3 + 0x138);
      temp_v0 = *(int *)(param_3 + 0x6c);
      if (*(char *)(param_3 + temp_v1 + 0x200) == '\0') {
        temp_v3 = 0x500;
      }
      FUN_002bc3c8();
      puVar1 = *(unsigned int **)(param_3 + 0x1fc);
      param_4 = temp_v2 + temp_v0 * 4;
      FUN_001371a0(puVar3[2],puVar3[0xc],puVar3[0xd],*puVar3,*(unsigned int *)(param_4 + 0x20),
                   *(unsigned int *)(temp_v2 + 0x18),*(unsigned int *)(temp_v2 + 0x1c),puVar1,temp_v3,0,8);
      return;
    }
    if (temp_v0 < 0) {
      FUN_002bbd10(temp_v0,0x2c56c0);
    }
  }
  FUN_0011d0e4();
  FUN_002bb4d4(0);
  FUN_002bb6b8();
  puVar3 = (unsigned int *)FUN_0011d664(param_1,param_2,param_3);
  FUN_002bb648();
  temp_v5 = puVar3 != (unsigned int *)0xc8a0cff0;
  temp_v0 = temp_v2;
  if (temp_v5) {
    temp_v0 = temp_v3;
  }
  if (temp_v5 && puVar3 != (unsigned int *)0xe0a0cc08) {
    temp_v0 = -0x375f33fe;
  }
  temp_v4 = SBORROW4((int)puVar3,temp_v0);
  if ((temp_v5 && puVar3 != (unsigned int *)0xe0a0cc08) && puVar3 != (unsigned int *)0xc8a0cc02) {
    if ((int)puVar3 < 0) {
      FUN_002bbd10(puVar3,0x2c5718);
    }
    func_0x006c5d64();
    if (temp_v4 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar3 = (unsigned int)puVar3;
  puVar3[1] = 0xc8a0cff0;
  puVar1 = puVar3 + 2;
  FUN_001371a0(puVar3[2],puVar3[0xc],puVar3[0xd],*puVar3,*(unsigned int *)(param_4 + 0x20),
               *(unsigned int *)(temp_v2 + 0x18),*(unsigned int *)(temp_v2 + 0x1c),puVar1,temp_v3,0,8);
  return;
}
