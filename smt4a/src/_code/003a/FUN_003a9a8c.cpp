/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9a8c` (_code @ 0x3a9a8c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int btlGetMainState(void);
extern int FUN_0014bef4(unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(unsigned int);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int FUN_003ef960(unsigned int, unsigned int);


unsigned int FUN_003a9a8c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v0 = scrGetArg(0);
  temp_v6 = 0;
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v6 = btlGetMainState();
        temp_v6 = FUN_003ef960(temp_v6,0xc);
      }
    }
    else {
      temp_v6 = btlGetMainState();
      temp_v6 = FUN_003ef960(temp_v6,0xb);
    }
  }
  else {
    temp_v6 = btlGetMainState();
    temp_v6 = FUN_003ef960(temp_v6,10);
  }
  temp_v1 = dataTableGetEntries(temp_v6);
  temp_v2 = dataTableGetCount(temp_v6);
  temp_v3 = FUN_0014bef4(99);
  temp_v0 = 0;
  temp_v7 = 0;
  temp_v4 = 0;
  if (temp_v4 < temp_v2) {
    do {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v4 * 2);
      if (temp_v5 != 0) {
        temp_v0 = temp_v0 + temp_v5;
      }
      if (temp_v5 != 0 && temp_v3 < temp_v0) {
        temp_v7 = temp_v4 + 1;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v2);
  }
  scrSetResult(temp_v7);
  return 1;
}

} /* extern "C" */
