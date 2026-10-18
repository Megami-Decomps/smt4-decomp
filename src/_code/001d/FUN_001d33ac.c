/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d33ac` (_code @ 0x1d33ac, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int *DAT_00447a98; /* 0x447a98 */
extern signed char DAT_0049f934; /* 0x49f934 */

/* Supplied declaration required: FUN_002bffac. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002dfe88. */


void FUN_001d33ac(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_002bffac();
  piVar1 = DAT_00447a98;
  DAT_00447a98[2] = param_1;
  piVar1[3] = param_2;
  if (((DAT_0049f934 == '\0') && (temp_v0 = FUN_002c0ba8(0x16), temp_v0 != 0)) && (*DAT_00447a98 == 0))
  {
    FUN_002dfe88(0);
    return;
  }
  return;
}
