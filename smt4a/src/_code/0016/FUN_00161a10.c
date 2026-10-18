/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00161a10` (_code @ 0x161a10, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern romwright_code *DAT_0061a5e0; /* 0x61a5e0 */
extern unsigned int DAT_0061a5e8; /* 0x61a5e8 */
extern int DAT_0061a5ec; /* 0x61a5ec */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern unsigned long long FUN_001623d0(void);
/* Supplied declaration required: FUN_00170184. */


void FUN_00161a10(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  unsigned long long temp_v3;
  
  temp_v2 = 0;
  if (DAT_0061a5ec != 0 || DAT_0061a5e8 != 0) {
    temp_v2 = FUN_001623d0();
  }
  do {
    if (DAT_0061a481 == '\0') {
      return;
    }
    if (DAT_0061a5e8 != 0 || DAT_0061a5ec != 0) {
      temp_v3 = FUN_001623d0();
      temp_v1 = (unsigned int)temp_v3 - (unsigned int)temp_v2;
      temp_v0 = (int)((unsigned long long)temp_v3 >> 0x20) -
              ((int)((unsigned long long)temp_v2 >> 0x20) + (unsigned int)((unsigned int)temp_v3 < (unsigned int)temp_v2));
      if ((int)(DAT_0061a5ec - (temp_v0 + (unsigned int)(DAT_0061a5e8 < temp_v1))) < 0 !=
          (SBORROW4(DAT_0061a5ec,temp_v0) !=
          SBORROW4(DAT_0061a5ec - temp_v0,(unsigned int)(DAT_0061a5e8 < temp_v1)))) {
        if (DAT_0061a5e0 == (romwright_code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00161a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0061a5e0)(DAT_0061a5e0,temp_v0,DAT_0061a5e8 - temp_v1);
        return;
      }
    }
    FUN_00170184();
  } while( 1 );
}
