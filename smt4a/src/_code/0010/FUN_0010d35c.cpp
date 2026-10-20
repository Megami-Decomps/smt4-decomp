/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d35c` (_code @ 0x10d35c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int FUN_002e6e5c(int *);
int sharedRefRelease(void);

typedef int romwright_code(...);
extern int DAT_005949dc; /* 0x5949dc */
extern int *DAT_00594abc; /* 0x594abc */
extern unsigned char DAT_00630344; /* 0x630344 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: sharedRefRelease. */


void FUN_0010d35c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,&DAT_00630344);
  if (DAT_005949dc != 0) {
    if (*(int *)(DAT_005949dc + 4) != 1) {
      sharedRefRelease();
    }
    else {
      sharedRefRelease();
      DAT_005949dc = 0;
      if (DAT_00594abc != (int *)0x0) {
        (**(romwright_code **)(*DAT_00594abc + 4))();
      }
      DAT_00594abc = (int *)0x0;
    }
  }
  FUN_002e6e5c(&uStack_20);
  return;
}

} /* extern "C" */
