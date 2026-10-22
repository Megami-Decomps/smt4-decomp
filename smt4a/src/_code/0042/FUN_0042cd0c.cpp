/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042cd0c` (_code @ 0x42cd0c, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd38(...);
int __aeabi_vec_ctor_nocookie_nodtor(...);
int nn_os(...);
int software_interrupt(...);

/* stack frame of param_6: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern unsigned char LAB_0018b630; /* 0x18b630 */
extern int FUN_002e306c(...); /* 0x2e306c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd38. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: nn_os. */


unsigned int *
FUN_0042cd0c(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
            unsigned int *param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  unsigned int **ppuVar1;
  unsigned int temp_v0;
  unsigned int *temp_v1;
  unsigned int *puStack_44;
  unsigned int *temp_v2;
  unsigned char temp_v3 [4];
  
  ppuVar1 = &temp_v1;
  if ((int)param_3 >= 11) {
    temp_v3[0] = (unsigned char)param_4;
    temp_v1 = param_1;
    puStack_44 = param_2;
    temp_v2 = param_3;
    nn_os(&temp_v1,param_3,FUN_002e306c);
    return (unsigned int *)ppuVar1;
  }
  __aeabi_vec_ctor_nocookie_nodtor(&temp_v2,&LAB_0018b630,4,10);
  if ((int)param_3 < 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (unsigned int)param_3 & 1;
    if (temp_v0 == 1) {
      temp_v2 = *(unsigned int **)*param_2;
    }
  }
  for (; (int)temp_v0 < (int)param_3; temp_v0 = temp_v0 + 2) {
    *(unsigned int *)(temp_v3 + (temp_v0 * 4 - 4)) = *(unsigned int *)param_2[temp_v0];
    *(unsigned int *)(temp_v3 + temp_v0 * 4) = *(unsigned int *)param_2[temp_v0 + 1];
  }
  if (param_3 != (unsigned int *)0x1) {
    temp_v1 = param_5;
    puStack_44 = (unsigned int *)param_6;
    FUN_0017fd38(param_1,&temp_v2,param_3,param_4);
    return param_1;
  }
  *param_1 = 0;
  software_interrupt(0x24);
  return temp_v2;
}

} /* extern "C" */
