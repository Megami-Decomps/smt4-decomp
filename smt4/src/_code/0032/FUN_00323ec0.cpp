/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323ec0` (_code @ 0x323ec0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcpy(unsigned char *, unsigned int);

extern unsigned char DAT_0049fa61; /* 0x49fa61 */
extern unsigned int DAT_0049fa64; /* 0x49fa64 */
extern unsigned char DAT_0049fa68; /* 0x49fa68 */

extern unsigned int scrGetArgString(unsigned int);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: libc_strcpy. */


unsigned int FUN_00323ec0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArgString(1);
  DAT_0049fa61 = 1;
  DAT_0049fa64 = temp_v0;
  libc_strcpy(&DAT_0049fa68,temp_v1);
  return 1;
}

} /* extern "C" */
