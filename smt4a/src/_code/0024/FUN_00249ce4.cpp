/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249ce4` (_code @ 0x249ce4, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [64], unsigned char *, int);
int FUN_0020214c(void);

extern unsigned char LAB_00249d8c; /* 0x249d8c */
extern unsigned char LAB_00249da4; /* 0x249da4 */
extern unsigned char LAB_00249dbc; /* 0x249dbc */
extern unsigned char LAB_00249dd4; /* 0x249dd4 */
extern unsigned char *g_mapTable; /* 0x5821c4 */
extern unsigned int DAT_005821cc; /* 0x5821cc */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0020214c. */


void FUN_00249ce4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  unsigned char temp_v0 [64];
  
  puVar1 = temp_v0;
  puVar2 = temp_v0;
  DAT_005821cc = 0x80;
  if (param_1 == 300) {
    puVar1 = &LAB_00249da4;
    FUN_0020214c();
    g_mapTable = puVar1;
    return;
  }
  if (param_1 != 200) {
    if (param_1 >= 100) {
      textFormatBuffer(temp_v0,&LAB_00249d8c,param_1 - 100);
      FUN_0020214c();
      g_mapTable = puVar1;
      return;
    }
    textFormatBuffer(temp_v0,&LAB_00249dd4,param_1);
    FUN_0020214c();
    g_mapTable = puVar2;
    return;
  }
  puVar1 = &LAB_00249dbc;
  FUN_0020214c();
  g_mapTable = puVar1;
  return;
}

} /* extern "C" */
