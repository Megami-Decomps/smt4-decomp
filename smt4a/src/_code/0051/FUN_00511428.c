/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511428` (_code @ 0x511428, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_003df478; /* 0x3df478 */
extern unsigned char LAB_00416378; /* 0x416378 */
extern unsigned char DAT_005def48; /* 0x5def48 */

/* Supplied declaration required: FUN_002f5020. */


unsigned int FUN_00511428(unsigned int *param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_s0;
  
  *param_1 = in_s0;
  param_1[1] = in_s0;
  param_1[2] = in_s0;
  param_1[10] = 1;
  param_1[9] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  FUN_002f5020(param_1 + 0xd,&LAB_003df478,0x14,10);
  FUN_002f5020(&DAT_005def48,&LAB_00416378,0x20,0x96);
  temp_v0 = 0x96;
  temp_v1 = 0x5e0258;
  while (temp_v2 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v2) {
    (*(romwright_code *)&LAB_00416378)(temp_v1);
    temp_v1 = temp_v1 + 0x20;
  }
  return 0x5e0258;
}
