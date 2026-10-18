/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa75c` (_code @ 0x2fa75c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);


unsigned int FUN_002fa75c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = FUN_0018719c(0x410);
  if (temp_v0 != 0) {
    temp_v1 = FUN_001801a4();
    temp_v2 = *(short *)(temp_v1 + 2) != 0;
    if (temp_v2) {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 4);
    }
    if (temp_v2 && temp_v1 != 0) {
      return 1;
    }
  }
  return 0;
}
