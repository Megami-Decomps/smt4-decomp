/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bde8` (_code @ 0x11bde8, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned char spE; /* 0xe: local_e */
} void_stack;

extern unsigned char LAB_00130000; /* 0x130000 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Supplied declaration required: FUN_001283e4. */
extern int FUN_0012847c(unsigned char *);
extern int FUN_0013a170(unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002bbb2c. */


unsigned char FUN_0011bde8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [2];
  unsigned char temp_v2;
  unsigned char temp_v3 [12];
  
  if ((bRam1ff80014 & 1) == 0) {
    temp_v0 = FUN_0012847c(temp_v3);
    if ((temp_v0 < 0) && (temp_v0 < 0)) {
      FUN_002bbb2c(temp_v0,0x11be1c);
    }
    temp_v0 = FUN_0013a170(temp_v1,4,&LAB_00130000);
    if (temp_v0 < 0) {
      FUN_002bbb2c(temp_v0,0x11be38);
    }
    FUN_001283e4(temp_v3[0]);
                    /* WARNING: Treating indirect jump as return */
    return temp_v2;
  }
  return 0;
}
