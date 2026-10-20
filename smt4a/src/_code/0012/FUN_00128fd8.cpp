/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128fd8` (_code @ 0x128fd8, 0x9a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00134dfe(int *, int, unsigned int);
int FUN_0030d010(int *, int);
int FUN_0030d01e(...);

/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_00134dfe. */
/* Supplied declaration required: FUN_0030d010. */
/* Supplied declaration required: FUN_0030d01e. */


void FUN_00128fd8(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned char temp_v5;
  
  temp_v5 = 0;
  temp_v4 = *(int *)(param_2 + 4);
  temp_v2 = (*(int *)(param_2 + 8) - temp_v4) >> 3;
  while (temp_v3 = temp_v2, 0 < temp_v3) {
    temp_v2 = temp_v3 / 2;
    temp_v0 = temp_v2 * 8 + temp_v4;
    temp_v1 = FUN_0030d01e(temp_v0,param_3);
    if (temp_v1 != 0) {
      temp_v4 = temp_v0 + 8;
      temp_v2 = (temp_v3 - temp_v2) - 1;
    }
  }
  if ((*(int *)(param_2 + 8) == temp_v4) || (temp_v2 = FUN_0030d01e(param_3,temp_v4), temp_v2 != 0)) {
    piVar6 = (int *)(param_2 + 4);
    temp_v3 = *piVar6;
    temp_v2 = *(int *)(param_2 + 8);
    if ((temp_v2 != *(int *)(param_2 + 0xc)) && (temp_v2 == temp_v4)) {
      *(int *)(param_2 + 8) = temp_v2 + 8;
      FUN_0030d010(piVar6,temp_v2);
    }
    else {
      FUN_00134dfe(piVar6,temp_v4,param_3);
    }
    temp_v4 = *piVar6 + ((temp_v4 - temp_v3) >> 3) * 8;
    temp_v5 = 1;
  }
  *param_1 = temp_v4;
  *(unsigned char *)(param_1 + 1) = temp_v5;
  return;
}

} /* extern "C" */
