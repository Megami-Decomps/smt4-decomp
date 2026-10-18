/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105f3c` (_code @ 0x105f3c, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0044e0b0; /* 0x44e0b0 */
extern unsigned char DAT_004c5404; /* 0x4c5404 */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: FUN_00126480. */
/* Supplied declaration required: FUN_00126774. */
/* Supplied declaration required: FUN_002bdbcc. */
/* Supplied declaration required: FUN_002bdc08. */
extern int FUN_002c1f28(void);
extern int FUN_002c583c(unsigned int);


void FUN_00105f3c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  do {
    temp_v3 = *(int *)(&DAT_004c5404 + temp_v1 * 4);
    if (temp_v3 != 0) {
      temp_v0 = FUN_002c583c(1);
      if ((temp_v0 == 0) && (temp_v0 = FUN_002c1f28(), temp_v0 == 0)) {
        if (temp_v3 + 0xfeffff94U < 0x100) {
          FUN_00126774(temp_v3,DAT_0044e0b0,0);
        }
        else if (temp_v3 + 0xfefffe94U < 0xfc) {
          FUN_00126480(temp_v3,DAT_0044e0b0,0);
        }
      }
      *(unsigned int *)(&DAT_004c5404 + temp_v1 * 4) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  temp_v3 = FUN_002c1f28();
  temp_v1 = DAT_004e316c;
  if (temp_v3 == 0) {
    return;
  }
  if (DAT_004e316c != 0) {
    temp_v2 = 0;
    do {
      temp_v0 = temp_v1 + temp_v2 * 4;
      temp_v3 = *(int *)(temp_v0 + 0x20);
      if (temp_v3 != 0) {
        FUN_002bdc08(temp_v3,0);
        FUN_002bdbcc(temp_v0 + 0x20);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  return;
}
