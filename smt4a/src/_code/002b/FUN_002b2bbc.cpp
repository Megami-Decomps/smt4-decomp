/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2bbc` (_code @ 0x2b2bbc, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int FUN_0048026c(...);

/* stack frame of param_2: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_0048026c. */


int FUN_002b2bbc(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  short temp_v3 [8];
  short temp_v4 [10];
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00192608();
  temp_v1 = (unsigned int)*param_2;
  FUN_00192608();
  FUN_0048026c(*param_1,temp_v3);
  FUN_0048026c(*param_2,temp_v4);
  temp_v2 = ((int)temp_v4[0] + (int)*(short *)(temp_v1 + 0x36)) -
          ((int)temp_v3[0] + (int)*(short *)(temp_v0 + 0x36));
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_00192608();
    temp_v1 = (unsigned int)*param_2;
    FUN_00192608();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x70) - (unsigned int)*(unsigned short *)(temp_v1 + 0x70);
  }
  return temp_v2;
}

} /* extern "C" */
