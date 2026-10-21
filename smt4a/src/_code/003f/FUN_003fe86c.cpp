/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe86c` (_code @ 0x3fe86c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd7c0(int, unsigned int, unsigned int);
int FUN_003fd924(void);
int modelEffectsSelect(int, unsigned int);
int FUN_0045adc0(int, int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
/* Supplied declaration required: modelEffectsSelect. */
/* Supplied declaration required: FUN_0045adc0. */


void FUN_003fe86c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  FUN_003fd924();
  FUN_003fd7c0(param_1,param_2,param_3);
  temp_v0 = *(int *)(param_1 + 0x20c);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 0xc;
  }
  if ((param_2 < *(unsigned short *)(*(int *)(temp_v0 + 0x30) + 0x7c)) &&
     (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x78) + param_2 * 4), temp_v0 != 0)) {
    *(unsigned int *)(param_1 + 0xb4) = param_2;
    *(unsigned int *)(param_1 + 0xb8) = in_s0;
    *(int *)(param_1 + 0xc0) = temp_v0;
    FUN_0045adc0(param_1 + 200,temp_v0,*(unsigned int *)(param_1 + 0x210));
    *(char *)(param_1 + 0xd4) = (char)param_3;
  }
  if (*(int *)(param_1 + 0x25c) != 0) {
    modelEffectsSelect(*(int *)(param_1 + 0x25c),param_2);
    return;
  }
  return;
}

} /* extern "C" */
