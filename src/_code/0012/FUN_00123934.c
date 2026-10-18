/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123934` (_code @ 0x123934, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern romwright_code *DAT_004c6400; /* 0x4c6400 */
extern unsigned int DAT_004c6408; /* 0x4c6408 */
extern int DAT_004c640c; /* 0x4c640c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern unsigned long long FUN_0012419c(void);
/* Supplied declaration required: FUN_00129b00. */


void FUN_00123934(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  unsigned long long temp_v3;
  
  temp_v2 = 0;
  if (DAT_004c640c != 0 || DAT_004c6408 != 0) {
    temp_v2 = FUN_0012419c();
  }
  do {
    if (DAT_004c62a1 == '\0') {
      return;
    }
    if (DAT_004c6408 != 0 || DAT_004c640c != 0) {
      temp_v3 = FUN_0012419c();
      temp_v1 = (unsigned int)temp_v3 - (unsigned int)temp_v2;
      temp_v0 = (int)((unsigned long long)temp_v3 >> 0x20) -
              ((int)((unsigned long long)temp_v2 >> 0x20) + (unsigned int)((unsigned int)temp_v3 < (unsigned int)temp_v2));
      if ((int)(DAT_004c640c - (temp_v0 + (unsigned int)(DAT_004c6408 < temp_v1))) < 0 !=
          (SBORROW4(DAT_004c640c,temp_v0) !=
          SBORROW4(DAT_004c640c - temp_v0,(unsigned int)(DAT_004c6408 < temp_v1)))) {
        if (DAT_004c6400 == (romwright_code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x001239b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_004c6400)(DAT_004c6400,temp_v0,DAT_004c6408 - temp_v1);
        return;
      }
    }
    FUN_00129b00();
  } while( 1 );
}
