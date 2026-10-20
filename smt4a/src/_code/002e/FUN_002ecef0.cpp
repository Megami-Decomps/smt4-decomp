/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecef0` (_code @ 0x2ecef0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d300(void);
int FUN_00120d60(void);
int FUN_002e75fa(void);
int FUN_002ea4bc(void);
int FUN_003104fc(unsigned char *);
int FUN_00310506(unsigned char *);

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_0010d300. */
/* Supplied declaration required: FUN_00120d60. */
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002ea4bc. */
/* Supplied declaration required: FUN_003104fc. */
/* Supplied declaration required: FUN_00310506. */


void FUN_002ecef0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_00310506(&DAT_0062e6a0);
  FUN_0010d300();
  temp_v0 = FUN_002ea4bc();
  if (temp_v0 != 0) {
    FUN_002ea4bc();
    FUN_002e75fa();
  }
  else {
    temp_v0 = FUN_002e760a(0x80);
    if (temp_v0 != 0) {
      FUN_00120d60();
    }
  }
  FUN_003104fc(&DAT_0062e6a0);
  return;
}

} /* extern "C" */
