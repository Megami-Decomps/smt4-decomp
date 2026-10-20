/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001382e4` (_code @ 0x1382e4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(void);

/* Supplied declaration required: FUN_002aa568. */


char * FUN_001382e4(unsigned int param_1,char *param_2)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar1 = "SJIS";
    FUN_002aa568();
    if (pcVar1 != (char *)0x0) {
      return (char *)0x0;
    }
  }
  return 
  "䀀䁀䁀䁀䁀䅁䅁䁁䁀䁀䁀䁀䁀䁀䁀䁀ՀȂȂȂȂȂȂȂ\x2002††††ȠȂȂȂ邐邐邐တတတတတတတတတတȂȂȂ袈袈袈ࠈࠈࠈࠈࠈࠈࠈࠈࠈࠈȂȂ@"
  ;
}

} /* extern "C" */
