/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115728` (_code @ 0x115728, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9e60(const unsigned short [92], int, unsigned int, int);

/* Supplied declaration required: FUN_002e9e60. */

/* Retail keeps the file name as UTF-16 (DAT_0053813c), so it is a u16 array, not a narrow string. */
static const unsigned short s_InstantiationContext_h[] = {
  'D',':','\\','h','o','m','e','\\','j','e','n','k','i','n','s','\\','w','o','r','k','s','p',
  'a','c','e','\\','M','a','n','u','a','l','-','P','a','c','k','\\','5','1','2','9','d','5','4',
  '3','\\','.','\\','O','n','l','i','n','e','C','o','r','e','/','s','r','c','/','C','o','r','e',
  '/','I','n','s','t','a','n','t','i','a','t','i','o','n','C','o','n','t','e','x','t','.','h',0
};


unsigned int FUN_00115728(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 >= 0xe) {
    FUN_002e9e60(s_InstantiationContext_h,0x52,0xe0000003,0);
    return 0xffffffff;
  }
  return *(unsigned int *)(param_2 * 4 + param_1 + 4);
}

} /* extern "C" */
