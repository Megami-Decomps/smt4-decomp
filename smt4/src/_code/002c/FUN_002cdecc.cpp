/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdecc` (_code @ 0x2cdecc, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002c0c74(unsigned int);
extern char *FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


char * FUN_002cdecc(int param_1)

{
  unsigned int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0cec(0x25,0);
  pcVar2 = (char *)FUN_002c0cc4();
  temp_v1 = FUN_002c0c74(temp_v0);
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

} /* extern "C" */
