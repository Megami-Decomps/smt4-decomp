/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdfe0` (_code @ 0x2cdfe0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_0019a7f4(int, int);
int FUN_0019c364(void);
int FUN_001add24(int);
int FUN_0035b304(void);
int FUN_0037b450(void);

extern int DAT_0057f394; /* 0x57f394 */

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */


void FUN_002cdfe0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  FUN_0019a7f4(0,0x83);
  FUN_001add24(0x3c);
  FUN_0035b304();
  FUN_0037b450();
  if (*(int *)(temp_v0 + 0x90) != 0) {
    FUN_0019c364();
    *(unsigned int *)(temp_v0 + 0x90) = 0;
  }
  if (*(int *)(temp_v0 + 0x8c) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(temp_v0 + 0x8c) = 0;
  }
  if (*(int *)(temp_v0 + 0x94) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(temp_v0 + 0x94) = 0;
  }
  if (DAT_0057f394 != 0) {
    FUN_0019a5a0();
    DAT_0057f394 = 0;
  }
  return;
}

} /* extern "C" */
