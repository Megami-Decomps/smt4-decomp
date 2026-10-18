/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356e94` (_code @ 0x356e94, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_001394c8(void);
/* Supplied declaration required: FUN_002c4938. */
extern unsigned int *FUN_00356d98(unsigned int *, unsigned int);
extern unsigned int FUN_00356e38(unsigned int *, unsigned int);
extern unsigned int *FUN_003572e8(unsigned int, unsigned int);


unsigned int * FUN_00356e94(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)FUN_001394c8();
  puVar1[1] = 0xf0201;
  *puVar1 = 0;
  puVar1[3] = 0xf0202;
  puVar1[2] = 0;
  FUN_002c4938(puVar1 + 4,0x98);
  temp_v1 = 0;
  puVar1[5] = 0x823f0203;
  piVar3 = (int *)(puVar1 + 0x2a);
  temp_v2 = 0xc;
  do {
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    *piVar3 = temp_v1;
    piVar3[1] = -0x7fc0fdce;
    temp_v2 = temp_v2 - 1;
    piVar3 = piVar3 + 6;
    temp_v1 = temp_v1 + 1;
  } while (temp_v2 != 0);
  puVar1[0x72] = 0;
  puVar1[0x73] = 0x100e0;
  temp_v0 = FUN_00356e38(puVar1 + 0x74,1);
  puVar1 = (unsigned int *)FUN_003572e8(temp_v0,1);
  *puVar1 = 0;
  puVar1[1] = 0x10062;
  puVar1[2] = 0;
  puVar1[3] = 0x10118;
  puVar1[4] = 0;
  puVar1[5] = 0x10047;
  puVar1 = (unsigned int *)FUN_00356d98(puVar1 + 6,1);
  *puVar1 = 0;
  puVar1[1] = 0xf011b;
  return puVar1 + 2;
}
