/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137e5c` (_code @ 0x137e5c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00143d00(void);
int FUN_00147c10(unsigned char *);

extern unsigned char DAT_0063e37c; /* 0x63e37c */
extern signed char DAT_0063f4fd; /* 0x63f4fd */
extern unsigned char DAT_0063f4fe; /* 0x63f4fe */

/* Supplied declaration required: FUN_00143d00. */
/* Supplied declaration required: FUN_00147c10. */
extern int FUN_00148f28(unsigned char *);


void FUN_00137e5c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00148f28(&DAT_0063e37c);
  if (temp_v0 != 0) {
    FUN_00143d00();
    FUN_00147c10(&DAT_0063e37c);
  }
  if (DAT_0063f4fd != '\0') {
    DAT_0063f4fe = 1;
  }
  return;
}

} /* extern "C" */
