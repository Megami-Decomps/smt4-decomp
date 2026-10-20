/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100e4e` (_code @ 0x100e4e, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001010f2(unsigned char *, unsigned int *, unsigned int);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_001010f2. */
extern int *__aeabi_errno_addr(void);
extern int *FUN_002c6a50(void);


unsigned char * FUN_00100e4e(unsigned char *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  piVar1 = (int *)__aeabi_errno_addr();
  temp_v0 = *piVar1;
  pbVar5 = param_1;
  do {
    pbVar4 = pbVar5;
    temp_v1 = (unsigned int)*pbVar4;
    pbVar5 = pbVar4 + 1;
    if (temp_v1 == 0) break;
    piVar3 = (int *)FUN_002c6a50();
  } while ((*(unsigned char *)(*piVar3 + temp_v1) & 1) != 0);
  pbVar6 = pbVar5;
  if ((temp_v1 != 0x2b) && (pbVar6 = pbVar4, temp_v1 == 0x2d)) {
    temp_v2 = 0x400;
    pbVar6 = pbVar5;
  }
  *piVar1 = 0;
  pbVar5 = pbVar6;
  FUN_001010f2(pbVar6,param_2,param_3);
  if ((param_2 != (unsigned int *)0x0) && ((unsigned char *)*param_2 == pbVar6)) {
    *param_2 = (unsigned int)param_1;
  }
  if ((*piVar1 != 2) && (*piVar1 = temp_v0, temp_v2 << 0x15 < 0)) {
    pbVar5 = (unsigned char *)-(int)pbVar5;
  }
  return pbVar5;
}

} /* extern "C" */
