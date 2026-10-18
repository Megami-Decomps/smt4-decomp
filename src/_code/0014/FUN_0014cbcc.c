/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014cbcc` (_code @ 0x14cbcc, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp128; /* 0x128: local_128 */
} param_3_stack;

extern unsigned char LAB_0014ce10; /* 0x14ce10 */
extern unsigned char LAB_0014ce18; /* 0x14ce18 */
extern unsigned char LAB_0014ce24; /* 0x14ce24 */
extern int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_002a43bc. */
/* Supplied declaration required: FUN_002a4584. */
/* Supplied declaration required: FUN_002b64a0. */
/* Supplied declaration required: FUN_002bd75c. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c1870(int, unsigned char *, unsigned int);
extern int FUN_002c30c4(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_0014cbcc(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [128];
  
  temp_v2 = param_2[1];
  FUN_002bf694(temp_v5,*param_2 + 0xc);
  pcVar3 = *(char **)(temp_v2 + 8);
  if (*pcVar3 != '-') {
    FUN_002b64a0(temp_v5);
  }
  else {
    FUN_002b64a0(temp_v5,*(unsigned int *)(param_2[pcVar3[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(param_2[1] + 0xd) != '\0') {
    FUN_002b64a0(temp_v5,&LAB_0014ce10);
  }
  else {
    FUN_002b64a0(temp_v5,&LAB_0014ce18);
  }
  temp_v2 = FUN_002c30c4(*(unsigned int *)(temp_v2 + 8));
  if (temp_v2 == 0) {
    param_2[2] = 0;
  }
  else {
    FUN_002bf694(temp_v6,param_1);
    if ((param_2[4] & 0xfffeffffU) == 0) {
      temp_v3 = 1;
      if ((param_2[4] & 0x10000U) != 0) {
        temp_v3 = 3;
      }
      temp_v0 = temp_v3;
      if (*(char *)(param_2[1] + 0xd) != '\0') {
        if ((temp_v3 & 2) != 0) {
          temp_v0 = temp_v3 & 0xfffffffd;
        }
        else {
          temp_v0 = temp_v3 | 2;
        }
      }
      temp_v2 = DAT_00433130;
      FUN_002a4584(DAT_00433130,temp_v6,temp_v5,&temp_v4,temp_v0,0x80,param_3);
      if (temp_v2 != 0) {
        if (*(char *)(param_2[1] + 0xd) != '\0') {
          FUN_002a43bc(temp_v2,temp_v3,0x80);
        }
        temp_v1 = FUN_002c1870(temp_v2,&LAB_0014ce24,4);
        if (temp_v1 == 0) {
          if (*(int *)(temp_v2 + 0x24) != 0) {
            param_2[2] = 0;
          }
          else {
            temp_v3 = (unsigned int)((param_2[4] & 0x10000U) != 0);
            FUN_002bd75c();
            param_2[2] = temp_v3;
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + 8);
            *(unsigned int *)(param_2[2] + 0x14) = *(unsigned int *)(temp_v2 + 0xc);
            *(unsigned int *)(param_2[2] + 0x18) = *(unsigned int *)(temp_v2 + 0x10);
            *(unsigned int *)(param_2[2] + 0x1c) = *(unsigned int *)(temp_v2 + 0x18);
            *(unsigned int *)(param_2[2] + 0x20) = *(unsigned int *)(temp_v2 + 0x14);
            *(int *)(param_2[2] + 0x28) = temp_v4 - *(int *)(temp_v2 + 0x20);
            *(unsigned int *)(param_2[2] + 0x2c) = *(unsigned int *)(param_2[2] + 0x2c) | 0x10;
            if (*(int *)(temp_v2 + 4) == 1) {
              *(unsigned int *)(param_2[2] + 0x3c) = 1;
              *(unsigned int *)(param_2[2] + 0x40) = 1;
            }
            *(int *)(param_2[2] + 0x24) = *(int *)(temp_v2 + 0x20) + temp_v2;
          }
          param_2[3] = temp_v2;
          param_2[4] = param_2[4] | 2;
          return 1;
        }
        FUN_002c415c(temp_v2);
      }
    }
  }
  return 0;
}
