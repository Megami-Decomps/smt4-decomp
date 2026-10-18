/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef890` (_code @ 0x2ef890, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0043e2f2; /* 0x43e2f2 */
extern unsigned short DAT_0043e2f6; /* 0x43e2f6 */
extern int DAT_0043e2f8; /* 0x43e2f8 */

extern int FUN_00193b44(void);
/* Supplied declaration required: FUN_001a1e6c. */
/* Supplied declaration required: FUN_001edc04. */
/* Supplied declaration required: FUN_00247c64. */
/* Supplied declaration required: FUN_002874e4. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002972e8. */
extern int FUN_002c0ac8(void);


unsigned int FUN_002ef890(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  temp_v1 = *(int *)(temp_v0 + 4);
  if (temp_v1 != 8) {
    if (temp_v1 != 9) {
      if (temp_v1 != 10) {
        return 0;
      }
      temp_v0 = FUN_00193b44();
      if (temp_v0 != 0) {
        FUN_00291be8();
        FUN_001a1e6c(0);
      }
      FUN_002972e8(1);
      FUN_00291a5c();
      FUN_002874e4();
      DAT_0043e2f2 = 1;
      return 0xffffffff;
    }
    FUN_001edc04();
    if (temp_v1 != 1) {
      if (DAT_0043e2f8 + 1 < 8) {
        DAT_0043e2f8 = DAT_0043e2f8 + 1;
        return 0;
      }
      DAT_0043e2f6 = DAT_0043e2f6 + 1;
      if (DAT_0043e2f6 >= 3) {
        DAT_0043e2f6 = 0;
      }
      DAT_0043e2f8 = 0;
      return 0;
    }
    temp_v2 = 10;
  }
  else {
    FUN_0028dc54();
    FUN_0028d974();
    FUN_002972e8(0);
    FUN_00247c64(0,0,0,0,0);
    temp_v2 = 9;
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return 0;
}
