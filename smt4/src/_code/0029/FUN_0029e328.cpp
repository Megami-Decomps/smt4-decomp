/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e328` (_code @ 0x29e328, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029f848(int, int, unsigned int, int, int, int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: FUN_0029f848. */


void FUN_0029e328(unsigned char param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0043dd24;
  piVar3 = (int *)(DAT_0043dd24 + 0x754);
  if (*(int *)(DAT_0043dd24 + 0x754) < 0x14) {
    *(unsigned char *)(*(int *)(DAT_0043dd24 + 0x754) + DAT_0043dd24 + 0x758) = param_1;
    temp_v1 = *piVar3 + 1;
    *piVar3 = temp_v1;
    if (*(char *)(temp_v0 + 0x74e) == '\x02') {
      temp_v2 = 10;
    }
    else {
      temp_v2 = 9;
    }
    FUN_0029f848(temp_v0 + 0x788,temp_v1,temp_v2,1,1,1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}

} /* extern "C" */
