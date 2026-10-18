/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e934e` (_code @ 0x2e934e, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001002c2(short);
/* Supplied declaration required: FUN_00102dd2. */
extern int *FUN_002e3cf8(void);


short * FUN_002e934e(short *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  int temp_v3;
  
  temp_v3 = 0;
  piVar2 = (int *)FUN_002e3cf8();
  temp_v1 = *piVar2;
  psVar5 = param_1;
  do {
    psVar6 = psVar5;
    temp_v0 = *psVar6;
    psVar5 = psVar6 + 1;
    if (temp_v0 == 0) break;
    temp_v2 = FUN_001002c2(temp_v0);
  } while (temp_v2 != 0);
  psVar7 = psVar5;
  if ((temp_v0 != 0x2b) && (psVar7 = psVar6, temp_v0 == 0x2d)) {
    temp_v3 = 0x400;
    psVar7 = psVar5;
  }
  *piVar2 = 0;
  psVar5 = psVar7;
  FUN_00102dd2(psVar7,param_2,param_3);
  if ((param_2 != (unsigned int *)0x0) && ((short *)*param_2 == psVar7)) {
    *param_2 = (unsigned int)param_1;
  }
  if ((*piVar2 != 2) && (*piVar2 = temp_v1, temp_v3 << 0x15 < 0)) {
    psVar5 = (short *)-(int)psVar5;
  }
  return psVar5;
}
