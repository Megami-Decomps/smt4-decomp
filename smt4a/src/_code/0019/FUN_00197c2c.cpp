/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00197c2c` (_code @ 0x197c2c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcmp(void);

/* Supplied declaration required: libc_strcmp. */


char * FUN_00197c2c(unsigned int param_1,char *param_2)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar1 = "SJIS";
    libc_strcmp();
    if (pcVar1 != (char *)0x0) {
      return (char *)0x0;
    }
  }
  return 
  "䀀䁀䁀䁀䁀䅁䅁䁁䁀䁀䁀䁀䁀䁀䁀䁀ՀȂȂȂȂȂȂȂ\x2002††††ȠȂȂȂ邐邐邐တတတတတတတတတတȂȂȂ袈袈袈ࠈࠈࠈࠈࠈࠈࠈࠈࠈࠈȂȂ@"
  ;
}

} /* extern "C" */
