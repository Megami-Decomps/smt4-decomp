/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0df8` (_code @ 0x2e0df8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238f44(unsigned int);
int FUN_00263308(int, unsigned int, unsigned int);
int FUN_00358664(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00464fa8; /* 0x464fa8 */

/* Supplied declaration required: FUN_00238f44. */
/* Supplied declaration required: FUN_00263308. */
/* Supplied declaration required: FUN_00358664. */


void FUN_002e0df8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4))[6];
  FUN_00263308(temp_v0,*(*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4)),(*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4))[1]);
  if (-1 < temp_v0) {
    FUN_00358664((*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4))[6],1);
    FUN_00238f44((*(unsigned int * *)((unsigned char *)&DAT_00464fa8 + 0x4))[6]);
    return;
  }
  return;
}

} /* extern "C" */
