/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ecd94` (_code @ 0x3ecd94, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0057392c; /* 0x57392c */
extern int DAT_00573934; /* 0x573934 */

extern int FUN_004bd340(int, unsigned int);


unsigned int FUN_003ecd94(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if ((*(int *)(param_1 + 300) != 0) && (DAT_0057392c != 0)) {
    if ((DAT_00573934 != 0) && (temp_v0 = FUN_004bd340(DAT_00573934,1), temp_v0 == 0)) {
      return 1;
    }
    temp_v0 = 0;
    if (*(char *)(DAT_0057392c + 0x1ca3) != '\0') {
      do {
        temp_v1 = DAT_0057392c + temp_v0 * 300;
        temp_v2 = temp_v1 + 0x68;
        temp_v3 = DAT_0057392c;
        if (temp_v2 != 0) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0xca);
        }
        if ((temp_v2 != 0 && temp_v3 != 0) && (temp_v1 = FUN_004bd340(temp_v2,1), temp_v1 == 0)) {
          return 1;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)(unsigned int)*(unsigned char *)(DAT_0057392c + 0x1ca3));
    }
  }
  return 0;
}

} /* extern "C" */
