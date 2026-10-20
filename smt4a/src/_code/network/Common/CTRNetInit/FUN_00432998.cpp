/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432998` (_code @ 0x432998, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int);
int FUN_0017fd20(int [3], int);
int sysFatalBreak(void);
int FUN_002e3140(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00588114; /* 0x588114 */
extern int DAT_00588118; /* 0x588118 */

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_002e3140. */
extern unsigned int FUN_0042640c(unsigned int *);
extern unsigned int FUN_0043d3d8(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int entry3F94Address(unsigned int, unsigned int);


unsigned int FUN_00432998(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2 [3];
  
  piVar3 = temp_v2;
  temp_v2[0] = 0x1000;
  temp_v2[1] = 1;
  temp_v0 = 0x100;
  memAlloc(0x100,0x100,0,0x40000);
  DAT_00588114 = temp_v0;
  temp_v0 = entry3F94Address(0x10000,4);
  temp_v1 = FUN_0043d3d8(DAT_00588114,temp_v0,0x10000,4);
  *param_1 = temp_v1;
  if ((int)temp_v1 < 0) {
    sysFatalBreak();
  }
  if (-1 < (int)*param_1) {
    temp_v2[0] = 0;
    if (DAT_00588118 != 0) {
      piVar3 = (int *)0xe0a0183b;
    }
    else {
      FUN_0017fd20(temp_v2,1);
      if (-1 < (int)piVar3) {
        piVar3 = (int *)0x0;
        DAT_00588118 = temp_v2[0];
      }
    }
    if ((int)piVar3 < 0) {
      FUN_002e3140();
    }
    temp_v1 = FUN_0042640c((unsigned int *)&DAT_00588118);
    *param_1 = temp_v1;
    if ((temp_v1 & 0x80000000) == 0) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
