/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f6c8` (_code @ 0x37f6c8, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003eaf20(void);

extern int btlGetMainState(void);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */
extern int __aeabi_idivmod(int, unsigned int);


unsigned int FUN_0037f6c8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  FUN_003eaf20();
  if ((temp_v1 != 0) &&
     (temp_v1 = __aeabi_idivmod(*(int *)(temp_v1 + 600) * 100,*(unsigned int *)(temp_v1 + 0x25c)),
     temp_v1 <= temp_v0)) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
