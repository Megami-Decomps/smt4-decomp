/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cde1c` (_code @ 0x2cde1c, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0e4c(unsigned int);
extern char *FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


char * FUN_002cde1c(int param_1)

{
  unsigned int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ec4(0x25,0);
  pcVar2 = (char *)FUN_002c0e9c();
  temp_v1 = FUN_002c0e4c(temp_v0);
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      if (*pcVar2 == param_1) {
        return pcVar2;
      }
      temp_v2 = temp_v2 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while (temp_v2 < temp_v1);
  }
  return (char *)0x0;
}
