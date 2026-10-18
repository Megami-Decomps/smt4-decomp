/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc0e0` (_code @ 0x2bc0e0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int DAT_004d4704; /* 0x4d4704 */

/* Supplied declaration required: FUN_002ae038. */


void FUN_002bc0e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  DAT_004d4704 = 0x3f800000;
  temp_v0 = 0x3f800000;
  temp_v1 = 0x3f800000;
  temp_v2 = 0x3f800000;
  temp_v3 = 0x3f800000;
  FUN_002ae038(&temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
