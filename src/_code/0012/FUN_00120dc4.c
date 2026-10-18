/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120dc4` (_code @ 0x120dc4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


unsigned char FUN_00120dc4(unsigned char param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002baed8();
    temp_v2 = temp_v1;
    FUN_002b4f64(temp_v1,7);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 0x33;
    *(unsigned char *)(temp_v2 + 0x10) = param_1;
    *(int **)(temp_v2 + 0x14) = param_2;
    FUN_002b4f40(temp_v1,temp_v2);
  }
  return temp_v0 != 0;
}
