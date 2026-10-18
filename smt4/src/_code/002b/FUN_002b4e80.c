/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4e80` (_code @ 0x2b4e80, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRame59407a0; /* 0xe59407a0 */
extern unsigned int uRame59407a4; /* 0xe59407a4 */

extern int aeabi_uidivmod(int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

int FUN_002b4e80(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = (param_2 + 3U) & 0xfffffffc;
  temp_v0 = aeabi_uidivmod(param_3 - (temp_v2 - param_2),0xcc);
  if (temp_v0 == 0) {
    return 0;
  }
  if ((int)uRame59407a0 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = uRame59407a0 & 1;
    if (temp_v1 != 0) {
      temp_v2 = uRame59407a4;
    }
    temp_v0 = 0;
    if (temp_v1 != 0) {
      do {
        if (*(unsigned short *)(temp_v2 + temp_v0 * 0x2c + 0x20) == 0x59403c80) {
          return temp_v2 + temp_v0 * 0x2c;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v1);
    }
  }
  if ((int)uRame59407a0 <= (int)temp_v1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned int *)(temp_v1 * 0x2c + 0x28) = temp_v1 * 0x2c + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
