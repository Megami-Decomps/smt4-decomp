/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353b58` (_code @ 0x353b58, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_0023a270(unsigned int, int *, unsigned int);
extern unsigned int FUN_002b5f84(void);
/* Supplied declaration required: FUN_00353760. */
/* Supplied declaration required: FUN_003537e8. */


void FUN_00353b58(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_002b5f84();
  temp_v1 = FUN_0023a270(temp_v0,&temp_v2,*param_1);
  if ((-1 < temp_v1) && (temp_v1 = temp_v2, FUN_00353760(), -1 < temp_v1)) {
    FUN_003537e8(temp_v2);
  }
  return;
}
