/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf818` (_code @ 0x2bf818, 0x298 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b1ad4(int);
int FUN_002b1c44(int);
int FUN_002b1e08(int);
int timerStart(int, int, int);
int __aeabi_idivmod(...);

/* Supplied declaration required: FUN_002b1ad4. */
/* Supplied declaration required: FUN_002b1c44. */
/* Supplied declaration required: FUN_002b1e08. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: __aeabi_idivmod. */


int FUN_002bf818(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  int temp_v2;
  int *piVar4;
  short *psVar5;
  unsigned char temp_v3;
  
  if (param_1 == 0) {
    return 1;
  }
  temp_v2 = *(int *)(param_1 + 4);
  temp_v3 = temp_v2 < 0;
  if (temp_v3) {
    temp_v2 = *(int *)(param_1 + 8);
  }
  if (temp_v3 && temp_v2 < 0) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x86) == '\0') && (*(int *)(param_1 + 0x4c) != 0)) {
    psVar5 = (short *)(*(int *)(param_1 + 0x4c) + *(short *)(param_1 + 0x50) * 0xc);
    if ((int)*(short *)(param_1 + 0x52) >= (int)(unsigned int)(unsigned short)psVar5[4]) {
      if ((char)psVar5[5] != '\0') {
        if (*(char *)(param_1 + 0x54) != '\0') {
          *(int *)(param_1 + 0xc) = (int)psVar5[2] << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar5[3] << 0xc;
        }
        else {
          *(int *)(param_1 + 0xc) = (int)*psVar5 << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar5[1] << 0xc;
        }
        *(unsigned short *)(param_1 + 0x52) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x54) != '\0') {
          *(int *)(param_1 + 0xc) = (int)*psVar5 << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar5[1] << 0xc;
        }
        else {
          *(int *)(param_1 + 0xc) = (int)psVar5[2] << 0xc;
          *(int *)(param_1 + 0x10) = (int)psVar5[3] << 0xc;
        }
        temp_v3 = *(char *)(param_1 + 0x84) != '\0';
        temp_v2 = 0;
        if (temp_v3) {
          temp_v2 = *(int *)(param_1 + 0x78);
        }
        if ((temp_v3 && temp_v2 != 0) && (*(int *)(temp_v2 + *(short *)(param_1 + 0x7c) * 0x1c) != -1)) {
          temp_v0 = *(short *)(param_1 + 0x7c) + 1;
          *(short *)(param_1 + 0x7c) = temp_v0;
          piVar4 = (int *)(*(int *)(param_1 + 0x78) + temp_v0 * 0x1c);
          temp_v2 = *piVar4;
          if (temp_v2 != -1 && temp_v2 != -3) {
            if (temp_v2 != -2) {
              timerStart(param_1,(int)(short)temp_v2,(int)(char)piVar4[1]);
            }
            else {
              *(unsigned short *)(param_1 + 0x7c) = 0;
              timerStart(param_1,(int)(short)**(unsigned int **)(param_1 + 0x78),
                           (int)*(char *)(*(unsigned int **)(param_1 + 0x78) + 1));
            }
          }
          else {
            *(unsigned char *)(param_1 + 0x86) = 1;
          }
        }
        else {
          *(unsigned char *)(param_1 + 0x86) = 1;
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x54) != '\0') {
        temp_v2 = __aeabi_idivmod(((int)*psVar5 - (int)psVar5[2]) * 0x1000);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v2;
        temp_v2 = __aeabi_idivmod(((int)psVar5[1] - (int)psVar5[3]) * 0x1000,psVar5[4]);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + temp_v2;
      }
      else {
        temp_v2 = __aeabi_idivmod(((int)psVar5[2] - (int)*psVar5) * 0x1000);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v2;
        temp_v2 = __aeabi_idivmod(((int)psVar5[3] - (int)psVar5[1]) * 0x1000,psVar5[4]);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + temp_v2;
      }
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
    }
  }
  FUN_002b1e08(param_1);
  FUN_002b1c44(param_1);
  FUN_002b1ad4(param_1);
  temp_v3 = *(char *)(param_1 + 0x86) != '\0';
  temp_v1 = '\0';
  if (temp_v3) {
    temp_v1 = *(char *)(param_1 + 0x87);
  }
  if (temp_v3 && temp_v1 != '\0') {
    temp_v3 = *(char *)(param_1 + 0x88) != '\0';
    temp_v1 = '\0';
    if (temp_v3) {
      temp_v1 = *(char *)(param_1 + 0x89);
    }
    if (temp_v3 && temp_v1 != '\0') {
      *(unsigned char *)(param_1 + 0x8a) = 1;
      *(unsigned char *)(param_1 + 0x85) = 1;
      return (int)*(char *)(param_1 + 0x8a);
    }
  }
  *(unsigned char *)(param_1 + 0x8a) = 0;
  *(unsigned char *)(param_1 + 0x85) = 1;
  return (int)*(char *)(param_1 + 0x8a);
}

} /* extern "C" */
