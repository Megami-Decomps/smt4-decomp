/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9ebc` (_code @ 0x1a9ebc, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2368(unsigned int);
int FUN_002c415c(int);

typedef int romwright_code(...);
extern unsigned char DAT_00464fa8; /* 0x464fa8 */

/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c415c. */
extern unsigned int FUN_003578b8(void);


unsigned char FUN_001a9ebc(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) != 0) {
    FUN_002b2368(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 0xc));
    if (*(int **)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) + 0x18) + 4))();
    }
    FUN_002c415c((*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)));
    (*(int *)((unsigned char *)&DAT_00464fa8 + 0x4)) = 0;
  }
  temp_v0 = FUN_003578b8();
  return (temp_v0 & 0x80000000) == 0;
}

} /* extern "C" */
