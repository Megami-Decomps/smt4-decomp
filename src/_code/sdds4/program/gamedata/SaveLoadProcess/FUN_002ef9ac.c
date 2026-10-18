/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef9ac` (_code @ 0x2ef9ac, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0043e2f0; /* 0x43e2f0 */
extern unsigned char DAT_0043e2f3; /* 0x43e2f3 */

/* Supplied declaration required: FUN_001a1bf8. */
/* Supplied declaration required: FUN_00247c64. */
/* Supplied declaration required: FUN_0026b734. */
extern unsigned int FUN_0026b830(void);
extern unsigned int FUN_0026b844(void);
/* Supplied declaration required: FUN_002adb40. */
/* Supplied declaration required: FUN_002bcf58. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c0b94. */
/* Supplied declaration required: FUN_002c54f0. */
extern int FUN_002ced0c(void);


unsigned int FUN_002ef9ac(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002c0ac8();
  temp_v2 = *(int *)(temp_v0 + 4);
  if (temp_v2 != 4) {
    if (temp_v2 != 5) {
      if (temp_v2 == 6) {
        DAT_0043e2f3 = 1;
        DAT_0043e2f0 = 1;
        return 0xffffffff;
      }
      if (temp_v2 == 7) {
        DAT_0043e2f3 = 0;
        DAT_0043e2f0 = 1;
        return 0xffffffff;
      }
    }
    else {
      temp_v2 = temp_v0;
      FUN_001a1bf8();
      if (temp_v2 == 1) {
        temp_v2 = FUN_002ced0c();
        if (temp_v2 != 0) {
          temp_v1 = 7;
        }
        else {
          temp_v2 = *(int *)(temp_v0 + 8);
          temp_v1 = FUN_0026b844();
          FUN_002bcf58(temp_v1,temp_v2,0x80);
          temp_v1 = FUN_0026b830();
          FUN_002adb40(temp_v1,temp_v2 + 0x80);
          temp_v1 = FUN_002c0b94();
          FUN_002bcf58(temp_v1,temp_v2 + 0x88,0x24d28);
          temp_v2 = FUN_002c0b94();
          *(char *)(temp_v2 + 3) = (char)*(unsigned int *)(temp_v0 + 0x10);
          FUN_0026b734();
          temp_v1 = 6;
        }
        *(unsigned int *)(temp_v0 + 4) = temp_v1;
      }
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = 0x24db0;
    temp_v1 = 0x100;
    FUN_002c54f0(0x100,0x100,0,*(unsigned int *)(temp_v0 + 0xc),1);
    *(unsigned int *)(temp_v0 + 8) = temp_v1;
    FUN_00247c64(3,0,*(unsigned int *)(temp_v0 + 0x10),temp_v1,*(unsigned int *)(temp_v0 + 0xc));
    *(unsigned int *)(temp_v0 + 4) = 5;
  }
  return 0;
}
