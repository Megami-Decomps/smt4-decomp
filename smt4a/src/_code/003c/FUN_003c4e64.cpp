/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4e64` (_code @ 0x3c4e64, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(unsigned int);

extern int DAT_00588c44; /* 0x588c44 */

extern int FUN_001ab854(int);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_0032faf4(void);
extern unsigned int FUN_003af94c(unsigned int);
extern unsigned int FUN_003b6128(void);


unsigned int FUN_003c4e64(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  if (DAT_00588c44 != 0) {
    if (temp_v0 != 0) {
      FUN_003283ac(*(unsigned int *)(DAT_00588c44 + 0x75cc));
      return 1;
    }
    temp_v0 = FUN_001ab854((int)*(char *)(DAT_00588c44 + *(int *)(DAT_00588c44 + 0x74c0) * 0x150 +
                                       0x442c));
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + *(int *)(DAT_00588c44 + 0x75c8) * 2 + 0x34);
  }
  else {
    temp_v2 = FUN_0032faf4();
    if (temp_v2 != 0) {
      temp_v1 = 0;
    }
    else if (temp_v0 != 0) {
      temp_v1 = FUN_003b6128();
    }
    else {
      temp_v1 = FUN_003af94c(0);
    }
  }
  FUN_003283ac(temp_v1);
  return 1;
}

} /* extern "C" */
