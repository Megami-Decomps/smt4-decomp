/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e1f58` (_code @ 0x4e1f58, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);

/* Supplied declaration required: FUN_001568f8. */
extern int idSetFindSubjectIndex(int, int);


void FUN_004e1f58(int *param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  do {
    temp_v3 = *param_1;
    temp_v4 = *(int *)(temp_v3 + 0x1ed4) + temp_v5 * 0x1d0;
    temp_v0 = (unsigned int)*(short *)(temp_v4 + 0x68);
    if (-1 < (int)temp_v0) {
      if (param_3 == 0) {
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + param_2 + 0x38);
      }
      if ((param_3 != 0 || temp_v0 != 0) &&
         (temp_v0 = *(unsigned int *)(temp_v4 + 0x50), (temp_v0 & 1) != 0 && (temp_v0 & 0x80) != 0)) {
        if (param_3 != 0) {
          temp_v0 = temp_v0 & 0x8000;
        }
        else {
          temp_v0 = temp_v0 & 0x400;
        }
        if (((temp_v0 != 0) && ((*(unsigned int *)(temp_v4 + 0x10c) & 2) == 0)) &&
           (FUN_001568f8(temp_v3,(int)*(short *)(temp_v4 + 0x6a)), temp_v3 != 0)) {
          temp_v1 = idSetFindSubjectIndex(*param_1,temp_v4);
          if (temp_v1 < 0) {
            temp_v1 = 0;
          }
          temp_v2 = 0;
          temp_v3 = *(int *)(temp_v3 + temp_v1 * 4 + 0xc);
          do {
            piVar4 = (int *)(temp_v2 * 0x1c + 0x2418 + *param_1);
            if ((*piVar4 == temp_v3) && (piVar4[1] == *(int *)(temp_v4 + 100))) goto LAB_004e20a8;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x6d);
          temp_v1 = 0;
          do {
            piVar4 = (int *)(temp_v1 * 0x1c + 0x2418 + *param_1);
            if (*piVar4 < 0) {
              *piVar4 = temp_v3;
              piVar4[1] = *(int *)(temp_v4 + 100);
              piVar4[2] = *(int *)(temp_v4 + 0x40);
              temp_v3 = *(int *)(temp_v4 + 0x10);
              temp_v1 = *(int *)(temp_v4 + 0x14);
              piVar4[3] = *(int *)(temp_v4 + 0xc);
              piVar4[4] = temp_v3;
              piVar4[5] = temp_v1;
              piVar4[6] = (int)*(short *)(temp_v4 + 0x6a);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x6d);
        }
      }
    }
LAB_004e20a8:
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x85) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
