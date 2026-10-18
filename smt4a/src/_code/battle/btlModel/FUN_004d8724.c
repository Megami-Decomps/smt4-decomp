/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8724` (_code @ 0x4d8724, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_004d876c; /* 0x4d876c */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0040aa90. */
extern int FUN_0040ac08(void);


void FUN_004d8724(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*param_1 == 0) {
    temp_v0 = 0x20;
    FUN_00178b04(0x20,&LAB_004d876c,0x95);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0040ac08();
    }
    *param_1 = temp_v1;
    FUN_0040aa90();
    return;
  }
  return;
}
