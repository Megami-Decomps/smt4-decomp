/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00355f14` (_code @ 0x355f14, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

/* Supplied declaration required: FUN_002adbe4. */


unsigned char *
FUN_00355f14(int param_1,int *param_2,unsigned int param_3,unsigned int param_4,int param_5,
            unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_7;
  temp_v1 = param_6;
  temp_v0 = param_5;
  if ((param_1 == 0 || param_2 == (int *)0x0) || param_5 == 0) {
    register0x00000054 = (BADSPACEBASE *)0xe0e046bc;
  }
  if ((param_1 != 0 && param_2 != (int *)0x0) && param_5 != 0) {
    FUN_002adbe4(0);
    register0x00000054 =
         (BADSPACEBASE *)
         (**(romwright_code **)(*param_2 + 4))(param_2,param_1,param_3,param_4,temp_v0,temp_v1,temp_v2);
  }
  return (unsigned char *)register0x00000054;
}
