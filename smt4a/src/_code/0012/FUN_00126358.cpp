/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126358` (_code @ 0x126358, 0x1e2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030de32(int);
int FUN_0030de7c(int *, int, int, int, unsigned int);
int FUN_0030e196(int *);

/* Supplied declaration required: FUN_0030de32. */
/* Supplied declaration required: FUN_0030de7c. */
/* Supplied declaration required: FUN_0030e196. */


unsigned int FUN_00126358(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  char *pcVar9;
  unsigned char temp_v6;
  char *pcVar5;
  
  do {
    temp_v2 = param_1[0x1d];
    if (temp_v2 < 0x102) {
      FUN_0030e196(param_1);
      temp_v2 = param_1[0x1d];
      if ((temp_v2 < 0x102) && (param_2 == 0)) {
        return 0;
      }
      if (temp_v2 == 0) {
        temp_v4 = param_1[0x17];
        if (temp_v4 >= 0) {
          temp_v5 = param_1[0xe] + temp_v4;
        }
        else {
          temp_v5 = 0;
        }
        FUN_0030de7c(param_1,temp_v5,param_1[0x1b] - temp_v4,param_2 == 4,param_4);
        param_1[0x17] = param_1[0x1b];
        FUN_0030de32(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          if (param_2 != 4) {
            return 0;
          }
          return 2;
        }
        if (param_2 == 4) {
          return 3;
        }
        return 1;
      }
    }
    param_1[0x18] = 0;
    if ((temp_v2 >= 3) && (param_1[0x1b] != 0)) {
      pcVar9 = (char *)(param_1[0xe] + param_1[0x1b]);
      temp_v0 = pcVar9[-1];
      if ((*pcVar9 != temp_v0) || ((pcVar9[1] != temp_v0 || (pcVar9[2] != temp_v0)))) goto LAB_0012647a;
      pcVar5 = pcVar9 + 2;
      do {
        pcVar4 = pcVar5 + 1;
        if (((((*pcVar4 != temp_v0) || (pcVar4 = pcVar5 + 2, *pcVar4 != temp_v0)) ||
             (pcVar4 = pcVar5 + 3, *pcVar4 != temp_v0)) ||
            ((pcVar4 = pcVar5 + 4, *pcVar4 != temp_v0 || (pcVar4 = pcVar5 + 5, *pcVar4 != temp_v0)))) ||
           ((pcVar4 = pcVar5 + 6, *pcVar4 != temp_v0 ||
            ((pcVar4 = pcVar5 + 7, *pcVar4 != temp_v0 || (pcVar4 = pcVar5 + 8, *pcVar4 != temp_v0))))))
        break;
        pcVar5 = pcVar4;
      } while (pcVar4 < pcVar9 + 0x102);
      temp_v3 = 0x102 - ((int)(pcVar9 + 0x102) - (int)pcVar4);
      param_1[0x18] = temp_v3;
      if (temp_v2 < temp_v3) {
        param_1[0x18] = temp_v2;
        temp_v3 = temp_v2;
      }
      if (temp_v3 < 3) goto LAB_0012647a;
      *(unsigned short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 1;
      temp_v4 = param_1[0x5a8];
      param_1[0x5a8] = temp_v4 + 1;
      *(char *)(param_1[0x5a6] + temp_v4) = (char)(temp_v3 - 3);
      temp_v1 = *(unsigned char *)(((temp_v3 - 3) & 0xff) + 0x547810);
      *(short *)(param_1 + temp_v1 + 0x126) = (short)param_1[temp_v1 + 0x126] + 1;
      *(short *)(param_1 + 0x262) = (short)param_1[0x262] + 1;
      temp_v6 = param_1[0x5a8] != param_1[0x5a7] - 1;
      temp_v4 = param_1[0x18];
      param_1[0x18] = 0;
      param_1[0x1d] = param_1[0x1d] - temp_v4;
      param_1[0x1b] = param_1[0x1b] + temp_v4;
    }
    else {
LAB_0012647a:
      temp_v1 = *(unsigned char *)(param_1[0xe] + param_1[0x1b]);
      *(unsigned short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      temp_v4 = param_1[0x5a8];
      param_1[0x5a8] = temp_v4 + 1;
      *(unsigned char *)(param_1[0x5a6] + temp_v4) = temp_v1;
      *(short *)(param_1 + temp_v1 + 0x25) = (short)param_1[temp_v1 + 0x25] + 1;
      temp_v6 = param_1[0x5a8] != param_1[0x5a7] - 1;
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] - 1;
    }
    if (!temp_v6) {
      temp_v4 = param_1[0x17];
      if (temp_v4 >= 0) {
        temp_v5 = param_1[0xe] + temp_v4;
      }
      else {
        temp_v5 = 0;
      }
      FUN_0030de7c(param_1,temp_v5,param_1[0x1b] - temp_v4,0,param_4);
      param_1[0x17] = param_1[0x1b];
      FUN_0030de32(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( 1 );
}

} /* extern "C" */
