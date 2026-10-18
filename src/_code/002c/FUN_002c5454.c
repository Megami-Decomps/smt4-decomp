/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5454` (_code @ 0x2c5454, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int iRamc8a0d004; /* 0xc8a0d004 */
extern unsigned int uRamc8a0d008; /* 0xc8a0d008 */
extern unsigned int uRamc8a0d00c; /* 0xc8a0d00c */

/* Supplied declaration required: FUN_0011d1c4. */
extern int FUN_0011d1fc(void);
extern unsigned int *FUN_0011d744(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0011d888. */
/* Supplied declaration required: FUN_0013727c. */
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002bc1e4. */
/* Supplied declaration required: FUN_002c1148. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c5454(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  unsigned char uStack_1c;
  
  temp_v0 = FUN_0011d1fc();
  temp_v1 = 0xe0a0cc08;
  puVar5 = (unsigned int *)0xc8a0cc02;
  if (temp_v0 != 9) {
    FUN_002c1148(0,0);
    FUN_002bb140(9);
    FUN_002bb378();
    puVar3 = (unsigned int *)0x1;
    FUN_0011d888();
    FUN_002bb308();
    temp_v0 = iRamc8a0d004;
    if ((puVar3 == (unsigned int *)0xc8a0cff0 || puVar3 == (unsigned int *)0xe0a0cc08) ||
        puVar3 == (unsigned int *)0xc8a0cc02) {
      temp_v1 = puVar3[0xe];
      if (*(char *)(puVar3 + 0x97) == '\0') {
        temp_v1 = 0x500;
      }
      FUN_002bc1e4();
      puVar1 = *(unsigned int **)(param_3 + 0x1fc);
      param_4 = temp_v0 * 4 - 0x375f3010;
      puVar5 = (unsigned int *)&uStack_1c;
      *puVar5 = (unsigned int)puVar1;
      puVar5[1] = temp_v1;
      FUN_0013727c(puVar3[2],puVar3[0xc],puVar3[0xd],*puVar3,*(unsigned int *)(param_4 + 0x20),
                   uRamc8a0d008,uRamc8a0d00c);
      return;
    }
    if ((int)puVar3 < 0) {
      FUN_002bbb2c(puVar3,0x2c54d0);
    }
  }
  FUN_0011d1c4();
  FUN_002bb194(0);
  FUN_002bb378();
  puVar3 = (unsigned int *)FUN_0011d744(param_1,param_2);
  FUN_002bb308();
  if ((puVar3 != (unsigned int *)0xc8a0cff0 && puVar3 != (unsigned int *)0xe0a0cc08) &&
      puVar3 != (unsigned int *)0xc8a0cc02) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar3 = (unsigned int)puVar3;
  puVar3[1] = 0xc8a0cff0;
  puVar1 = puVar3 + 2;
  *puVar5 = (unsigned int)puVar1;
  puVar5[1] = temp_v1;
  FUN_0013727c(puVar3[2],puVar3[0xc],puVar3[0xd],*puVar3,*(unsigned int *)(param_4 + 0x20),
               uRamc8a0d008,uRamc8a0d00c);
  return;
}
