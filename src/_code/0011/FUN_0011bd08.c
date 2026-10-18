/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bd08` (_code @ 0x11bd08, 0x6c bytes) from smt4.cxi.
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

/* Supplied declaration required: FUN_00128308. */
extern int FUN_001283a0(unsigned char *);
extern int FUN_00139ae0(unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002bbd10. */


unsigned char FUN_0011bd08(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [2];
  unsigned char temp_v2;
  unsigned char temp_v3 [12];
  
  if ((bRam1ff80014 & 1) == 0) {
    temp_v0 = FUN_001283a0(temp_v3);
    if ((temp_v0 < 0) && (temp_v0 < 0)) {
      FUN_002bbd10(temp_v0,0x11bd3c);
    }
    temp_v0 = FUN_00139ae0(temp_v1,4,&LAB_00130000);
    if (temp_v0 < 0) {
      FUN_002bbd10(temp_v0,0x11bd58);
    }
    FUN_00128308(temp_v3[0]);
                    /* WARNING: Treating indirect jump as return */
    return temp_v2;
  }
  return 0;
}
