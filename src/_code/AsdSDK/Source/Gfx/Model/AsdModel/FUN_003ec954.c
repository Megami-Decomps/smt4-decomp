/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec954` (_code @ 0x3ec954, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00471b94; /* 0x471b94 */
extern unsigned int DAT_00471b98; /* 0x471b98 */
extern unsigned int DAT_00471b9c; /* 0x471b9c */
extern unsigned char DAT_00471ba0; /* 0x471ba0 */
extern unsigned int DAT_004e9ba8; /* 0x4e9ba8 */

/* Supplied declaration required: FUN_002c3b00. */


void FUN_003ec954(void)

{
/* irregular: 1 native warning(s); review required */
  DAT_004e9ba8 = 0;
  FUN_002c3b00(&DAT_004e9ba8);
  DAT_00471b94 = 0;
  DAT_00471b9c = 0;
  DAT_00471ba0 = 1;
  DAT_00471b98 = 0;
  return;
}
