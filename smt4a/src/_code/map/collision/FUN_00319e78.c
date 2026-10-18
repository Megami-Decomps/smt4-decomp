/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319e78` (_code @ 0x319e78, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0058021c; /* 0x58021c */
extern unsigned int DAT_00580220; /* 0x580220 */
extern unsigned int DAT_00580224; /* 0x580224 */
extern unsigned int DAT_00580228; /* 0x580228 */

/* Supplied declaration required: FUN_001630d4. */


void FUN_00319e78(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x100;
  FUN_001630d4(0x100,0x100,0,0x15000,1);
  temp_v1 = 0x100;
  DAT_0058021c = temp_v0;
  FUN_001630d4(0x100,0x100,0,0xfc00,1);
  temp_v0 = 0x100;
  DAT_00580220 = temp_v1;
  FUN_001630d4(0x100,0x100,0,0x6900,1);
  temp_v1 = 0x100;
  DAT_00580224 = temp_v0;
  FUN_001630d4(0x100,0x100,0,0x1f800,1);
  DAT_00580228 = temp_v1;
  return;
}
