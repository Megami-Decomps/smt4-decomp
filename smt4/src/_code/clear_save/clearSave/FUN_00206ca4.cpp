/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206ca4` (_code @ 0x206ca4, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_002a46d8(int);
int FUN_002a7218(void);
int FUN_002ae898(int, int);
int FUN_002c415c(void);

extern int DAT_0043de80; /* 0x43de80 */

/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_00206ca4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_002ae898(2,0x83);
  FUN_002a46d8(0x3c);
  FUN_00291944();
  FUN_002917b8();
  if (*(int *)(temp_v0 + 0x8c) != 0) {
    FUN_002a7218();
    *(unsigned int *)(temp_v0 + 0x8c) = 0;
  }
  if (*(int *)(temp_v0 + 0x88) != 0) {
    FUN_002c415c();
    *(unsigned int *)(temp_v0 + 0x88) = 0;
  }
  if (*(int *)(temp_v0 + 0x90) != 0) {
    FUN_002c415c();
    *(unsigned int *)(temp_v0 + 0x90) = 0;
  }
  if (DAT_0043de80 != 0) {
    FUN_002c415c();
    DAT_0043de80 = 0;
  }
  return;
}

} /* extern "C" */
