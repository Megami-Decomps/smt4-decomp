/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bbb54` (_code @ 0x3bbb54, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eb970(int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_0021f538(void);
/* Supplied declaration required: FUN_002eb970. */
extern int FUN_002f5068(int);


void FUN_003bbb54(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0021f538();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002f5068(param_1 + 0xc);
    FUN_002eb970(temp_v0,param_2);
    if (temp_v0 == 0) {
      FUN_002eb970(0,param_2);
      return;
    }
  }
  return;
}

} /* extern "C" */
