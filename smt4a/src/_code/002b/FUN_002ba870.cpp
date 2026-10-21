/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba870` (_code @ 0x2ba870, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014bd84(unsigned int);
int textDrawDefaultString(void);
int FUN_004d0f48(int *, unsigned int);
int FUN_004d1198(int *, unsigned int);

extern unsigned int DAT_005715fc; /* 0x5715fc */
extern int *DAT_00571600; /* 0x571600 */

/* Supplied declaration required: FUN_0014bd84. */
extern int jobGetWork(void);
/* Supplied declaration required: textDrawDefaultString. */
extern unsigned int asdListBoxGetSelectedItemId(unsigned int);
extern unsigned int FUN_003e83b4(int, int, unsigned int);
/* Supplied declaration required: FUN_004d0f48. */
/* Supplied declaration required: FUN_004d1198. */


unsigned int FUN_002ba870(void)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = jobGetWork();
  piVar1 = DAT_00571600;
  if (DAT_00571600 != (int *)0x0) {
    temp_v1 = *DAT_00571600;
    if (temp_v1 != 1) {
      if (temp_v1 != 10) {
        if (temp_v1 != 0xc) {
          if (temp_v1 != 0xe) {
            return 0;
          }
          temp_v1 = asdListBoxGetSelectedItemId(DAT_00571600[4]);
        }
        else {
          temp_v1 = asdListBoxGetSelectedItemId(DAT_00571600[4]);
        }
        if (temp_v1 == 0) {
          temp_v2 = FUN_003e83b4(temp_v0,piVar1[7],1);
          FUN_004d1198(piVar1,temp_v2);
        }
      }
      else {
        temp_v1 = asdListBoxGetSelectedItemId(DAT_00571600[4]);
        if (temp_v1 == 0xc) {
          FUN_0014bd84(*(unsigned int *)(temp_v0 + 0x4cd4));
          textDrawDefaultString();
        }
      }
    }
    else {
      FUN_004d0f48(DAT_00571600,DAT_005715fc);
    }
  }
  return 0;
}

} /* extern "C" */
