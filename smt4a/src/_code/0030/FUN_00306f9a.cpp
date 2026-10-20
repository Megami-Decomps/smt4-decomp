/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306f9a` (_code @ 0x306f9a, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9300(unsigned int, short *);
int FUN_002e9520(unsigned int, int, int, unsigned int, unsigned int);
int FUN_0030f234(unsigned int, short *, unsigned int, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int FUN_002e783c(short *);
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9520. */
extern int FUN_002eea7c(int);
/* Supplied declaration required: FUN_0030f234. */


void FUN_00306f9a(unsigned int param_1,short *param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    temp_v0 = FUN_002eea7c(param_3);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002e783c(param_2);
      FUN_0030f234(param_1,param_2,temp_v1,*(unsigned int *)(param_3 + 4),temp_v0);
      return;
    }
    FUN_002e9300(param_1,param_2);
    return;
  }
  FUN_002e9520(param_1,param_3,param_3,param_4,param_4);
  return;
}

} /* extern "C" */
