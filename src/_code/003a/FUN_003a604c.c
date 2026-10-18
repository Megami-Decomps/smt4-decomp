/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a604c` (_code @ 0x3a604c, 0x360 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0028757c(); /* 0x28757c */
extern unsigned char LAB_003a0320; /* 0x3a0320 */
extern unsigned char DAT_00421ff8; /* 0x421ff8 */
extern unsigned char DAT_004221d8; /* 0x4221d8 */

/* Supplied declaration required: FUN_0022e614. */
/* Supplied declaration required: FUN_00232800. */
extern unsigned int *FUN_002333bc(void);
/* Supplied declaration required: FUN_00233600. */
/* Supplied declaration required: FUN_002639f4. */
/* Supplied declaration required: FUN_00282e6c. */
extern int FUN_0028757c(int);
extern int FUN_002876d0(unsigned int);
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028dc54. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
extern short *FUN_002c0c04(unsigned char, unsigned int);
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5f58. */
/* Supplied declaration required: FUN_00343ce4. */
/* Supplied declaration required: FUN_00343d40. */
/* Supplied declaration required: FUN_00343e44. */
/* Supplied declaration required: FUN_003a18b8. */
/* Supplied declaration required: FUN_003a4734. */
/* Supplied declaration required: FUN_003a4818. */


unsigned int * FUN_003a604c(unsigned int *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 21 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  short *psVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  
  *param_1 = 0;
  temp_v1 = FUN_0022e614(param_1 + 0xe0);
  temp_v1 = FUN_0022e614(temp_v1 + 0x14);
  *(unsigned char **)(temp_v1 + 0x494) = &DAT_004221d8;
  temp_v1 = temp_v1 + 0x4ec;
  FUN_002c5f58(temp_v1,FUN_0028757c,0x74,9);
  temp_v1 = temp_v1 + 0x414;
  FUN_002c5f58(temp_v1,&LAB_003a0320,0x1002,9);
  temp_v1 = FUN_0028757c(temp_v1 + 0x9014);
  puVar7 = (unsigned int *)(temp_v1 - 0x9ca8);
  FUN_003a4734(puVar7);
  *(unsigned int *)(temp_v1 - 0x9c98) = param_2;
  *puVar7 = 0;
  *(char *)(temp_v1 - 0x9c94) = (char)param_3;
  *(int *)(temp_v1 - 0x9c90) = param_4;
  *(unsigned int *)(temp_v1 - 0x9448) = 0xffffffff;
  *(unsigned int *)(temp_v1 - 0x9444) = 0;
  *(unsigned int *)(temp_v1 + 0xc07c) = 0;
  *(unsigned int *)(temp_v1 + 0xc080) = 0;
  *(unsigned int *)(temp_v1 + 0xc098) = 0;
  *(unsigned int *)(temp_v1 + 0xc09c) = 0;
  *(unsigned int *)(temp_v1 + 0xc0a0) = 0;
  *(unsigned int *)(temp_v1 - 0x9b48) = 0;
  *(unsigned int *)(temp_v1 - 0x9b44) = 0;
  *(unsigned int *)(temp_v1 - 0x9b40) = 0;
  *(unsigned int *)(temp_v1 - 0x9938) = 0;
  *(unsigned int *)(temp_v1 - 0x9934) = 0;
  *(unsigned int *)(temp_v1 - 0x9930) = 0;
  *(unsigned char *)(temp_v1 - 0x9c8c) = 0;
  *(unsigned char *)(temp_v1 - 0x9c8b) = 0;
  FUN_00233600(temp_v1 - 0x9900);
  FUN_00232800(temp_v1 - 0x9928,0x140,0,0x2b);
  FUN_00232800(temp_v1 - 0x9914,0x140,0,0x2b);
  temp_v2 = 0x68;
  FUN_002c23f8();
  puVar4 = (unsigned int *)0x0;
  if (temp_v2 != 0) {
    puVar4 = (unsigned int *)FUN_002333bc();
    *puVar4 = (unsigned int)&DAT_00421ff8;
  }
  *(unsigned int **)(temp_v1 - 0x944c) = puVar4;
  FUN_002639f4();
  psVar5 = (short *)FUN_002c0c04(*(unsigned char *)(temp_v1 - 0x9c94),*(unsigned int *)(temp_v1 - 0x9c90));
  if (*psVar5 != 0) {
    *(unsigned char *)(temp_v1 - 0x9c8c) = 1;
  }
  if (*(int *)(temp_v1 - 0x9c98) == 1) {
    *(unsigned int *)(temp_v1 - 0x9ca4) = 0xd;
    *(unsigned int *)(temp_v1 - 0x9ca0) = 0;
    FUN_0028dc54();
    FUN_0028d974();
    FUN_002c4e28(0x2b);
    FUN_002c5ab8(0x2b,0);
    *(unsigned int *)(temp_v1 - 0x992c) = 0x83;
    puVar4 = puVar7;
    FUN_003a4818();
    *(char *)(temp_v1 - 0x9c8b) = (char)puVar4;
    FUN_002a0678(0,1);
    FUN_002a0678(1);
    return puVar7;
  }
  *(unsigned int *)(temp_v1 - 0x992c) = 0x1f;
  *(unsigned int *)(temp_v1 - 0x9ca4) = 0;
  *(unsigned int *)(temp_v1 - 0x9ca0) = 0;
  FUN_003a18b8(puVar7);
  FUN_00282e6c(0,0xff);
  FUN_00282e6c(1,0xff);
  temp_v3 = 0x1000060;
  if (param_3 != 0) {
    if (param_3 == 1) {
      FUN_00343ce4(param_4,1);
      if (param_4 != 5) {
        if (param_4 != 9) {
          temp_v3 = 0x100005c;
          temp_v2 = FUN_002876d0(0x100005c);
          if (temp_v2 != 1) {
            FUN_002a0640(temp_v3,0,0x3c);
          }
        }
      }
      else {
        temp_v2 = FUN_002876d0(0x1000060);
        if (temp_v2 != 1) {
          FUN_002a0640(temp_v3,0,0x3c);
        }
      }
    }
  }
  else {
    FUN_00343d40(param_4,1);
    if (!(param_4 == 6 || param_4 == 7)) {
      if (param_4 != 8) {
        temp_v3 = 0x100005b;
        temp_v2 = FUN_002876d0(0x100005b);
        if (temp_v2 != 1) {
          FUN_002a0640(temp_v3,0,0x3c);
        }
      }
    }
    else {
      temp_v2 = FUN_002876d0(0x1000060);
      if (temp_v2 != 1) {
        FUN_002a0640(temp_v3,0,0x3c);
      }
    }
  }
  puVar4 = puVar7;
  FUN_003a4818();
  temp_v2 = 0;
  *(char *)(temp_v1 - 0x9c8b) = (char)puVar4;
  do {
    temp_v1 = 0;
    if (*(short *)((int)puVar7 + temp_v2 * 0x1002 + 0x1c94) != 0) {
      do {
        temp_v0 = temp_v1 * 4 + temp_v2 * 0x1002;
        if ((*(unsigned short *)((int)puVar7 + temp_v0 + 0xc96) & 1) != 0) {
          FUN_00343e44(*(unsigned short *)((int)puVar7 + temp_v0 + 0xc94),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)(unsigned int)*(unsigned short *)((int)puVar7 + temp_v2 * 0x1002 + 0x1c94));
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 9);
  FUN_0029c0fc(0x1c,1);
  return puVar7;
}
