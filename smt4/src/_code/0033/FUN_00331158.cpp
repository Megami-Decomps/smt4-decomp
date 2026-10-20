/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331158` (_code @ 0x331158, 0x334 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026a55c(void);
int FUN_0028fc60(void);
int FUN_00299174(...);
int FUN_00299218(int, unsigned int);
int FUN_00299900(...);
int FUN_00299bc4(...);
int FUN_0029cc44(...);
int FUN_0029e328(int);
int FUN_0029e39c(int, int);
int FUN_0029ee6c(int, int);
int FUN_0029efd8(int, int);
int FUN_0029f5d8(int, unsigned int, int, int, int, int, char [4], int, int);
int FUN_002bc01c(void);
int FUN_002bd8e8(...);
int FUN_002c1658(...);

/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_0026a55c. */
/* Supplied declaration required: FUN_0028fc60. */
/* Supplied declaration required: FUN_00299174. */
/* Supplied declaration required: FUN_00299218. */
/* Supplied declaration required: FUN_00299900. */
/* Supplied declaration required: FUN_00299bc4. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029e328. */
/* Supplied declaration required: FUN_0029e39c. */
extern unsigned int FUN_0029e908(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: FUN_0029f5d8. */
extern unsigned char FUN_002b898c(void);
/* Supplied declaration required: FUN_002bc01c. */
/* Supplied declaration required: FUN_002bd8e8. */
extern unsigned int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1658. */


void FUN_00331158(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  char temp_v7 [4];
  
  temp_v0 = DAT_0043da90;
  temp_v6 = 0;
  if (param_1 == 0xb) {
    temp_v6 = DAT_0043da90 + 0xb0;
  }
  else if (param_1 == 0xc) {
    temp_v6 = DAT_0043da90 + 0x114;
  }
  else if (param_1 == 0xd) {
    temp_v6 = DAT_0043da90 + 0x178;
  }
  if (*(int *)(DAT_0043da90 + 0x1c) != 0) {
    if (*(int *)(DAT_0043da90 + 0x1c) == 1) {
      temp_v7[0] = '\0';
      temp_v2 = FUN_002bf4f8(0x1d,0x56d);
      temp_v3 = temp_v6;
      FUN_0029f5d8(temp_v6,temp_v2,temp_v0 + 0xe0c,(int)*(short *)(temp_v0 + 0xe02),
                   (int)*(short *)(temp_v0 + 0xe04),(int)*(short *)(temp_v0 + 0xe06),temp_v7,0,1);
      if ((temp_v3 != 0) || (temp_v3 = temp_v6, FUN_0029efd8(temp_v6,1), temp_v3 != 0)) {
        temp_v2 = FUN_0029e908(temp_v0 + 0x34);
        FUN_00299218((int)*(char *)(temp_v0 + 0x98),temp_v2);
        FUN_00299900();
        return;
      }
      temp_v3 = 0;
      FUN_002c1658(0,1);
      if ((temp_v3 == 0 && temp_v7[0] == '\0') || (param_1 != 0xb)) {
        temp_v3 = 1;
        FUN_002c1658();
        if (temp_v3 != 0) {
          FUN_00299900(0);
          FUN_002bd8e8(temp_v0 + 0x6d4,3,0);
          *(unsigned int *)(temp_v0 + 0x20) = 6;
          temp_v0 = DAT_0043da90;
          puVar7 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar7 = 5;
          *(unsigned int *)(temp_v0 + 0x1c) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          FUN_00299174(temp_v6,1);
        }
        else {
          temp_v6 = 9;
          FUN_002c1658(9,1);
          if (temp_v6 == 0) {
            return;
          }
          if (param_1 == 0xc) {
            return;
          }
          if (param_1 != 0xb) {
            if (param_1 == 0xd) {
              FUN_0029e39c(4,0);
              FUN_0029e328(0x21);
              FUN_0029e328(0x10);
              FUN_0029e328(3);
            }
          }
          else {
            FUN_0029e39c(3,0);
            FUN_0029e328(0xc);
            FUN_0029e328(0x10);
            FUN_0029e328(3);
          }
          FUN_0029ee6c(0,0x323232ff);
          temp_v1 = FUN_002b898c();
          *(unsigned char *)(temp_v0 + 0x31) = temp_v1;
          temp_v0 = DAT_0043da90;
          puVar7 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar7 = 0x28;
          *(unsigned int *)(temp_v0 + 0x1c) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
        }
      }
      else {
        temp_v3 = FUN_0029efc0(temp_v6);
        temp_v4 = FUN_0029efa8(temp_v6);
        temp_v3 = temp_v0 + (temp_v4 + temp_v3) * 2;
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0x147c);
        FUN_0028fc60();
        if (temp_v5 != 0) {
          *(unsigned int *)(temp_v0 + 0x2c) = (unsigned int)*(unsigned short *)(temp_v3 + 0x147c);
          FUN_002bd8e8(temp_v0 + 0x6d4,3,0);
          *(unsigned int *)(temp_v0 + 0x20) = 0xb;
          temp_v0 = DAT_0043da90;
          puVar7 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar7 = 5;
          *(unsigned int *)(temp_v0 + 0x1c) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          FUN_00299174(temp_v6,1);
          FUN_0026a55c();
          FUN_0029cc44(1);
        }
      }
      FUN_002bc01c();
      return;
    }
  }
  else {
    FUN_00299bc4(temp_v6,1);
    *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
  }
  return;
}

} /* extern "C" */
