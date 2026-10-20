/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af160` (_code @ 0x3af160, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a5ed0(int, int);
int FUN_002c4c2c(int);

/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002c4c2c. */


void FUN_003af160(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002c4c2c(8);
  FUN_002c4c2c(0x14);
  FUN_002c4c2c(0x15);
  FUN_002a5ed0(8,10);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x14,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  temp_v0 = 0;
  do {
    FUN_002a5ed0(0x15,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  return;
}

} /* extern "C" */
