/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bc90` (_code @ 0x11bc90, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned char spF; /* 0xf: local_f */
} void_stack;

extern unsigned char LAB_00130000; /* 0x130000 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Supplied declaration required: FUN_00128308. */
extern int FUN_001283a0(unsigned char *);
extern int FUN_00139ae0(unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002bbd10. */


unsigned char FUN_0011bc90(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char uStack_10;
  unsigned char temp_v2;
  unsigned char temp_v3 [12];
  
  if ((bRam1ff80014 & 1) == 0) {
    temp_v1 = FUN_001283a0(temp_v3);
    if ((temp_v1 < 0) && (temp_v1 < 0)) {
      FUN_002bbd10(temp_v1,0x11bcc4);
    }
    temp_v1 = FUN_00139ae0(&uStack_10,4,&LAB_00130000);
    if (temp_v1 < 0) {
      FUN_002bbd10(temp_v1,0x11bce0);
    }
    FUN_00128308(temp_v3[0]);
    temp_v0 = temp_v2 & 1;
    if ((temp_v2 & 1) != 0) {
      temp_v0 = 1;
    }
                    /* WARNING: Treating indirect jump as return */
    return temp_v0;
  }
  return 0;
}
