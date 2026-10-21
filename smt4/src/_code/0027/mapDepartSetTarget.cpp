/* NON_MATCHING: romwright 0.5.0 decompilation of `mapDepartSetTarget` (_code @ 0x2769b4, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0049fd14; /* 0x49fd14 */
extern int DAT_0049fd18; /* 0x49fd18 */
extern unsigned int DAT_0049fd1c; /* 0x49fd1c */
extern unsigned int DAT_0049fd20; /* 0x49fd20 */

extern int dataTable23Type1CountWithAoc(void);
extern char *dataTableGetRecord23(int);


void mapDepartSetTarget(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  DAT_0049fd14 = param_1;
  DAT_0049fd18 = param_2;
  DAT_0049fd1c = param_3;
  if (param_3 != 0xffffffff) {
    temp_v1 = 0;
    temp_v0 = dataTable23Type1CountWithAoc();
    if (0 < temp_v0) {
      do {
        pcVar2 = (char *)dataTableGetRecord23(temp_v1);
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
          if ((unsigned char)pcVar2[3] == 0xff) {
            DAT_0049fd20 = 0xffffffff;
            return;
          }
          DAT_0049fd20 = (unsigned int)(unsigned char)pcVar2[3];
          return;
        }
        temp_v1 = temp_v1 + 1;
        temp_v0 = dataTable23Type1CountWithAoc();
      } while (temp_v1 < temp_v0);
    }
  }
  DAT_0049fd20 = 0xffffffff;
  return;
}

} /* extern "C" */
