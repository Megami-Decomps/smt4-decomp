/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae6cc` (_code @ 0x3ae6cc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_naviMain; /* 0x587f28 */

extern int FUN_0048e40c(int);


void FUN_003ae6cc(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = g_naviMain;
  if ((g_naviMain != 0) && (temp_v1 = FUN_0048e40c(g_naviMain + 0x68), temp_v1 != 0)) {
    *(unsigned char *)(temp_v0 + 0x7bf8) = 1;
    return;
  }
  return;
}

} /* extern "C" */
