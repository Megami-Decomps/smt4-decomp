/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361b14` (_code @ 0x361b14, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_002bb5c4(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c14f4. */


int FUN_00361b14(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  FUN_002bb6b8();
  temp_v0 = FUN_002bb5c4(param_1,(unsigned int *)&temp_v1);
  if (temp_v0 < 0) {
    FUN_002c14f4(temp_v0,0x361b34);
  }
  FUN_002bb648();
  return (int)(char)temp_v1;
}
