/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc51c` (_code @ 0x1fc51c, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043438c; /* 0x43438c */
extern int *DAT_00434390; /* 0x434390 */

extern unsigned int FUN_00256418(int, int, unsigned int);
/* Supplied declaration required: FUN_00256464. */
extern int FUN_002564cc(int);
/* Supplied declaration required: FUN_002bcff0. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_003c3210. */
/* Supplied declaration required: FUN_003c3460. */


unsigned int FUN_001fc51c(void)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  piVar1 = DAT_00434390;
  if (DAT_00434390 != (int *)0x0) {
    temp_v1 = *DAT_00434390;
    if (temp_v1 != 1) {
      if (temp_v1 != 10) {
        if (temp_v1 != 0xc) {
          if (temp_v1 != 0xe) {
            return 0;
          }
          temp_v1 = FUN_002564cc(DAT_00434390[4]);
        }
        else {
          temp_v1 = FUN_002564cc(DAT_00434390[4]);
        }
        if (temp_v1 == 0) {
          temp_v2 = FUN_00256418(temp_v0,piVar1[7],1);
          FUN_003c3460(piVar1,temp_v2);
        }
      }
      else {
        temp_v1 = FUN_002564cc(DAT_00434390[4]);
        if (temp_v1 == 0xb) {
          FUN_002bcff0(*(unsigned int *)(temp_v0 + 0x49c8));
          FUN_00256464();
        }
      }
    }
    else {
      FUN_003c3210(DAT_00434390,DAT_0043438c);
    }
  }
  return 0;
}
