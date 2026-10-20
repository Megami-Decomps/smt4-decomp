/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2afc` (_code @ 0x2e2afc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

extern unsigned int FUN_002a4878(int);
extern unsigned int FUN_003da8f4(int, unsigned int);


unsigned int FUN_002e2afc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0057f108;
  if (DAT_0057f108 != 0) {
    temp_v1 = FUN_002a4878(DAT_0057f108 + 0x40);
    temp_v1 = FUN_003da8f4((int)*(char *)(temp_v0 + 0xa4),temp_v1);
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
