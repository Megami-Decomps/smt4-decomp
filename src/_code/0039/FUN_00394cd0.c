/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394cd0` (_code @ 0x394cd0, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00232b68. */
/* Supplied declaration required: FUN_00250d84. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b4670. */


unsigned int FUN_00394cd0(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = param_1;
  FUN_002b4670();
  if (temp_v0 != 0) {
    temp_v1 = -1;
    FUN_00232b68(0xffffffff,temp_v0,param_2,0,0);
    temp_v4 = temp_v1 == 0;
    temp_v1 = FUN_002a8764();
    temp_v3 = 0;
    do {
      temp_v2 = (int)*(char *)(temp_v1 + temp_v3 + 0x90f0);
      if ((-1 < temp_v2) && (FUN_00232b68(temp_v2,temp_v0,param_2,0,0), temp_v2 == 0)) {
        temp_v4 = 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    if (temp_v4) {
      if ((param_2 == 0) && ((*(unsigned char *)(temp_v0 + 0x6e) & 1) == 0)) {
        FUN_00250d84(param_1,1);
      }
      return 0;
    }
  }
  return 1;
}
