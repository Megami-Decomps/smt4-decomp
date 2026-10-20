/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115484` (_code @ 0x115484, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char LAB_001154c0; /* 0x1154c0 */
extern unsigned char LAB_001154c4; /* 0x1154c4 */
extern unsigned char LAB_001154dc; /* 0x1154dc */
extern unsigned char DAT_005597dc; /* 0x5597dc */

extern int FUN_002e7168(unsigned int *, unsigned int);
extern int FUN_002f1858(int, unsigned char *, unsigned int, unsigned char *);
extern unsigned int *FUN_002fd0e4(void);


void FUN_00115484(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002fd0e4();
  *puVar1 = (unsigned int)&DAT_005597dc;
  temp_v0 = FUN_002e7168(puVar1 + 4,0x20000000);
  temp_v0 = FUN_002f1858(temp_v0 + 0x30,&LAB_001154c4,0,&LAB_001154c0);
  temp_v0 = FUN_002f1858(temp_v0 + 0x70,&LAB_001154dc,0,&LAB_001154c0);
  *(unsigned int *)(temp_v0 - 0xa8) = 0;
  *(unsigned int *)(temp_v0 - 0xa4) = 0;
  return;
}

} /* extern "C" */
