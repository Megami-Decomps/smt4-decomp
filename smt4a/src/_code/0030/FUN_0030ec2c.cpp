/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ec2c` (_code @ 0x30ec2c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e4064(void);
int emptyStub_002f4370(unsigned int, unsigned char *, int);

extern unsigned char LAB_0030eb1d; /* 0x30eb1d */
extern unsigned int DAT_005c4bf0; /* 0x5c4bf0 */
extern unsigned char DAT_005c4bf4; /* 0x5c4bf4 */
extern unsigned int DAT_005c4bf8; /* 0x5c4bf8 */
extern int DAT_005c4c00; /* 0x5c4c00 */

/* Supplied declaration required: FUN_002e4064. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: emptyStub_002f4370. */
extern unsigned int FUN_0030ebc0(unsigned char *, unsigned int);


unsigned char * FUN_0030ec2c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005c4c00 == 0) {
    FUN_002e4064();
  }
  if (((DAT_005c4bf0 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c4bf0), temp_v0 != 0)) {
    temp_v1 = FUN_0030ebc0(&DAT_005c4bf4,DAT_005c4bf8);
    emptyStub_002f4370(temp_v1,&LAB_0030eb1d,0x100000);
  }
  return &DAT_005c4bf4;
}

} /* extern "C" */
