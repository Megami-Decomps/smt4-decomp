/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea268` (_code @ 0x2ea268, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f76ca(int, unsigned char *);

extern unsigned char LAB_002ea2a0; /* 0x2ea2a0 */
extern unsigned char DAT_00559534; /* 0x559534 */
extern unsigned char DAT_0055a25c; /* 0x55a25c */

extern int FUN_002ea0e4(unsigned int *);
/* Supplied declaration required: FUN_002f76ca. */
extern unsigned int *FUN_002fb018(void);


unsigned int * FUN_002ea268(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002fb018();
  *puVar1 = (unsigned int)&DAT_0055a25c;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  temp_v0 = FUN_002ea0e4(puVar1 + 2);
  *(unsigned char **)(temp_v0 - 8) = &DAT_00559534;
  FUN_002f76ca(temp_v0,&LAB_002ea2a0);
  *(unsigned int *)(temp_v0 + 8) = 3;
  *(unsigned int *)(temp_v0 + 0x10) = 0x7d4;
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  return (unsigned int *)(temp_v0 - 8);
}

} /* extern "C" */
