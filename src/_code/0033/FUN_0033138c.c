/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033138c` (_code @ 0x33138c, 0x334 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_0026a7c4. */
/* Supplied declaration required: FUN_0028ff04. */
/* Supplied declaration required: FUN_00299410. */
/* Supplied declaration required: FUN_002994b4. */
/* Supplied declaration required: FUN_00299b9c. */
/* Supplied declaration required: FUN_00299e60. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
extern unsigned int FUN_0029eba8(int);
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
extern unsigned char FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
extern unsigned int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1830. */


void FUN_0033138c(int param_1)

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
      temp_v2 = FUN_002bf6d0(0x1d,0x56d);
      temp_v3 = temp_v6;
      FUN_0029f878(temp_v6,temp_v2,temp_v0 + 0xe0c,(int)*(short *)(temp_v0 + 0xe02),
                   (int)*(short *)(temp_v0 + 0xe04),(int)*(short *)(temp_v0 + 0xe06),temp_v7,0,1);
      if ((temp_v3 != 0) || (temp_v3 = temp_v6, FUN_0029f278(temp_v6,1), temp_v3 != 0)) {
        temp_v2 = FUN_0029eba8(temp_v0 + 0x34);
        FUN_002994b4((int)*(char *)(temp_v0 + 0x98),temp_v2);
        FUN_00299b9c();
        return;
      }
      temp_v3 = FUN_002c1830(0,1);
      if ((temp_v3 == 0 && temp_v7[0] == '\0') || (param_1 != 0xb)) {
        temp_v3 = FUN_002c1830(1);
        if (temp_v3 != 0) {
          FUN_00299b9c(0);
          FUN_002bdac0(temp_v0 + 0x6d4,3,0);
          *(unsigned int *)(temp_v0 + 0x20) = 6;
          temp_v0 = DAT_0043da90;
          puVar7 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar7 = 5;
          *(unsigned int *)(temp_v0 + 0x1c) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          FUN_00299410(temp_v6,1);
        }
        else {
          temp_v6 = FUN_002c1830(9,1);
          if (temp_v6 == 0) {
            return;
          }
          if (param_1 == 0xc) {
            return;
          }
          if (param_1 != 0xb) {
            if (param_1 == 0xd) {
              FUN_0029e63c(4,0);
              FUN_0029e5c8(0x21);
              FUN_0029e5c8(0x10);
              FUN_0029e5c8(3);
            }
          }
          else {
            FUN_0029e63c(3,0);
            FUN_0029e5c8(0xc);
            FUN_0029e5c8(0x10);
            FUN_0029e5c8(3);
          }
          FUN_0029f10c(0,0x323232ff);
          temp_v1 = FUN_002b8ccc();
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
        temp_v3 = FUN_0029f260(temp_v6);
        temp_v4 = FUN_0029f248(temp_v6);
        temp_v3 = temp_v0 + (temp_v4 + temp_v3) * 2;
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0x147c);
        FUN_0028ff04();
        if (temp_v5 != 0) {
          *(unsigned int *)(temp_v0 + 0x2c) = (unsigned int)*(unsigned short *)(temp_v3 + 0x147c);
          FUN_002bdac0(temp_v0 + 0x6d4,3,0);
          *(unsigned int *)(temp_v0 + 0x20) = 0xb;
          temp_v0 = DAT_0043da90;
          puVar7 = (unsigned int *)(DAT_0043da90 + 0x18);
          *(unsigned int *)(DAT_0043da90 + 0x24) = *(unsigned int *)(DAT_0043da90 + 0x18);
          *puVar7 = 5;
          *(unsigned int *)(temp_v0 + 0x1c) = 0;
          *(unsigned int *)(temp_v0 + 0x14) = 0;
          FUN_00299410(temp_v6,1);
          FUN_0026a7c4();
          FUN_0029cee4(1);
        }
      }
      FUN_002bc200();
      return;
    }
  }
  else {
    FUN_00299e60(temp_v6,1);
    *(int *)(temp_v0 + 0x1c) = *(int *)(temp_v0 + 0x1c) + 1;
  }
  return;
}
