/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274d14` (_code @ 0x274d14, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);
int FUN_00353b00(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int *DAT_0058104c; /* 0x58104c */
extern signed char DAT_005f1614; /* 0x5f1614 */

/* Supplied declaration required: FUN_00152f44. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00353b00. */


void FUN_00274d14(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_00152f44();
  piVar1 = DAT_0058104c;
  DAT_0058104c[2] = param_1;
  piVar1[3] = param_2;
  if ((((DAT_005f1614 == '\0') && (temp_v0 = FUN_0018719c(0x49a), temp_v0 != 0)) &&
      ((temp_v0 = FUN_0018719c(0xc), temp_v0 == 0 || (temp_v0 = FUN_0018719c(0x10), temp_v0 != 0)))) &&
     (*DAT_0058104c == 0)) {
    FUN_00353b00(0);
    return;
  }
  return;
}

} /* extern "C" */
