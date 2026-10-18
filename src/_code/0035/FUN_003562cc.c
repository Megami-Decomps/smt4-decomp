/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003562cc` (_code @ 0x3562cc, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_004d4394; /* 0x4d4394 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int FUN_00239f84(int);
extern unsigned int *FUN_002b5d0c(unsigned int *);
extern int FUN_003569dc(unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_003562cc(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2 [2];
  
  if ((unsigned int)param_3[2] >= 0x201) {
    temp_v0 = -0x1f1fb941;
  }
  else {
    temp_v1 = 0;
    temp_v2[0] = FUN_00239f84(param_1);
    temp_v0 = FUN_003569dc(temp_v2,(unsigned int *)&temp_v1,*(unsigned int *)(param_1 + 8),
                         *(unsigned int *)(param_1 + 0xc),*param_3,param_3[1],param_3[2]);
    if (-1 < temp_v0) {
      puVar2 = (unsigned int *)FUN_002b5d0c(&DAT_004d4394);
      if (puVar2 != (unsigned int *)0x0) {
        puVar2[1] = temp_v1;
        *puVar2 = (unsigned int)"暄5昜5";
      }
      *param_2 = (unsigned int)puVar2;
      if (puVar2 != (unsigned int *)0x0) {
        temp_v0 = 0;
      }
      else {
        software_interrupt(0x23);
        temp_v0 = -0x279fb9a7;
      }
    }
  }
  return temp_v0;
}
