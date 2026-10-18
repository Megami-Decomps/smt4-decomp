/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1a30` (_code @ 0x3e1a30, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003e0cd4. */
/* Supplied declaration required: FUN_003e2840. */
/* Supplied declaration required: FUN_003ed6e8. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004f1c5c. */
/* Supplied declaration required: FUN_004f6d34. */
/* Supplied declaration required: FUN_004f7b84. */


void FUN_003e1a30(unsigned int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  if (param_1[3] != 0) {
    temp_v0 = param_1[3];
  }
  else {
    FUN_004f7b84(DAT_00573808,"ef_Ancient_01");
    *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) | 0x4000;
    temp_v0 = param_1[3] | 2;
    param_1[3] = temp_v0;
  }
  if ((temp_v0 & 2) != 0) {
    temp_v1 = DAT_00573808;
    FUN_004f6d34();
    if (temp_v1 != 0) {
      FUN_003e2840(param_1,param_2,3);
      if (*(int *)(DAT_00571508 + 0x34) != 0) {
        FUN_004f1c5c();
      }
      else {
        FUN_004f1c5c(DAT_00571508,0x78);
      }
      puVar3 = (unsigned int *)(param_2 + 0x45a0);
      if ((*puVar3 & DAT_00573858) == 0 && (*(unsigned int *)(param_2 + 0x45a4) & DAT_0057385c) == 0) {
        FUN_003ed6e8(param_2);
        FUN_003f26d4(param_2);
        temp_v0 = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057387c | DAT_00573894;
        *puVar3 = DAT_00573878 | *puVar3 | DAT_00573890;
        *(unsigned int *)(param_2 + 0x45a4) = temp_v0;
        FUN_004aa2e0(DAT_0057a9c8,0);
      }
      param_1[4] = 0;
      param_1[3] = 0;
      *param_1 = 0x19;
      FUN_003e0cd4(param_1,param_2);
      return;
    }
  }
  return;
}
