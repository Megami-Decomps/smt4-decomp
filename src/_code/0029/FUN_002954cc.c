/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002954cc` (_code @ 0x2954cc, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern char FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bfdfc. */
extern unsigned int FUN_002bff9c(void);
extern int FUN_002c0e4c(void);
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


void FUN_002954cc(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar8;
  int temp_v6;
  unsigned char temp_v7 [4];
  int aiStack_7c [8];
  int aiStack_5c [8];
  int aiStack_3c [5];
  int aiStack_28 [4];
  
  FUN_002c0ec4(0x3f,0);
  temp_v1 = FUN_002c0e9c();
  if (param_2 < 4) {
    FUN_002c0ec4(0x3f,0);
    temp_v2 = FUN_002c0e4c();
    param_1 = param_1 & 0xffff;
    FUN_002b9364();
    if (param_1 != 0) {
      if (0 < temp_v2) {
        param_1 = (unsigned int)*(unsigned char *)(param_1 + 0x92);
      }
      temp_v3 = 0;
      temp_v6 = 0;
      if (temp_v3 < temp_v2) {
        do {
          temp_v6 = temp_v3;
          if (*(unsigned short *)(temp_v1 + temp_v3 * 100) == param_1) break;
          temp_v3 = temp_v3 + 1;
          temp_v6 = 0;
        } while (temp_v3 < temp_v2);
      }
      FUN_002bcf58(temp_v7,temp_v1 + temp_v6 * 100,100);
      piVar8 = (int *)0x0;
      temp_v5 = 0xffffffff;
      if (param_2 == 0) {
        piVar8 = aiStack_7c;
      }
      else if (param_2 == 1) {
        piVar8 = aiStack_5c;
      }
      else if (param_2 == 2) {
        piVar8 = aiStack_3c;
      }
      else if (param_2 == 3) {
        piVar8 = aiStack_28;
      }
      temp_v1 = *(int *)(param_2 * 4 + 0x4398bc);
      if (temp_v1 != 0) {
        temp_v0 = '\0';
        piVar5 = piVar8;
        do {
          if (*piVar5 != 0) {
            temp_v5 = (unsigned int)temp_v0;
          }
          temp_v1 = temp_v1 - 1;
          temp_v0 = temp_v0 + '\x01';
          piVar5 = piVar5 + 1;
        } while (temp_v1 != 0);
        if (-1 < (int)temp_v5) {
          temp_v0 = FUN_0023ec3c(temp_v5 & 0xffff);
          temp_v1 = piVar8[temp_v0];
          temp_v4 = FUN_002bff9c();
          FUN_002bfdfc(1,temp_v1,temp_v4,4);
        }
      }
    }
  }
  return;
}
