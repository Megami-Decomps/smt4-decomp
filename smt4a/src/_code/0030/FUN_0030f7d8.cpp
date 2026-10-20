/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f7d8` (_code @ 0x30f7d8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb588(unsigned int *);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002ff424(unsigned int *, unsigned int *);


int FUN_0030f7d8(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v1 = param_1;
  temp_v2 = param_2;
  temp_v0 = FUN_002ff424(param_2,(unsigned int *)&temp_v3);
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    FUN_002eb588(&temp_v1);
    if ((unsigned int *)param_2[1] < temp_v2 ||
        (unsigned int)((int)temp_v2 - (int)param_2[1]) < (unsigned int)(*param_2 <= temp_v1)) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = *param_2 - temp_v1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
