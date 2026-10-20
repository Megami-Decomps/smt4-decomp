/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003305b0` (_code @ 0x3305b0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(int, int, unsigned int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern short DAT_005e2058; /* 0x5e2058 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_002deb84(void);


int FUN_003305b0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002deb84();
  temp_v1 = btlGetMainState();
  temp_v4 = 1;
  temp_v3 = 0;
  if (temp_v3 < DAT_005e2058) {
    do {
      temp_v2 = *(int *)(temp_v1 + 0x4d64);
      FUN_0021bdac(temp_v2,temp_v3,temp_v0,0xd,0,0);
      if (temp_v2 != 1) {
        temp_v4 = temp_v2;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < DAT_005e2058);
  }
  return temp_v4;
}

} /* extern "C" */
