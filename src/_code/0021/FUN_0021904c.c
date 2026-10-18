/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021904c` (_code @ 0x21904c, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0025779c. */
/* Supplied declaration required: FUN_002840b8. */
extern int FUN_002a89e4(void);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002ae464(int);


void FUN_0021904c(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  short temp_v3;
  
  temp_v1 = FUN_002ae464(*param_1);
  temp_v2 = *param_1;
  if (temp_v1 != 0) {
    FUN_002840b8();
    temp_v3 = *(short *)(temp_v2 + 0x22);
  }
  else {
    FUN_002ae3f0();
    temp_v3 = *(short *)(temp_v2 + 0x24);
  }
  temp_v1 = FUN_002ae464(*param_2);
  temp_v2 = *param_2;
  if (temp_v1 != 0) {
    FUN_002840b8();
    temp_v0 = *(short *)(temp_v2 + 0x22);
  }
  else {
    FUN_002ae3f0();
    temp_v0 = *(short *)(temp_v2 + 0x24);
  }
  if (temp_v3 == temp_v0) {
    if (param_1[1] < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v1 = FUN_002a89e4();
      temp_v3 = *(short *)(temp_v1 + 0x46);
    }
    if (param_2[1] < 0) {
      temp_v0 = 0;
    }
    else {
      temp_v1 = FUN_002a89e4();
      temp_v0 = *(short *)(temp_v1 + 0x46);
    }
    if (temp_v3 == temp_v0) {
      FUN_0025779c(param_1,param_2);
      return;
    }
  }
  return;
}
