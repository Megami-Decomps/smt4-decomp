/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b46e8` (_code @ 0x2b46e8, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


/* WARNING: Control flow encountered bad instruction data */

int FUN_002b46e8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int unaff_r4;
  unsigned int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x3d8);
  if ((int)temp_v2 < 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v2 & 1;
    if (temp_v0 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x3dc);
    }
    temp_v1 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(unsigned short *)(unaff_r4 + temp_v1 * 0x2c + 0x20) == param_2) {
          return unaff_r4 + temp_v1 * 0x2c;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  if ((int)temp_v2 <= (int)temp_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned int *)(temp_v0 * 0x2c + 0x28) = temp_v0 * 0x2c + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
