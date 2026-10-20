/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001006f4` (_code @ 0x1006f4, 0x82 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010095c(int, int, unsigned int, unsigned int, int, unsigned int, unsigned int);
int FUN_002e3338(int, int, unsigned int, unsigned int);
int wstrlen(...);
int asdOperatorNewC(int);
int FUN_002e342c(void);
int FUN_002e3494(...);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int libc_strcat(void);
/* Supplied declaration required: FUN_0010095c. */
/* Supplied declaration required: FUN_002e3338. */
/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: asdOperatorNewC. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e3494. */


unsigned long long FUN_001006f4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = 0;
  temp_v3 = param_1;
  FUN_0010095c(0,0,param_2,param_3,param_1,param_2,param_3);
  if (temp_v0 == 0) {
    if (((int)param_2 < 0) || (param_2 >= 0x17)) {
      param_2 = 0;
    }
    temp_v0 = 0;
    FUN_002e3338(0,0,*(unsigned int *)
                      (
                      "壐V墂V墐V姖V妯V壀V姳V妯V妼V執V壦V埏V夌V壸V妈V夼V奢V够V堸V垵V塞V堢V墩V"
                      + param_2 * 4),param_3);
  }
  temp_v1 = temp_v0;
  if (*(int *)(param_1 + 4) != 0) {
    temp_v1 = wstrlen();
    temp_v2 = wstrlen(temp_v0);
    asdOperatorNewC(temp_v1 + temp_v2 + 1);
    FUN_002e342c();
    temp_v1 = libc_strcat();
    FUN_002e3494(*(unsigned int *)(param_1 + 4));
    FUN_002e3494(temp_v0);
  }
  *(int *)(param_1 + 4) = temp_v1;
  return romwright_piece_4_4(temp_v3,param_1);
}

} /* extern "C" */
