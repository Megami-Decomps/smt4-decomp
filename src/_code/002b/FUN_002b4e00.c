/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4e00` (_code @ 0x2b4e00, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int uRame59407a0; /* 0xe59407a0 */
extern unsigned int uRame59407a4; /* 0xe59407a4 */

/* Supplied declaration required: FUN_002bb4c4. */
/* Supplied declaration required: FUN_002bbb2c. */


/* WARNING: Control flow encountered bad instruction data */

int FUN_002b4e00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *temp_v3;
  
  if (*(unsigned char *)(param_1 + 0x1c) == 0) {
    param_1 = param_1 + 4;
    temp_v3 = param_4;
    FUN_002bb4c4(param_1,&temp_v3,param_2,param_3);
    if (param_1 < 0) {
      FUN_002bbb2c();
    }
    *param_4 = (unsigned int)temp_v3;
    return 1;
  }
  if ((int)uRame59407a0 < 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = uRame59407a0 & 1;
    temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x1c);
    if (temp_v0 != 0) {
      temp_v2 = uRame59407a4;
    }
    temp_v1 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(unsigned short *)(temp_v2 + temp_v1 * 0x2c + 0x20) == 0x59403c80) {
          return temp_v2 + temp_v1 * 0x2c;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  if ((int)uRame59407a0 <= (int)temp_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned int *)(temp_v0 * 0x2c + 0x28) = temp_v0 * 0x2c + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
