/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8800` (_code @ 0x4c8800, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c9160(unsigned int, unsigned int, int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_00573908; /* 0x573908 */
extern unsigned int DAT_0057390c; /* 0x57390c */
extern unsigned int DAT_00573910; /* 0x573910 */
extern unsigned int DAT_00573914; /* 0x573914 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_004c9160. */


unsigned int FUN_004c8800(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  if (((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_0057390c) == 0 &&
       (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573908) == 0) &&
     ((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573914) == 0 &&
      (DAT_00573910 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0)) {
    temp_v1 = 0;
    if (param_2 == 1) {
      temp_v1 = 0x1a;
    }
    else if (param_2 == 2) {
      temp_v1 = 0x1b;
    }
    else if (param_2 == 3) {
      temp_v1 = 0x36;
    }
    FUN_004c9160(temp_v1,param_1,0,param_3);
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
