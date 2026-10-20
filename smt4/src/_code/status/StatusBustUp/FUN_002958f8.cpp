/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002958f8` (_code @ 0x2958f8, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a60cc(unsigned int, int, unsigned int);
int FUN_002ae898(int, unsigned int);
int FUN_002b06c4(void);
int FUN_002b9024(void);

extern unsigned int g_aocSystem; /* 0x433158 */
extern int DAT_0044e15c; /* 0x44e15c */
extern int DAT_0044e160; /* 0x44e160 */

extern int FUN_002a60b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b9024. */


void FUN_002958f8(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (param_2 != 0) {
    if ((int)param_1 < 0) {
      param_1 = 0;
    }
    else {
      temp_v1 = param_1;
      FUN_002b9024();
      if (temp_v1 == 0) {
        return;
      }
      param_1 = param_1 & 0xffff;
      FUN_002b06c4();
      if ((*(unsigned char *)(param_1 + 3) & 1) != 0) {
        param_1 = (unsigned int)*(short *)(param_1 + 0x88);
        if ((int)param_1 >= 0x81) {
          return;
        }
        temp_v0 = *(char *)(DAT_0044e160 + param_1) - '\x01';
        *(char *)(DAT_0044e160 + param_1) = temp_v0;
        if ('\0' < temp_v0) {
          return;
        }
        temp_v2 = FUN_002a60b4(0x23,param_1);
        temp_v3 = DAT_0044e160;
        if (temp_v2 != 0) {
          FUN_002ae898(0x23,param_1);
          temp_v3 = DAT_0044e160;
        }
        *(unsigned char *)(temp_v3 + param_1) = 0;
        return;
      }
      param_1 = *(unsigned short *)(temp_v1 + 0x90) + 1;
      if (param_1 >= 0x266) {
        return;
      }
    }
  }
  temp_v0 = *(char *)(DAT_0044e15c + param_1) - '\x01';
  *(char *)(DAT_0044e15c + param_1) = temp_v0;
  if ('\0' < temp_v0) {
    return;
  }
  temp_v2 = FUN_002a60b4(0x17,param_1);
  temp_v3 = DAT_0044e15c;
  if (temp_v2 != 0) {
    FUN_002ae898(0x17,param_1);
    FUN_002a60cc(g_aocSystem,0x17,param_1);
    temp_v3 = DAT_0044e15c;
  }
  *(unsigned char *)(temp_v3 + param_1) = 0;
  return;
}

} /* extern "C" */
