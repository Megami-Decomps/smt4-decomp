/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001104e8` (_code @ 0x1104e8, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055937c; /* 0x55937c */
extern unsigned char g_flagBlock; /* 0x594958 */

extern int operatorNew(unsigned int);
extern int onlineStringCopyConstruct(unsigned int *);
extern unsigned int FUN_002fb252(void);


int FUN_001104e8(unsigned int *param_1)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  *param_1 = (unsigned int)&DAT_0055937c;
  temp_v0 = onlineStringCopyConstruct(param_1 + 1);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned char *)(temp_v0 + 0x18) = 0;
  *(unsigned char *)(temp_v0 + 0x1a) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0x80000000;
  temp_v1 = operatorNew(0x10);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_002fb252();
  }
  *(unsigned int *)(temp_v0 + 8) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x10) = (*(unsigned int *)((unsigned char *)&g_flagBlock + 0x64));
  return temp_v0 - 4;
}

} /* extern "C" */
