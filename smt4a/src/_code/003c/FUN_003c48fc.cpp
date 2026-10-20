/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c48fc` (_code @ 0x3c48fc, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);
int FUN_003ef960(unsigned int, int);

extern unsigned int FUN_0014aa78(void);
extern int FUN_00192798(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003ef960. */


unsigned int FUN_003c48fc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  FUN_003ef960(temp_v2,5);
  temp_v3 = FUN_00192798();
  temp_v4 = 0;
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6 + 4);
      }
    }
    else {
      temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6 + 2);
    }
  }
  else {
    temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6);
  }
  FUN_003283ac(temp_v4);
  return 1;
}

} /* extern "C" */
