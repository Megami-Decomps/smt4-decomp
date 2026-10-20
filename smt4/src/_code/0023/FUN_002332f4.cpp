/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002332f4` (_code @ 0x2332f4, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230954(int, int);
int FUN_00233344(int, int);
int FUN_00233410(int);
int FUN_002b1ad4(int);
int FUN_002b1c44(int);
int FUN_002b1e08(int);
int FUN_002bd8e8(int, int, int, int, unsigned int);
int aeabi_idivmod(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00230954. */
/* Supplied declaration required: FUN_00233344. */
/* Supplied declaration required: FUN_00233410. */
/* Supplied declaration required: FUN_002b1ad4. */
/* Supplied declaration required: FUN_002b1c44. */
/* Supplied declaration required: FUN_002b1e08. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: aeabi_idivmod. */


/* WARNING: Removing unreachable block (ram,0x00233360) */

int FUN_002332f4(int param_1)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int unaff_r4;
  short *psVar7;
  unsigned char temp_v5;
  
  FUN_00230954(param_1 + 0x55c,param_1 + 0x20);
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 0xc))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  FUN_00233410(param_1 + 0x20);
  FUN_00233344(param_1 + 0xdc,2);
  temp_v2 = param_1 + 0x2a0;
  if (temp_v2 == 0) {
    return 1;
  }
  temp_v3 = *(int *)(param_1 + 0x2a4);
  temp_v5 = temp_v3 < 0;
  if (temp_v5) {
    temp_v3 = *(int *)(param_1 + 0x2a8);
  }
  if (temp_v5 && temp_v3 < 0) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x326) == '\0') && (*(int *)(param_1 + 0x2ec) != 0)) {
    temp_v3 = (int)*(short *)(param_1 + 0x2f0);
    psVar7 = (short *)(*(int *)(param_1 + 0x2ec) + temp_v3 * 0xc);
    if ((int)*(short *)(param_1 + 0x2f2) >= (int)(unsigned int)(unsigned short)psVar7[4]) {
      if ((char)psVar7[5] != '\0') {
        if (*(char *)(param_1 + 0x2f4) != '\0') {
          *(int *)(param_1 + 0x2ac) = (int)psVar7[2] << 0xc;
          *(int *)(param_1 + 0x2b0) = (int)psVar7[3] << 0xc;
        }
        else {
          *(int *)(param_1 + 0x2ac) = (int)*psVar7 << 0xc;
          *(int *)(param_1 + 0x2b0) = (int)psVar7[1] << 0xc;
        }
        *(unsigned short *)(param_1 + 0x2f2) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x2f4) != '\0') {
          *(int *)(param_1 + 0x2ac) = (int)*psVar7 << 0xc;
          *(int *)(param_1 + 0x2b0) = (int)psVar7[1] << 0xc;
        }
        else {
          *(int *)(param_1 + 0x2ac) = (int)psVar7[2] << 0xc;
          *(int *)(param_1 + 0x2b0) = (int)psVar7[3] << 0xc;
        }
        temp_v5 = *(char *)(param_1 + 0x324) != '\0';
        temp_v4 = 0;
        if (temp_v5) {
          temp_v4 = *(int *)(param_1 + 0x318);
        }
        if ((temp_v5 && temp_v4 != 0) && (*(int *)(temp_v4 + *(short *)(param_1 + 0x31c) * 0x1c) != -1)) {
          temp_v0 = *(short *)(param_1 + 0x31c) + 1;
          *(short *)(param_1 + 0x31c) = temp_v0;
          piVar6 = (int *)(*(int *)(param_1 + 0x318) + temp_v0 * 0x1c);
          temp_v4 = *piVar6;
          if (temp_v4 != -1 && temp_v4 != -3) {
            if (temp_v4 != -2) {
              FUN_002bd8e8(temp_v2,(int)(short)temp_v4,(int)(char)piVar6[1],temp_v3,unaff_r4);
            }
            else {
              *(unsigned short *)(param_1 + 0x31c) = 0;
              FUN_002bd8e8(temp_v2,(int)(short)**(unsigned int **)(param_1 + 0x318),
                           (int)*(char *)(*(unsigned int **)(param_1 + 0x318) + 1),temp_v3,unaff_r4);
            }
          }
          else {
            *(unsigned char *)(param_1 + 0x326) = 1;
          }
        }
        else {
          *(unsigned char *)(param_1 + 0x326) = 1;
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x2f4) != '\0') {
        temp_v3 = aeabi_idivmod(((int)*psVar7 - (int)psVar7[2]) * 0x1000);
        *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + temp_v3;
        temp_v3 = aeabi_idivmod(((int)psVar7[1] - (int)psVar7[3]) * 0x1000,psVar7[4]);
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + temp_v3;
      }
      else {
        temp_v3 = aeabi_idivmod(((int)psVar7[2] - (int)*psVar7) * 0x1000);
        *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + temp_v3;
        temp_v3 = aeabi_idivmod(((int)psVar7[3] - (int)psVar7[1]) * 0x1000,psVar7[4]);
        *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + temp_v3;
      }
      *(short *)(param_1 + 0x2f2) = *(short *)(param_1 + 0x2f2) + 1;
    }
  }
  FUN_002b1e08(temp_v2);
  FUN_002b1c44(temp_v2);
  FUN_002b1ad4(temp_v2);
  temp_v5 = *(char *)(param_1 + 0x326) != '\0';
  temp_v1 = '\0';
  if (temp_v5) {
    temp_v1 = *(char *)(param_1 + 0x327);
  }
  if (temp_v5 && temp_v1 != '\0') {
    temp_v5 = *(char *)(param_1 + 0x328) != '\0';
    temp_v1 = '\0';
    if (temp_v5) {
      temp_v1 = *(char *)(param_1 + 0x329);
    }
    if (temp_v5 && temp_v1 != '\0') {
      *(unsigned char *)(param_1 + 0x32a) = 1;
      *(unsigned char *)(param_1 + 0x325) = 1;
      return (int)*(char *)(param_1 + 0x32a);
    }
  }
  *(unsigned char *)(param_1 + 0x32a) = 0;
  *(unsigned char *)(param_1 + 0x325) = 1;
  return (int)*(char *)(param_1 + 0x32a);
}

} /* extern "C" */
