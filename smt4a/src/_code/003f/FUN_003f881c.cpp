/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f881c` (_code @ 0x3f881c, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00168750(unsigned int, int, int, unsigned char *, unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char LAB_00226550; /* 0x226550 */

/* Supplied declaration required: FUN_00168750. */


unsigned int FUN_003f881c(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  if (param_1 >= 0x50) {
    return 0;
  }
  temp_v0 = param_1 * 0x10;
  puVar3 = (unsigned int *)(temp_v0 + 0x5e2214);
  if (*(int *)(temp_v0 + 0x5e2218) == 0) {
    if (*(char *)(temp_v0 + 0x5e2220) != '\0') {
      return 0;
    }
    if (param_2 != 0) {
      temp_v1 = *puVar3;
    }
    else {
      temp_v1 = *puVar3;
    }
    FUN_00168750(temp_v1,temp_v0 + 0x5e2218,param_2 != 0,&LAB_00226550,puVar3);
  }
  return 1;
}

} /* extern "C" */
