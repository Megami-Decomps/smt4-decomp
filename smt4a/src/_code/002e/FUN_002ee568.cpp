/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee568` (_code @ 0x2ee568, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e95c4(int, unsigned int);

extern unsigned char DAT_0055852c; /* 0x55852c */

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e95c4. */
extern int FUN_002e9906(unsigned int *);
extern int FUN_002e9930(int);
extern unsigned int FUN_002e995c(void);


int FUN_002ee568(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  *param_1 = (unsigned int)&DAT_0055852c;
  temp_v0 = FUN_002e9906(param_1 + 3);
  temp_v0 = FUN_002e9930(temp_v0 + 0x1c);
  temp_v0 = FUN_002e9930(temp_v0 + 0x1c);
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned char *)(temp_v0 + 0x20) = 0;
  *(unsigned char *)(temp_v0 + 0x21) = 1;
  *(unsigned char *)(temp_v0 + 0x22) = 0;
  temp_v1 = FUN_002e760a(0x20);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_002e995c();
  }
  *(unsigned int *)(temp_v0 - 0x40) = temp_v2;
  FUN_002e95c4(temp_v0 - 0x44,param_2);
  return temp_v0 - 0x44;
}

} /* extern "C" */
