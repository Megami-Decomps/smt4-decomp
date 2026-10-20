/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c958` (_code @ 0x43c958, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_001a3010(unsigned int);


void FUN_0043c958(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_001a3010(0x401);
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = -0x375f3004;
  }
  if (temp_v0 >= 0 || temp_v0 == temp_v1) {
    return;
  }
  FUN_00195fc8();
  return;
}

} /* extern "C" */
