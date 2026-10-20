/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e6880` (_code @ 0x4e6880, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_001633a0(short);
extern short FUN_004e9ae8(int *, int *, int, unsigned int);
extern int FUN_004ee568(int *);


void FUN_004e6880(int *param_1,unsigned int param_2)

{
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int aiStack_1d8 [109];
  
  temp_v3 = 0;
  temp_v4 = 0;
  do {
    temp_v2 = *(int *)(*param_1 + 0x1ffc);
    puVar5 = (unsigned int *)(temp_v2 + temp_v4 * 0x408);
    if ((*puVar5 & DAT_00571190) != 0 || (puVar5[1] & DAT_00571194) != 0) {
      if (param_2 != 0x16) {
        if (param_2 != 0x1c) {
          temp_v0 = *(unsigned short *)(temp_v2 + temp_v4 * 0x408 + 0x274);
          if (param_2 != 0x1f) {
            if (((unsigned int)temp_v0 & (1 << (param_2 & 0xff))) != 0) {
              aiStack_1d8[temp_v3] = (int)*(short *)(temp_v2 + temp_v4 * 0x408 + 0x6e);
              temp_v3 = temp_v3 + 1;
            }
          }
          else {
            temp_v0 = temp_v0 & 0x220;
            if (temp_v0 != 0) {
              aiStack_1d8[temp_v3] = (int)*(short *)(temp_v2 + temp_v4 * 0x408 + 0x6e);
              temp_v3 = temp_v3 + 1;
            }
          }
        }
        else {
          temp_v0 = *(unsigned short *)(temp_v2 + temp_v4 * 0x408 + 0x274) & 0x39c0;
          if (temp_v0 != 0) {
            aiStack_1d8[temp_v3] = (int)*(short *)(temp_v2 + temp_v4 * 0x408 + 0x6e);
            temp_v3 = temp_v3 + 1;
          }
        }
      }
      else {
        temp_v0 = *(unsigned short *)(temp_v2 + temp_v4 * 0x408 + 0x274) & 0x3be0;
        if (temp_v0 != 0) {
          aiStack_1d8[temp_v3] = (int)*(short *)(temp_v2 + temp_v4 * 0x408 + 0x6e);
          temp_v3 = temp_v3 + 1;
        }
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      temp_v1 = FUN_004e9ae8(param_1,aiStack_1d8,temp_v3,1);
      temp_v3 = FUN_001633a0(temp_v1 - 1);
      temp_v4 = FUN_004ee568(param_1);
      *(unsigned char *)(aiStack_1d8[temp_v3] + temp_v4 + 0x38) = 1;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
