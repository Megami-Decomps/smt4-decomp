/* NON_MATCHING: romwright 0.5.0 decompilation of `mapPlaceSet` (_code @ 0x324bc8, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005f1c98; /* 0x5f1c98 */
extern int DAT_005f1c9c; /* 0x5f1c9c */
extern unsigned int DAT_005f1ca0; /* 0x5f1ca0 */
extern unsigned int DAT_005f1ca4; /* 0x5f1ca4 */

extern char *FUN_003798f0(int);
extern int dataTable23Type1CountWithAoc(void);


void mapPlaceSet(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  DAT_005f1c98 = param_1;
  DAT_005f1c9c = param_2;
  DAT_005f1ca0 = param_3;
  if (param_3 != 0xffffffff) {
    temp_v1 = 0;
    temp_v0 = dataTable23Type1CountWithAoc();
    if (0 < temp_v0) {
      do {
        pcVar2 = (char *)FUN_003798f0(temp_v1);
        temp_v0 = (int)*pcVar2;
        temp_v2 = temp_v0 == param_1;
        if (temp_v2) {
          temp_v0 = (int)pcVar2[1];
        }
        temp_v3 = temp_v2 && temp_v0 == param_2;
        if (temp_v2 && temp_v0 == param_2) {
          temp_v3 = (unsigned char)pcVar2[2] == param_3;
        }
        if (temp_v3) {
          DAT_005f1ca4 = (unsigned int)(unsigned char)pcVar2[3];
          return;
        }
        temp_v1 = temp_v1 + 1;
        temp_v0 = dataTable23Type1CountWithAoc();
      } while (temp_v1 < temp_v0);
    }
  }
  DAT_005f1ca4 = 0xffffffff;
  return;
}

} /* extern "C" */
