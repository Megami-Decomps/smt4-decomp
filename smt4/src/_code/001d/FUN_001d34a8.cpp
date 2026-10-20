/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d34a8` (_code @ 0x1d34a8, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bfdd4(void);
int FUN_002dfefc(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int *DAT_00447a98; /* 0x447a98 */
extern signed char DAT_0049f934; /* 0x49f934 */

/* Supplied declaration required: FUN_002bfdd4. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002dfefc. */


void FUN_001d34a8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_002bfdd4();
  piVar1 = DAT_00447a98;
  DAT_00447a98[2] = param_1;
  piVar1[3] = param_2;
  if (((DAT_0049f934 == '\0') && (temp_v0 = FUN_002c09d0(0x16), temp_v0 != 0)) && (*DAT_00447a98 == 0))
  {
    FUN_002dfefc(0);
    return;
  }
  return;
}

} /* extern "C" */
