/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00486328` (_code @ 0x486328, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0048b140(int, unsigned int, unsigned char);
extern int FUN_00491abc(int, unsigned int, unsigned int);


void FUN_00486328(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6)

{
/* irregular: irregular input(s): in_s0, in_s2 */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float in_s0;
  float in_s2;
  
  temp_v2 = param_1 + param_2 * 0x10;
  if (param_3 == 0) {
    *(unsigned short *)(temp_v2 + 0x166) = 0;
    *(unsigned char *)(temp_v2 + 0x168) = 0;
    *(unsigned short *)(temp_v2 + 0x16a) = 0;
    *(unsigned char *)(temp_v2 + 0x16c) = 0;
    *(unsigned char *)(temp_v2 + 0x16d) = 0;
    *(unsigned short *)(temp_v2 + 0x16e) = 0;
    *(unsigned short *)(temp_v2 + 0x170) = 0;
    *(unsigned char *)(temp_v2 + 0x169) = 0;
    return;
  }
  temp_v0 = FUN_00491abc(param_1,param_4,param_5);
  temp_v1 = FUN_0048b140(param_1,param_4,*(unsigned char *)(temp_v0 + 4));
  *(short *)(temp_v2 + 0x166) = (short)param_4;
  *(char *)(temp_v2 + 0x168) = (char)param_5;
  *(unsigned short *)(temp_v2 + 0x16a) = (unsigned short)*(unsigned char *)(temp_v0 + 4);
  *(unsigned char *)(temp_v2 + 0x16c) = *(unsigned char *)(temp_v1 + 3);
  if (param_6 != 0) {
    *(unsigned char *)(temp_v2 + 0x16d) = 1;
  }
  else {
    *(unsigned char *)(temp_v2 + 0x16d) = 0;
  }
  *(short *)(temp_v2 + 0x16e) = (short)(int)in_s0;
  *(short *)(temp_v2 + 0x170) = (short)(int)in_s2;
  return;
}
