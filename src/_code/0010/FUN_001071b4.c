/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001071b4` (_code @ 0x1071b4, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_001071b4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  
  temp_v0 = FUN_002c0ec4(2,3);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar4 = (unsigned char *)(temp_v1 + temp_v3 * 2);
      FUN_002c0c74(*puVar4,puVar4[1],0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return;
}
