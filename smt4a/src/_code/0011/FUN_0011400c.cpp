/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011400c` (_code @ 0x11400c, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055962c; /* 0x55962c */

extern int FUN_002e9520(unsigned int *);
extern int FUN_002fed8c(void);


int FUN_0011400c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  *param_1 = (unsigned int)&DAT_0055962c;
  temp_v0 = FUN_002e9520(param_1 + 1);
  *(unsigned int *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x20) = 0;
  *(unsigned char *)(temp_v0 + 0x21) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  temp_v1 = FUN_002fed8c();
  *(int *)(temp_v0 + 0x18) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(temp_v0 + 0x18) + 8) = *(int *)(temp_v0 + 0x18);
  *(int *)(*(int *)(temp_v0 + 0x18) + 0xc) = *(int *)(temp_v0 + 0x18);
  return temp_v0 - 4;
}

} /* extern "C" */
