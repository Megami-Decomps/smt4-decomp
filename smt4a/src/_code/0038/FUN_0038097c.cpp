/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038097c` (_code @ 0x38097c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_003283ac(int);
int FUN_003f0e20(int, int);
int FUN_004ee568(unsigned int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern unsigned int FUN_001ab854(int);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004ee568. */


unsigned int FUN_0038097c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_004ee568(DAT_0057113c);
  if (temp_v0 < 0x6d) {
    temp_v2 = FUN_0014aa78();
    FUN_003f0e20(temp_v2,temp_v0);
    if (temp_v2 == 0) {
      FUN_003283ac(0);
      return 1;
    }
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x274) & (1 << (temp_v1 & 0xff));
  }
  else {
    temp_v3 = FUN_001ab854(temp_v0 - 0x6d);
    temp_v1 = FUN_004bd340(temp_v3,temp_v1 & 0xffff);
  }
  FUN_003283ac(temp_v1 != 0);
  return 1;
}

} /* extern "C" */
