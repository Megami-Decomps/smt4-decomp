/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117828` (_code @ 0x117828, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int FUN_002f3214(unsigned int *, int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00559ec4; /* 0x559ec4 */

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002f3214. */


unsigned int * FUN_00117828(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  *param_1 = (unsigned int)&DAT_00559ec4;
  while ((unsigned int *)param_1[2] != (unsigned int *)param_1[3]) {
    temp_v1 = *(unsigned int *)param_1[2];
    temp_v2 = (unsigned char)temp_v1;
    FUN_002f3214(param_1,temp_v2 >> 4,temp_v1 & 0xf);
  }
  for (temp_v0 = param_1[2]; temp_v0 != param_1[3]; temp_v0 = temp_v0 + 8) {
  }
  asdOperatorDeleteArray();
  return param_1;
}

} /* extern "C" */
