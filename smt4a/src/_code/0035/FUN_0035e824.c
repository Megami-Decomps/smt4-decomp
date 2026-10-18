/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e824` (_code @ 0x35e824, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0022e774. */
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_0026c3a0(void);
extern int FUN_00275bb0(unsigned int);
/* Supplied declaration required: FUN_00275fe4. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002fb404. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0037c770. */
/* Supplied declaration required: FUN_0038e4c4. */
/* Supplied declaration required: FUN_003a7b54. */
extern int FUN_003a7b88(void);
/* Supplied declaration required: FUN_003a7bdc. */
/* Supplied declaration required: FUN_00480e30. */
/* Supplied declaration required: FUN_00480fc0. */


unsigned int FUN_0035e824(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_00275fe4(0);
    FUN_00275fe4(1,0);
  }
  temp_v1 = FUN_00275bb0(0);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if ((temp_v1 == 3) && (temp_v1 = FUN_0026c3a0(), temp_v1 != 0)) {
          FUN_00333f6c();
          FUN_0038e4c4(DAT_0057a9c8 + 0x28c4);
          FUN_00275fe4(0,4);
          return 1;
        }
      }
      else {
        temp_v1 = FUN_003a7b88();
        if (temp_v1 != 0) {
          FUN_003a7b54();
          FUN_0022e774();
          FUN_00275fe4(0,3);
        }
      }
    }
    else {
      FUN_00275fe4(0,2);
      FUN_002c7e6c();
      FUN_002c8538(0);
      FUN_003a7bdc(temp_v0 & 0xffff,0);
      FUN_002fb404(DAT_0057a9c8 + 0x28c4);
    }
  }
  else {
    FUN_0037c770(temp_v0,1);
    FUN_00480e30(temp_v0,1);
    FUN_00480fc0(temp_v0,1);
    FUN_00275fe4(0,1);
  }
  return 0;
}
