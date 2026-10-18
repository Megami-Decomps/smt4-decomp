/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac484` (_code @ 0x3ac484, 0x1d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003ab058(); /* 0x3ab058 */
extern int FUN_003ab2d4(); /* 0x3ab2d4 */
extern int FUN_003ab348(); /* 0x3ab348 */
extern int FUN_003ab568(); /* 0x3ab568 */
extern int FUN_003ab5fc(); /* 0x3ab5fc */
extern int FUN_003ab9c0(); /* 0x3ab9c0 */
extern int FUN_003ab9e8(); /* 0x3ab9e8 */
extern int FUN_003abb68(); /* 0x3abb68 */
extern int FUN_003abbc4(); /* 0x3abbc4 */
extern int FUN_003ac020(); /* 0x3ac020 */
extern int FUN_003ac0f8(); /* 0x3ac0f8 */
extern unsigned char DAT_00422098; /* 0x422098 */

extern unsigned int *FUN_0022ccec(void);


void FUN_003ac484(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_0022ccec();
  temp_v1 = 0xd;
  *puVar1 = (unsigned int)&DAT_00422098;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    puVar1[temp_v0 * 2 + 0x296e] = 0;
    puVar1[temp_v0 * 2 + 0x296f] = 0;
    puVar1[temp_v0 * 2 + 0x2988] = 0;
    puVar1[temp_v0 * 2 + 0x2989] = 0;
    puVar1[temp_v0 * 2 + 0x29a2] = 0;
    puVar1[temp_v0 * 2 + 0x29a3] = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  puVar1[0x296e] = 0x3abcf4;
  puVar1[0x296f] = 0;
  puVar1[0x2970] = (unsigned int)FUN_003ab2d4;
  puVar1[0x2971] = 0;
  puVar1[0x2972] = (unsigned int)FUN_003ab568;
  puVar1[0x2973] = 0;
  puVar1[0x2974] = (unsigned int)FUN_003ac0f8;
  puVar1[0x2975] = 0;
  puVar1[0x2976] = (unsigned int)FUN_003ac020;
  puVar1[0x2977] = 0;
  puVar1[0x2978] = (unsigned int)FUN_003abbc4;
  puVar1[0x2979] = 0;
  puVar1[0x297a] = (unsigned int)FUN_003ab058;
  puVar1[0x297b] = 0;
  puVar1[0x297c] = (unsigned int)FUN_003ab058;
  puVar1[0x297d] = 0;
  puVar1[0x297e] = (unsigned int)FUN_003ab9c0;
  puVar1[0x297f] = 0;
  puVar1[0x2980] = (unsigned int)FUN_003ab348;
  puVar1[0x2981] = 0;
  puVar1[0x2982] = (unsigned int)FUN_003ab9e8;
  puVar1[0x2983] = 0;
  puVar1[0x2984] = (unsigned int)FUN_003abb68;
  puVar1[0x2985] = 0;
  puVar1[0x29a6] = (unsigned int)FUN_003ab5fc;
  puVar1[0x29a7] = 0;
  puVar1[0x29a8] = (unsigned int)FUN_003ab5fc;
  puVar1[0x29a9] = 0;
  puVar1[0x29aa] = (unsigned int)FUN_003ab5fc;
  puVar1[0x29ab] = 0;
  puVar1[0x29b6] = (unsigned int)FUN_003ab5fc;
  puVar1[0x29b7] = 0;
  puVar1[0x29ac] = 0x3abfa4;
  puVar1[0x29ad] = 0;
  puVar1[0x29ae] = 0x3abfa4;
  puVar1[0x29af] = 0;
  puVar1[0x29b0] = (unsigned int)FUN_003ab5fc;
  puVar1[0x29b1] = 0;
  puVar1[0x29b2] = 0x3ab5f8;
  puVar1[0x29b3] = 0;
  puVar1[0x29b4] = (unsigned int)FUN_003ab5fc;
  puVar1[0x29b5] = 0;
  return;
}
