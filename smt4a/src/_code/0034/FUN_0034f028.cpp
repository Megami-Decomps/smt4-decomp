/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f028` (_code @ 0x34f028, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003811ec(unsigned int *, unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_001ab854(void);
/* Supplied declaration required: FUN_003811ec. */
extern int FUN_003df57c(unsigned int, unsigned int);
extern int FUN_004bcbb4(unsigned int, unsigned int);


void FUN_0034f028(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((int)param_1[1] < 0) {
    temp_v0 = FUN_003df57c(*param_1,1);
  }
  else {
    temp_v2 = FUN_001ab854();
    temp_v0 = FUN_004bcbb4(temp_v2,*param_1);
  }
  if ((int)param_2[1] < 0) {
    temp_v1 = FUN_003df57c(*param_2,1);
  }
  else {
    temp_v2 = FUN_001ab854();
    temp_v1 = FUN_004bcbb4(temp_v2,*param_2);
  }
  if (temp_v0 == temp_v1) {
    FUN_003811ec(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
