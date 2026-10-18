/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3940` (_code @ 0x2e3940, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00218b9c. */
/* Supplied declaration required: FUN_00250d84. */
extern int FUN_002542bc(unsigned int);
/* Supplied declaration required: FUN_002542d4. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028c040. */
/* Supplied declaration required: FUN_0028ca0c. */
/* Supplied declaration required: FUN_0028ca60. */
extern unsigned int FUN_0028cab8(void);
extern int FUN_0028cad4(void);
/* Supplied declaration required: FUN_00292c0c. */
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_00295a18. */
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: FUN_002bd8d4. */
/* Supplied declaration required: FUN_002f5eac. */
/* Supplied declaration required: FUN_00311430. */


unsigned int FUN_002e3940(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002893d8();
  if (temp_v1 == 0) {
    FUN_002542d4(0);
    FUN_002542d4(1,0);
  }
  temp_v1 = FUN_002542bc(0);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if ((temp_v1 == 3) && (temp_v1 = FUN_00295618(), temp_v1 != 0)) {
          FUN_00292c0c();
          FUN_002bd8d4(DAT_00439ca8 + 0x2460);
          FUN_002542d4(0,4);
          return 1;
        }
      }
      else {
        temp_v1 = FUN_0028cad4();
        if (temp_v1 != 0) {
          temp_v2 = FUN_0028cab8();
          if (temp_v2 != 0) {
            FUN_0028ca60(temp_v2 & 0xffff);
          }
          FUN_0028ca0c(temp_v0 & 0xffff);
          FUN_0029ca58();
          FUN_002542d4(0,3);
        }
      }
    }
    else {
      FUN_002542d4(0,2);
      FUN_0028c040();
      FUN_0029e874(0);
      FUN_00311430(temp_v0 & 0xffff,0);
      FUN_00218b9c(DAT_00439ca8 + 0x2460);
    }
  }
  else {
    FUN_002f5eac(temp_v0,1);
    FUN_00295a18(temp_v0,1);
    FUN_00250d84(temp_v0,1);
    FUN_002542d4(0,1);
  }
  return 0;
}
