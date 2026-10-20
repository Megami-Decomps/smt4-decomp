/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011be64` (_code @ 0x11be64, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011bbb6(unsigned int *);
int FUN_002e6e14(void);
int FUN_002f5966(...);

typedef int romwright_code(...);
extern unsigned char DAT_0055a7b0; /* 0x55a7b0 */

/* Supplied declaration required: FUN_0011bbb6. */
extern int FUN_00122770(int);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f5966. */
extern int FUN_002f9ef8(int);


int FUN_0011be64(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *q;
  
  *param_1 = (unsigned int)&DAT_0055a7b0;
  FUN_0011bbb6(param_1);
  temp_v1 = 0;
  do {
    if ((int *)param_1[temp_v1 + 0x28] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[temp_v1 + 0x28] + 4))(param_1[temp_v1 + 0x28]);
    }
    if ((int *)param_1[temp_v1 + 0x13] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[temp_v1 + 0x13] + 4))(param_1[temp_v1 + 0x13]);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x46] + 4))(param_1[0x46]);
  }
  temp_v1 = FUN_002f5966(param_1 + 0x3a);
  temp_v1 = FUN_00122770(temp_v1 - 0x40);
  temp_v1 = FUN_002f5966(temp_v1 - 0x38);
  q = (int *)(FUN_002f9ef8(temp_v1 - 0xc) - 0x24);
  for (temp_v0 = *q; temp_v0 != q[1]; temp_v0 = temp_v0 + 0xc) {
  }
  FUN_002e6e14();
  temp_v1 = FUN_002f5966((int)q - 0x38);
  return temp_v1 - 8;
}

} /* extern "C" */
