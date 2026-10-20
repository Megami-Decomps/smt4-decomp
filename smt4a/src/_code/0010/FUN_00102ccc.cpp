/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102ccc` (_code @ 0x102ccc, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6b7c(unsigned char *, unsigned int *, unsigned int);
int SBORROW4(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int *FUN_002e2a98(void);
extern unsigned int *FUN_002e3cf8(void);
/* Supplied declaration required: FUN_002e6b7c. */


void FUN_00102ccc(unsigned char *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  pbVar6 = param_1;
  do {
    pbVar5 = pbVar6;
    temp_v3 = (unsigned int)*pbVar5;
    pbVar6 = pbVar5 + 1;
    if (temp_v3 == 0) break;
    piVar2 = (int *)FUN_002e2a98();
  } while ((*(unsigned char *)(*piVar2 + temp_v3) & 1) != 0);
  pbVar7 = pbVar6;
  if ((temp_v3 != 0x2b) && (pbVar7 = pbVar5, temp_v3 == 0x2d)) {
    temp_v0 = 1;
    pbVar7 = pbVar6;
  }
  pbVar6 = pbVar7;
  FUN_002e6b7c(pbVar7,param_2,param_3);
  if ((param_2 != (unsigned int *)0x0) && ((unsigned char *)*param_2 == pbVar7)) {
    *param_2 = (unsigned int)param_1;
  }
  if (temp_v0) {
    temp_v2 = -(unsigned int)(pbVar6 != (unsigned char *)0x0) - temp_v1;
    if ((int)(-(unsigned int)(pbVar6 != (unsigned char *)0x0) - temp_v2) < 0 !=
        (SBORROW4(0,temp_v2) != SBORROW4(-temp_v2,(unsigned int)(pbVar6 != (unsigned char *)0x0)))) {
      puVar3 = (unsigned int *)FUN_002e3cf8();
      *puVar3 = 2;
    }
  }
  else if (temp_v1 < 0) {
    puVar3 = (unsigned int *)FUN_002e3cf8();
    *puVar3 = 2;
  }
  return;
}

} /* extern "C" */
