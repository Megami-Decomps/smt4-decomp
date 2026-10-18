/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314c38` (_code @ 0x314c38, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_00325140. */
extern int FUN_0048e40c(int);


void FUN_00314c38(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00587f28;
  FUN_00325140();
  if ((temp_v0 != 0) && (temp_v1 = FUN_0048e40c(temp_v0 + 0x68), temp_v1 != 0)) {
    *(unsigned char *)(temp_v0 + 0x7bf8) = 1;
    return;
  }
  return;
}
