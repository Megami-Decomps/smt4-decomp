/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a947c` (_code @ 0x3a947c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);
int scrSetResult(unsigned int);

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
extern int FUN_003ecd24(unsigned int, unsigned short);


unsigned int FUN_003a947c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  temp_v3 = FUN_003ecd24(temp_v2,temp_v0);
  if (temp_v3 == 0) {
    temp_v4 = 0xffffffff;
  }
  else {
    temp_v4 = 0xffffffff;
    if (temp_v1 == 0) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 2);
    }
    else if (temp_v1 == 1) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
    }
    else if (temp_v1 == 2) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 6);
    }
    else if (temp_v1 == 3) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    }
  }
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
