/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022101c` (_code @ 0x22101c, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5300(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00447000; /* 0x447000 */
extern unsigned int DAT_00447004; /* 0x447004 */
extern unsigned int DAT_00447008; /* 0x447008 */
extern unsigned int DAT_0044700c; /* 0x44700c */

/* Supplied declaration required: FUN_002c5300. */


void FUN_0022101c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x100;
  FUN_002c5300(0x100,0x100,0,0x15000,1);
  temp_v1 = 0x100;
  DAT_00447000 = temp_v0;
  FUN_002c5300(0x100,0x100,0,0xfc00,1);
  temp_v0 = 0x100;
  DAT_00447004 = temp_v1;
  FUN_002c5300(0x100,0x100,0,0x6900,1);
  temp_v1 = 0x100;
  DAT_00447008 = temp_v0;
  FUN_002c5300(0x100,0x100,0,0x1f800,1);
  DAT_0044700c = temp_v1;
  return;
}

} /* extern "C" */
