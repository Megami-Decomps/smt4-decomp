/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a7480` (_code @ 0x3a7480, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00325b84(void);
int FUN_003538d0(void);
int FUN_003ae6cc(void);

extern unsigned char DAT_005806b4; /* 0x5806b4 */

/* Supplied declaration required: FUN_00325b84. */
extern int FUN_0033e1d4(void);
/* Supplied declaration required: FUN_003538d0. */
extern int FUN_00377fe0(void);
/* Supplied declaration required: FUN_003ae6cc. */


unsigned int FUN_003a7480(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) != 0) {
    if ((*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) != 1) {
      if ((*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) != 2) {
        if (((*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) == 3) && (temp_v0 = FUN_0033e1d4(), temp_v0 != 0)) {
          (*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) = 0;
          return 1;
        }
      }
      else {
        FUN_00325b84();
        (*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) = 3;
      }
    }
    else {
      temp_v0 = FUN_00377fe0();
      if (temp_v0 != 0) {
        (*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) = 2;
      }
    }
  }
  else {
    FUN_003ae6cc();
    FUN_003538d0();
    (*(int *)((unsigned char *)&DAT_005806b4 + 0x8)) = 1;
  }
  return 0;
}

} /* extern "C" */
