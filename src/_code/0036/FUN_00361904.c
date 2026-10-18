/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361904` (_code @ 0x361904, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_002bb284(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


int FUN_00361904(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  FUN_002bb378();
  temp_v0 = FUN_002bb284(param_1,(unsigned int *)&temp_v1);
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x361924);
  }
  FUN_002bb308();
  return (int)(char)temp_v1;
}
