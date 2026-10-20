/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a03c` (_code @ 0x10a03c, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001137fc(int);
int FUN_002c39a4(unsigned int);

extern int DAT_0043e278; /* 0x43e278 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_001137fc. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c39a4. */


unsigned char FUN_0010a03c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002c08f0();
  if (((*(char *)(temp_v0 + 0xf60) != '\0') && (*(char *)(temp_v0 + 0xf63) != '\0')) &&
     (*(char *)(temp_v0 + 0xc) != '\0')) {
    FUN_002c39a4(DAT_0044ea00);
    temp_v1 = *(int *)(temp_v0 + 0x10);
    if ((0 < temp_v1) || (0 < *(int *)(temp_v0 + 0x14))) {
      temp_v2 = *(int *)(temp_v0 + 0x14);
      if (temp_v2 < 1) {
        temp_v1 = temp_v1 + 1;
      }
      *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
      if (temp_v2 < 1) {
        *(int *)(temp_v0 + 0x10) = temp_v1;
      }
      else {
        *(int *)(temp_v0 + 0x14) = temp_v2 + 1;
        temp_v0 = DAT_0043e278;
        if (temp_v2 + 1 >= 0x1f) {
          *(unsigned char *)(DAT_0043e278 + 0xc) = 0;
          *(unsigned int *)(temp_v0 + 0x10) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          *(unsigned int *)(temp_v0 + 0x18) = 0;
          *(unsigned char *)(temp_v0 + 0xf60) = 0;
          *(unsigned char *)(temp_v0 + 0xf63) = 0;
          *(unsigned char *)(temp_v0 + 0xf64) = 0;
          *(unsigned char *)(temp_v0 + 0xf65) = 0;
          *(unsigned char *)(temp_v0 + 0xf98) = 0;
          return 0;
        }
      }
      FUN_001137fc(1);
    }
  }
  return 0;
}

} /* extern "C" */
