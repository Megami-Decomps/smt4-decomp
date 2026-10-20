/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310fa6` (_code @ 0x310fa6, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, int, int, unsigned int);
int FUN_002ee9ce(int);
int FUN_002ee9da(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_002e7328(int, int);
/* Supplied declaration required: FUN_002e74c4. */
extern int FUN_002e76b6(void);
extern int FUN_002ed28c(int, int *);
/* Supplied declaration required: FUN_002ee9ce. */
/* Supplied declaration required: FUN_002ee9da. */


unsigned int FUN_00310fa6(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_002ed28c(param_1,&temp_v2);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = FUN_002e7328(param_1,temp_v2), temp_v1 = 0, temp_v0 != 0)) {
    FUN_002ee9ce(param_1);
    temp_v0 = FUN_002e76b6();
    FUN_002e74c4(param_2,temp_v0 + *(int *)(param_1 + 0xc),temp_v2,0xffffffff);
    FUN_002ee9da(param_1,*(int *)(param_1 + 0xc) + temp_v2);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
