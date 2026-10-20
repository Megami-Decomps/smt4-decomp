/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bb20` (_code @ 0x10bb20, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);
int FUN_002f4364(void);
int FUN_002f4ab0(unsigned int, unsigned int);
int FUN_002f5908(unsigned char *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00558e44; /* 0x558e44 */
extern unsigned char DAT_00630314; /* 0x630314 */

/* Supplied declaration required: FUN_002ecac4. */
/* Supplied declaration required: FUN_002f4364. */
/* Supplied declaration required: FUN_002f4ab0. */
/* Supplied declaration required: FUN_002f5908. */
extern int FUN_002f5966(unsigned int *);


void FUN_0010bb20(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558e44;
  if (param_1[0x1e] != 0) {
    FUN_002f4ab0(param_1[0x1e],0xffffffff);
    if ((int *)param_1[0x1e] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[0x1e] + 4))();
    }
    FUN_002f5908(&DAT_00630314);
  }
  FUN_002f4364();
  temp_v0 = FUN_002f5966(param_1 + 0x1f);
  FUN_002ecac4(temp_v0 - 0x7c);
  return;
}

} /* extern "C" */
