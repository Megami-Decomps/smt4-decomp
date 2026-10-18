/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate` (_code @ 0x2b5b28, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_001413d0. */
extern int FUN_0014143c(unsigned int, unsigned int);
extern int nn_os_CriticalSection_Enter(int);


/* WARNING: Control flow encountered bad instruction data */

void nn_fnd_UnitHeapTemplate_nn_os_LockPolicy_Object_nn_os_CriticalSection_Allocate
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int unaff_r7;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_20;
  unsigned int *puStack_1c;
  unsigned int uStack_18;
  
  iStack_20 = nn_os_CriticalSection_Enter(param_1 + 0x30);
  puStack_1c = *(unsigned int **)(param_1 + 0x24);
  if (puStack_1c != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x24) = *puStack_1c;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iStack_20 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_r7 + param_4) = (char)unaff_r7;
  temp_v0 = unaff_r7 >> 0xe;
  uStack_18 = param_1;
  temp_v1 = FUN_0014143c(DAT_00433158,temp_v0);
  if (temp_v1 != 0) {
    FUN_001413d0(DAT_00433158,temp_v0,~param_1 & (unaff_r4 >> 0xd),param_3,~param_1 << 1);
    return;
  }
  if (temp_v0 >= 0x200) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iStack_30 = (temp_v0 / 0x10) * 0x10;
  iStack_2c = iStack_30 + 0x10;
  iStack_28 = (temp_v0 % 0x10) * 0x20;
  if (*(char *)(temp_v0 + 0x18) != '\0' ||
      &iStack_30 != *(int **)(temp_v0 + ((int)&iStack_30 >> 0x20) * 4 + 8)) {
    (**(romwright_code **)(temp_v0 + 0x1c))();
    *(char *)(temp_v0 + 0x18) = (char)param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
