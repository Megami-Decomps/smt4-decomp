/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4998` (_code @ 0x1f4998, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001801e4(unsigned int *);
int FUN_0019a5a0(...);
int FUN_00202054(unsigned int *);
int FUN_002804d0(unsigned int, unsigned int);
int FUN_00280d40(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00636de0; /* 0x636de0 */

/* Supplied declaration required: FUN_001801e4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00202054. */
/* Supplied declaration required: FUN_002804d0. */
/* Supplied declaration required: FUN_00280d40. */
extern int FUN_0037a86c(unsigned int *, unsigned int *);


void FUN_001f4998(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (-1 < *(int *)(param_1[2] + 0xc)) {
    *param_1 = *param_1 | 0x200000;
    FUN_00280d40();
  }
  FUN_00202054(param_1);
  if (param_1[6] != 0) {
    temp_v0 = *(int *)(param_1[2] + 0x28);
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        FUN_0019a5a0(*(unsigned int *)(param_1[6] + temp_v1 * 0x1c));
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    FUN_0019a5a0(param_1[6]);
    param_1[6] = 0;
  }
  FUN_002804d0(param_1[2],param_1[1]);
  temp_v0 = FUN_0037a86c(&DAT_00636de0,param_1);
  if (temp_v0 != 0) {
    FUN_001801e4(&DAT_00636de0);
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
