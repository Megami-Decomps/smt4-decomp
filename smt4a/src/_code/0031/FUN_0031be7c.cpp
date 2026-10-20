/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031be7c` (_code @ 0x31be7c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00203a6c(int);
int FUN_0035bb70(void);
int FUN_0035bbc4(void);
int FUN_003d8f20(void);

extern unsigned int DAT_0057f558; /* 0x57f558 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00203a5c(void);
/* Supplied declaration required: FUN_00203a6c. */
/* Supplied declaration required: FUN_0035bb70. */
/* Supplied declaration required: FUN_0035bbc4. */
/* Supplied declaration required: FUN_003d8f20. */


unsigned int FUN_0031be7c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00203a5c();
  if (temp_v0 != 0) {
    FUN_003d8f20();
    FUN_00203a6c(0);
  }
  temp_v0 = FUN_00163e40(DAT_0057f558);
  if (temp_v0 != 0) {
    FUN_0035bb70();
    FUN_0035bbc4();
    FUN_001631d0(DAT_0057f558,0);
  }
  return 1;
}

} /* extern "C" */
