/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001716ac` (_code @ 0x1716ac, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c014(void);
int FUN_0018c090(void);
int FUN_0018c108(void);

extern unsigned char DAT_005b4484; /* 0x5b4484 */
extern signed char DAT_005b4485; /* 0x5b4485 */

/* Supplied declaration required: FUN_0018c014. */
extern int FUN_0018c054(unsigned char *);
/* Supplied declaration required: FUN_0018c090. */
extern int FUN_0018c0cc(unsigned char *);
/* Supplied declaration required: FUN_0018c108. */


void FUN_001716ac(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [4];
  
  if (param_1 == 0) {
    if (((DAT_005b4485 != '\0') && (temp_v0 = FUN_0018c0cc(temp_v1), -1 < temp_v0)) &&
       (temp_v0 = FUN_0018c054(temp_v2), -1 < temp_v0)) {
      DAT_005b4484 = temp_v1[0] | temp_v2[0];
      temp_v0 = 0;
      FUN_0018c108();
      if (temp_v0 == -0x36bfafff) {
        FUN_0018c090();
      }
    }
    return;
  }
  FUN_0018c014();
  return;
}

} /* extern "C" */
