/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324d70` (_code @ 0x324d70, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int scrGetArg(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_00324d70(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v5 = 0;
  if (temp_v2 == 0) {
    temp_v5 = 7;
  }
  else if (temp_v2 == 1) {
    temp_v5 = 10;
  }
  else if (temp_v2 == 2) {
    temp_v5 = 0xb;
  }
  temp_v0 = 0;
  temp_v2 = 0;
  do {
    temp_v3 = btlGetMainState();
    puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v2 * 0x288);
    temp_v4 = *puVar5;
    if ((temp_v4 & 0x10) != 0 && (temp_v4 & 1) != 0) {
      temp_v6 = (temp_v4 & 0x40) == 0;
      if (temp_v6) {
        temp_v4 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
      }
      if ((temp_v6 && temp_v4 == temp_v1) && (temp_v0 = 1, *(short *)((int)puVar5 + temp_v5 * 2 + 0x72) < 1))
      {
        scrSetResult(0);
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(temp_v0);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
