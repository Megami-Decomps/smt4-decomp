/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292ae8` (_code @ 0x292ae8, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int FUN_00292ae8(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_002c0ec4(0x15,0);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  temp_v3 = 0;
  if (temp_v2 != 0) {
    temp_v3 = temp_v2 & 1;
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(unsigned char *)(temp_v1 + temp_v4 * 100) == param_1) {
          return temp_v1 + temp_v4 * 100;
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < (int)temp_v3);
    }
  }
  while( 1 ) {
    temp_v4 = temp_v3;
    if (temp_v2 <= temp_v4) {
      return 0;
    }
    if (*(unsigned char *)(temp_v1 + temp_v4 * 100) == param_1) break;
    if (*(unsigned char *)(temp_v1 + temp_v4 * 100 + 100) == param_1) {
      return temp_v1 + temp_v4 * 100 + 100;
    }
    temp_v3 = temp_v4 + 2;
  }
  return temp_v1 + temp_v4 * 100;
}
