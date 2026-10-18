/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d344` (_code @ 0x23d344, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0023d344_arg0 fn_0023d344_arg0;
struct fn_0023d344_arg0 {
    unsigned char pad_0x0[0x56c];
    void *field_0x56c; /* +0x56c */
    unsigned char pad_0x570[0x1094];
    undefined4 field_0x1604; /* +0x1604 */
    undefined4 field_0x1608; /* +0x1608 */
    undefined4 field_0x160c; /* +0x160c */
    uint field_0x1610; /* +0x1610 */
    uint field_0x1614; /* +0x1614 */
    uint field_0x1618; /* +0x1618 */
    undefined4 field_0x161c; /* +0x161c */
    undefined4 field_0x1620; /* +0x1620 */
    undefined4 field_0x1624; /* +0x1624 */
    undefined4 field_0x1628; /* +0x1628 */
    undefined4 field_0x162c; /* +0x162c */
    undefined4 field_0x1630; /* +0x1630 */
};

typedef int romwright_code();

void FUN_0023d344(fn_0023d344_arg0 *param_1)

{
  unsigned int *puVar1;
  void *pvVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  param_1->field_0x1604 = param_1->field_0x161c;
  param_1->field_0x1608 = param_1->field_0x1620;
  param_1->field_0x160c = param_1->field_0x1624;
  param_1->field_0x1610 = param_1->field_0x1628;
  param_1->field_0x1614 = param_1->field_0x162c;
  param_1->field_0x1618 = param_1->field_0x1630;
  pvVar2 = param_1->field_0x56c;
  temp_v2 = param_1->field_0x1608;
  temp_v3 = param_1->field_0x160c;
  *(unsigned int *)((int)pvVar2 + 0x58) = param_1->field_0x1604;
  *(unsigned int *)((int)pvVar2 + 0x68) = temp_v2;
  *(unsigned int *)((int)pvVar2 + 0x78) = temp_v3;
  *(unsigned int *)((int)pvVar2 + 0x88) = *(unsigned int *)((int)pvVar2 + 0x88) | 0x800;
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)((int)param_1->field_0x56c + 600) + 0x10))();
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  temp_v0 = param_1->field_0x1614;
  temp_v1 = param_1->field_0x1618;
  puVar1[2] = param_1->field_0x1610;
  puVar1[3] = temp_v0;
  puVar1[4] = temp_v1;
  return;
}
