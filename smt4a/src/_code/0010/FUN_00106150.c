/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106150` (_code @ 0x106150, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558914; /* 0x558914 */
extern unsigned char DAT_0055ab2c; /* 0x55ab2c */

/* Supplied declaration required: FUN_001060e6. */
extern unsigned int FUN_001106d0(void);
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_002e760a(unsigned int);
extern unsigned int *FUN_002e9f80(void);
/* Supplied declaration required: FUN_002ecef0. */
extern int FUN_002ed074(unsigned int *, unsigned int);
extern int FUN_002ed094(int);
/* Supplied declaration required: FUN_002ed0c0. */
extern unsigned int *FUN_002ed0dc(int, unsigned int);
extern int FUN_002ed1a0(void);
/* Supplied declaration required: FUN_002ed206. */


int FUN_00106150(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_00558914;
  temp_v0 = FUN_002ed074(puVar1 + 4,0xc);
  temp_v0 = FUN_002ed094(temp_v0 + 0x18);
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  temp_v4 = temp_v0 - 0x28;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  FUN_002ed0c0(temp_v0 - 0x18,temp_v4);
  FUN_002ecef0();
  temp_v1 = FUN_002e760a(0x3c);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_001106d0();
  }
  *(unsigned int *)(temp_v0 - 0x1c) = temp_v2;
  temp_v1 = FUN_002e760a(0x9c);
  puVar1 = (unsigned int *)0x0;
  if (temp_v1 != 0) {
    FUN_002e6354(temp_v1,0x9c);
    puVar1 = (unsigned int *)FUN_002ed0dc(temp_v1,0);
    *puVar1 = (unsigned int)&DAT_0055ab2c;
    puVar1[0x20] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    *(unsigned char *)(puVar1 + 0x26) = 0;
    *(unsigned char *)((int)puVar1 + 0x99) = temp_v3;
    puVar1[0x23] = 0;
    puVar1[0x22] = 0;
    puVar1[0x21] = 0;
    temp_v1 = FUN_002ed1a0();
    puVar1[0x24] = temp_v1;
    *(unsigned int *)(temp_v1 + 4) = 0;
    *(unsigned int *)(puVar1[0x24] + 8) = puVar1[0x24];
    *(unsigned int *)(puVar1[0x24] + 0xc) = puVar1[0x24];
  }
  *(unsigned int **)(temp_v0 - 4) = puVar1;
  FUN_002ed206(puVar1,8);
  FUN_001060e6(temp_v4,0xe,*(unsigned int *)(temp_v0 - 4));
  return temp_v4;
}
