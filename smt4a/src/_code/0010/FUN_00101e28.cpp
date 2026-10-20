/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00101e28` (_code @ 0x101e28, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5780(int *);
int FUN_002e57c8(int *, int, unsigned int, unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_0064c010; /* 0x64c010 */

extern int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_002e5780. */
/* Supplied declaration required: FUN_002e57c8. */


int * FUN_00101e28(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e3390(param_2);
  if (temp_v0 != 0) {
    FUN_002e57c8(param_1,0,*(unsigned int *)(*param_1 - 4),param_2,temp_v0);
    return param_1;
  }
  if (*(int *)(*param_1 - 0xc) != 0) {
    FUN_002e5780(param_1);
    *param_1 = (int)&DAT_0064c010;
  }
  else {
    *(unsigned int *)(*param_1 - 4) = 0;
    *(unsigned char *)*param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
