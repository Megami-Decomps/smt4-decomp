/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128e50` (_code @ 0x128e50, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int FUN_002b5b38(void);


unsigned int FUN_00128e50(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002b5b38();
  return temp_v0;
}
