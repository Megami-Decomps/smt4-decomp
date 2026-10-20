/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256124` (_code @ 0x256124, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028975c(int, int, int);

/* Supplied declaration required: FUN_0028975c. */
extern int FUN_002b6b20(void);


void FUN_00256124(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b6b20();
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) != 0) {
    if (*(short *)(temp_v0 + 0x46) == 0x2a3) {
      FUN_0028975c(0x262,0,1);
    }
    if (*(short *)(temp_v0 + 0x46) == 0x2a5) {
      FUN_0028975c(0x263,0,1);
    }
    *(unsigned short *)(temp_v0 + 0x46) = 0;
  }
  return;
}

} /* extern "C" */
