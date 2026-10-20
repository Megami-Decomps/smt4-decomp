/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a794` (_code @ 0x43a794, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0043ab80(unsigned int *);


int FUN_0043a794(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = in_r3;
  temp_v0 = FUN_0043ab80(temp_v1);
  if (temp_v0 < 0) {
    FUN_00195fc8();
  }
  return (int)(char)temp_v1[0];
}

} /* extern "C" */
