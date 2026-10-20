/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0394` (_code @ 0x2d0394, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);
int FUN_002d8614(...);
int FUN_00384830(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005f0ca4; /* 0x5f0ca4 */
extern unsigned int DAT_005f0ca8; /* 0x5f0ca8 */
extern signed char DAT_005f0cc0; /* 0x5f0cc0 */
extern signed char DAT_005f1614; /* 0x5f1614 */

/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002d8614. */
/* Supplied declaration required: FUN_00384830. */


void FUN_002d0394(void)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  temp_v2 = 90.0f;
  temp_v1 = 80.0f;
  if ((DAT_005f0ca4 == 0) && (DAT_005f0cc0 = '\0', DAT_005f1614 == '\0')) {
    temp_v0 = in_s0;
    FUN_002b5cb4();
    if ((in_s0 < temp_v2) && (FUN_00384830(), temp_v0 < temp_v1)) {
      if (DAT_005f0cc0 != '\0') {
        return;
      }
      DAT_005f0ca8 = 7;
      DAT_005f0cc0 = '\x01';
      FUN_002d8614();
    }
    if (DAT_005f0cc0 == '\0') {
      FUN_002d8614(0);
      return;
    }
  }
  return;
}

} /* extern "C" */
