/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f056c` (_code @ 0x2f056c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
extern int __aeabi_idivmod(int, int);


unsigned int FUN_002f056c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = scrGetArg(0);
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v3 = 0;
  do {
    temp_v1 = btlGetMainState();
    puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
    temp_v2 = *puVar3;
    if (((temp_v2 & 0x10) != 0 && (temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) {
      temp_v5 = temp_v5 + 1;
      temp_v4 = temp_v4 + (unsigned int)(unsigned short)puVar3[0x73];
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  temp_v3 = __aeabi_idivmod(temp_v4,temp_v5);
  scrSetResult(temp_v0 <= temp_v3);
  return 1;
}

} /* extern "C" */
