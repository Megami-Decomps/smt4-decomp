/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fd2cc` (_code @ 0x4fd2cc, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005712f0; /* 0x5712f0 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_004102d8. */


unsigned char
FUN_004fd2cc(short param_1,unsigned int param_2,int param_3,unsigned short param_4,unsigned short param_5,
            unsigned int param_6)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_s0;
  
  temp_v1 = FUN_0014aa78();
  if ((*(char *)(temp_v1 + 0x22cc) != '\0') && (*(char *)(temp_v1 + 0x22cd) != '\0')) {
    if (param_3 != 0) {
      temp_v3 = 0;
      temp_v4 = temp_v3;
      do {
        if (*(char *)(temp_v1 + temp_v3 + 0x2340) != '\0') {
          temp_v0 = *(short *)(temp_v1 + temp_v4 * 2 + 0x2344);
          if (temp_v0 < 0) {
            return 0;
          }
          temp_v2 = DAT_005712f0;
          FUN_004102d8(DAT_005712f0,(int)(short)(temp_v0 + param_1),0,param_2);
          *(unsigned char *)(temp_v2 + 4) = 0x46;
          *(short *)(temp_v2 + 0x24) = (short)temp_v3;
          *(unsigned short *)(temp_v2 + 0x26) = param_5;
          *(unsigned int *)(temp_v2 + 0x30) = in_s0;
          *(unsigned int *)(temp_v2 + 0x28) = param_6;
          temp_v4 = temp_v4 + 1;
          *(unsigned int *)(temp_v2 + 0x4c) = 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
    }
    else {
      temp_v1 = DAT_005712f0;
      FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v1 + 4) = 0x46;
      *(unsigned short *)(temp_v1 + 0x24) = param_4;
      *(unsigned short *)(temp_v1 + 0x26) = param_5;
      *(unsigned int *)(temp_v1 + 0x30) = in_s0;
      *(unsigned int *)(temp_v1 + 0x28) = param_6;
      *(unsigned int *)(temp_v1 + 0x4c) = 0;
    }
    return 1;
  }
  return 0;
}
