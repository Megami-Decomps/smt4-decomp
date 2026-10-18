/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb648` (_code @ 0x3eb648, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_00464fb0; /* 0x464fb0 */
extern unsigned int DAT_00464fbc; /* 0x464fbc */
extern unsigned char DAT_00464fc0; /* 0x464fc0 */
extern unsigned int DAT_00464fd0; /* 0x464fd0 */
extern unsigned int DAT_00464fd4; /* 0x464fd4 */


void FUN_003eb648(unsigned int param_1,unsigned int param_2,int param_3)

{
  *(unsigned int *)(param_3 + 0x20) = param_1;
  *(unsigned int *)(param_3 + 0x24) = param_2;
  DAT_00464fd0 = 0;
  DAT_00464fd4 = 0;
  DAT_00464fb0 = 0;
  DAT_00464fbc = 0;
  DAT_00464fc0 = 1;
  return;
}
