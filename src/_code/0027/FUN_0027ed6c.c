/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ed6c` (_code @ 0x27ed6c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int FUN_002bbcdc(void);
/* Supplied declaration required: FUN_002bbd10. */
extern int FUN_00356b04(unsigned int *, char *);


int FUN_0027ed6c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char temp_v2 [12];
  
  temp_v1 = FUN_002bbcdc();
  temp_v0 = FUN_00356b04((unsigned int *)&temp_v1,temp_v2);
  if (temp_v0 < 0) {
    FUN_002bbd10(temp_v0,0x27ed90);
  }
                    /* WARNING: Treating indirect jump as return */
  return (int)temp_v2[0];
}
