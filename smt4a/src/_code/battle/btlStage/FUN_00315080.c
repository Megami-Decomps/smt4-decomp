/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00315080` (_code @ 0x315080, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057a4f8; /* 0x57a4f8 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: FUN_0040132c. */


void FUN_00315080(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = DAT_0057a4f8;
  if (DAT_0057a4f8 != 0) {
    if (*(int *)(DAT_0057a4f8 + 0xc0) != 0) {
      *(unsigned int *)(DAT_0057a4f8 + 0xc0) = 0;
    }
    FUN_002c2358();
    FUN_0040132c(temp_v1);
    *(unsigned int *)(temp_v1 + 0xa0) = 0;
    FUN_0019a5a0(DAT_0057a4f8);
    DAT_0057a4f8 = 0;
  }
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x54));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x54),0);
    return;
  }
  return;
}
