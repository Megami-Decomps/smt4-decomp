/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc5c0` (_code @ 0x1fc5c0, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textDrawDefaultString(void);
int aocIndexValueOrDefault(unsigned int);
int FUN_003c2fe8(int *, unsigned int);
int FUN_003c3238(int *, unsigned int);

extern unsigned int DAT_0043438c; /* 0x43438c */
extern int *DAT_00434390; /* 0x434390 */

extern unsigned int FUN_002561d8(int, int, unsigned int);
/* Supplied declaration required: textDrawDefaultString. */
extern unsigned int asdListBoxGetSelectedItemId(unsigned int);
/* Supplied declaration required: aocIndexValueOrDefault. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_003c2fe8. */
/* Supplied declaration required: FUN_003c3238. */


unsigned int FUN_001fc5c0(void)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = jobGetWork();
  piVar1 = DAT_00434390;
  if (DAT_00434390 != (int *)0x0) {
    temp_v1 = *DAT_00434390;
    if (temp_v1 != 1) {
      if (temp_v1 != 10) {
        if (temp_v1 != 0xc) {
          if (temp_v1 != 0xe) {
            return 0;
          }
          temp_v1 = asdListBoxGetSelectedItemId(DAT_00434390[4]);
        }
        else {
          temp_v1 = asdListBoxGetSelectedItemId(DAT_00434390[4]);
        }
        if (temp_v1 == 0) {
          temp_v2 = FUN_002561d8(temp_v0,piVar1[7],1);
          FUN_003c3238(piVar1,temp_v2);
        }
      }
      else {
        temp_v1 = asdListBoxGetSelectedItemId(DAT_00434390[4]);
        if (temp_v1 == 0xb) {
          aocIndexValueOrDefault(*(unsigned int *)(temp_v0 + 0x49c8));
          textDrawDefaultString();
        }
      }
    }
    else {
      FUN_003c2fe8(DAT_00434390,DAT_0043438c);
    }
  }
  return 0;
}

} /* extern "C" */
