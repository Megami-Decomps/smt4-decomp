/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001158c4` (_code @ 0x1158c4, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00559854; /* 0x559854 */

extern unsigned int FUN_001068b4(void);
extern unsigned int FUN_0010c0d0(void);
extern unsigned int FUN_0010c79c(void);
extern int *FUN_002e4e86(int *, int *);
extern unsigned int *FUN_002e6dac(void);
extern int FUN_002e760a(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int * FUN_001158c4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar6;
  int temp_v3 [2];
  
  *param_1 = (unsigned int)&DAT_00559854;
  piVar6 = (int *)(param_1 + 1);
  *piVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  temp_v3[1] = 0x20;
  temp_v3[0] = 2;
  piVar1 = (int *)FUN_002e4e86(temp_v3,temp_v3 + 1);
  temp_v0 = *piVar1;
  puVar3 = (unsigned int *)FUN_002e6dac();
  *piVar6 = (int)puVar3;
  for (temp_v1 = temp_v3[0]; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    if (puVar3 != (unsigned int *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  param_1[2] = *piVar6 + temp_v3[0] * 4;
  param_1[3] = *piVar6 + temp_v0 * 4;
  temp_v1 = FUN_002e760a(4);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0010c0d0();
  }
  *(unsigned int *)*piVar6 = temp_v2;
  temp_v1 = FUN_002e760a(0xa00);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0010c79c();
  }
  *(unsigned int *)(*piVar6 + 4) = temp_v2;
  temp_v1 = FUN_002e760a(0x38);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_001068b4();
  }
  param_1[4] = temp_v2;
  return param_1;
}
