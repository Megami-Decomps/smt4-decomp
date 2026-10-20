/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002feae4` (_code @ 0x2feae4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00222160(unsigned int);
int FUN_00350a8c(unsigned int);

extern signed char DAT_0059dbe1; /* 0x59dbe1 */
extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern int DAT_0059dbf0; /* 0x59dbf0 */
extern unsigned int DAT_0059dc0c; /* 0x59dc0c */

/* Supplied declaration required: FUN_00222160. */
/* Supplied declaration required: FUN_00350a8c. */


void FUN_002feae4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_0059dc0c;
  if ((DAT_0059dbf0 == 0) &&
     ((FUN_00350a8c(param_1), DAT_0059dbe9 == '\0' ||
      (((temp_v0 = param_1, DAT_0059dbe9 != '\x01' && (temp_v0 = param_1, DAT_0059dbe9 == '\x02')) &&
       (temp_v0 = param_1, DAT_0059dbe1 == '\0')))))) {
    FUN_00222160(param_1);
    temp_v0 = param_1;
  }
  DAT_0059dc0c = temp_v0;
  return;
}

} /* extern "C" */
