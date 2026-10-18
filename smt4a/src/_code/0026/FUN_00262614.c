/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262614` (_code @ 0x262614, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


unsigned char FUN_00262614(int param_1)

{
  unsigned char temp_v0;
  
  if ((param_1 >= 10) || (temp_v0 = 1, *(char *)(param_1 + DAT_0057f69c + 0x544c) != '\x01')) {
    temp_v0 = 0;
  }
  return temp_v0;
}
