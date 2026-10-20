/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3598` (_code @ 0x2a3598, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00183e58(void);
int FUN_002852f0(int);
int FUN_002c76c0(...);
int FUN_002e6134(void);
int FUN_003457b8(void);
int FUN_003c5848(void);

/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: FUN_002852f0. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e6134. */
/* Supplied declaration required: FUN_003457b8. */
extern int FUN_0036df88(void);
/* Supplied declaration required: FUN_003c5848. */


unsigned int FUN_002a3598(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_002c76c0();
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_0036df88();
    if (temp_v0 != 0) {
      FUN_002e6134();
      FUN_002c76c0(0xffffffff);
      FUN_002852f0(0);
      return 1;
    }
  }
  else {
    FUN_00183e58();
    FUN_003c5848();
    FUN_003457b8();
  }
  return 0;
}

} /* extern "C" */
