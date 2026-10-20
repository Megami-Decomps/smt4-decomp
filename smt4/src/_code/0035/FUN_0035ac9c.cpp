/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ac9c` (_code @ 0x35ac9c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0035ac98_arg0 fn_0035ac98_arg0;
struct fn_0035ac98_arg0 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004eac44; /* 0x4eac44 */

extern int nnFndFindNestedRange(int, fn_0035ac98_arg0 *);
extern int nn_fnd_detail_GetNextListObject(unsigned char *, int);


void FUN_0035ac9c(fn_0035ac98_arg0 *param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  
  temp_v3 = 0;
  puVar6 = (unsigned int *)&DAT_004eac44;
  do {
    temp_v3 = nn_fnd_detail_GetNextListObject(&DAT_004eac44,temp_v3);
    if (temp_v3 == 0) goto LAB_0035acfc;
  } while ((param_1 < *(fn_0035ac98_arg0 **)(temp_v3 + 0x18)) ||
          (*(fn_0035ac98_arg0 **)(temp_v3 + 0x1c) <= param_1));
  temp_v0 = nnFndFindNestedRange(temp_v3 + 0xc,param_1);
  if (temp_v0 == 0) {
    temp_v0 = temp_v3;
  }
  puVar6 = (unsigned int *)(temp_v0 + 0xc);
LAB_0035acfc:
  temp_v2 = (unsigned int)*(unsigned short *)((int)puVar6 + 10);
  piVar3 = (int *)((int)&param_1->field_0x0 + temp_v2);
  temp_v1 = *(unsigned int *)((int)&param_1->field_0x4 + temp_v2);
  if (*piVar3 != 0) {
    *(unsigned int *)(temp_v2 + *piVar3 + 4) = temp_v1;
  }
  else {
    *puVar6 = temp_v1;
  }
  if (piVar3[1] == 0) {
    puVar6[1] = *piVar3;
  }
  else {
    *(int *)(piVar3[1] + (unsigned int)*(unsigned short *)((int)puVar6 + 10)) = *piVar3;
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) - 1;
  return;
}

} /* extern "C" */
