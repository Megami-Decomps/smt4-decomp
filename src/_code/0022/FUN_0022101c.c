/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022101c` (_code @ 0x22101c, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00447000; /* 0x447000 */
extern unsigned int DAT_00447004; /* 0x447004 */
extern unsigned int DAT_00447008; /* 0x447008 */
extern unsigned int DAT_0044700c; /* 0x44700c */

extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_0022101c(void)

{
  DAT_00447000 = FUN_002c5300(0x100,0x100,0,0x15000,1);
  DAT_00447004 = FUN_002c5300(0x100,0x100,0,0xfc00,1);
  DAT_00447008 = FUN_002c5300(0x100,0x100,0,0x6900,1);
  DAT_0044700c = FUN_002c5300(0x100,0x100,0,0x1f800,1);
  return;
}
