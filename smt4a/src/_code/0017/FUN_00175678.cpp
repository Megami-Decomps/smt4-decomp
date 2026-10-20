/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00175678` (_code @ 0x175678, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019138c(unsigned char *);

extern unsigned int DAT_005c0f64; /* 0x5c0f64 */
extern unsigned char DAT_00646818; /* 0x646818 */

/* Supplied declaration required: FUN_0019138c. */
extern int FUN_002eba64(unsigned int *);


unsigned char * FUN_00175678(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_005c0f64 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c0f64), temp_v0 != 0)) {
    FUN_0019138c(&DAT_00646818);
  }
  return &DAT_00646818;
}

} /* extern "C" */
