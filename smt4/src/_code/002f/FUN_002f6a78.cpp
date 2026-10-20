/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6a78` (_code @ 0x2f6a78, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00263588(unsigned int);
int FUN_0029c2cc(int, int);
int FUN_002a4d14(void);
int FUN_002a775c(unsigned int);
int FUN_002c415c(unsigned int);

extern unsigned int DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_00263588. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002a775c. */
extern unsigned long long FUN_002c08f0(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002f6a78(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  FUN_002a4d14();
  temp_v4 = FUN_002c08f0(param_1);
  temp_v2 = (int)((unsigned long long)temp_v4 >> 0x20);
  temp_v0 = (int)temp_v4;
  temp_v1 = *(int *)(temp_v0 + 0x5e8);
  if (temp_v1 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0x5ec);
  }
  if ((temp_v1 != 0 && temp_v2 != 5) && (temp_v2 != 6)) {
    FUN_0029c2cc(temp_v1,0);
  }
  *(unsigned int *)(temp_v0 + 0x5e8) = 0;
  temp_v3 = 0;
  *(unsigned int *)(temp_v0 + 0x5e4) = 0;
  do {
    temp_v2 = temp_v0 + temp_v3 * 4;
    FUN_00263588(*(unsigned int *)(temp_v2 + 0x6c8));
    FUN_002a775c(*(unsigned int *)(temp_v2 + 0x658));
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x1c);
  FUN_002c415c(DAT_0043dfc0);
  DAT_0043dfc0 = 0;
  return;
}

} /* extern "C" */
