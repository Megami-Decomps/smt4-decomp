/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8cc4` (_code @ 0x2f8cc4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int FUN_002e6e5c(int *);
int FUN_002f91dc(unsigned int);

extern unsigned char DAT_00594958; /* 0x594958 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002f91dc. */


void FUN_002f8cc4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if ((*(signed char *)((unsigned char *)&DAT_00594958 + 0x14)) != '\0') {
    temp_v0 = FUN_002ea714();
    FUN_002e6e34(&uStack_18,temp_v0);
    FUN_002f91dc(param_1);
    FUN_002e6e5c(&uStack_18);
    return;
  }
  FUN_002f91dc(param_1);
  return;
}

} /* extern "C" */
