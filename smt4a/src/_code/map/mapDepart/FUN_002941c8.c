/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002941c8` (_code @ 0x2941c8, 0x45c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0029462c; /* 0x29462c */
extern unsigned char LAB_00294640; /* 0x294640 */
extern unsigned char LAB_00294654; /* 0x294654 */
extern unsigned char LAB_00294664; /* 0x294664 */
extern int FUN_002991d4(); /* 0x2991d4 */
extern unsigned char LAB_00329a78; /* 0x329a78 */
extern int FUN_00329a90(); /* 0x329a90 */
extern unsigned char LAB_00329d64; /* 0x329d64 */
extern int FUN_003581bc(); /* 0x3581bc */
extern unsigned char LAB_0037a070; /* 0x37a070 */
extern unsigned char LAB_0037a074; /* 0x37a074 */
extern unsigned int *DAT_005806c4; /* 0x5806c4 */
extern int DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0029a794. */
extern unsigned int FUN_00480738(unsigned int);
/* Supplied declaration required: FUN_00480a54. */
extern unsigned int FUN_00480c28(void);


void FUN_002941c8(int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x4cc,1);
  DAT_005806c4 = puVar1;
  temp_v0 = FUN_00162e8c();
  if (param_1 != (int *)0x0) {
    temp_v1 = *param_1;
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) {
          if (temp_v1 != 3) {
            if (temp_v1 != 4) {
              if (temp_v1 == 5) {
                FUN_0029a794(puVar1,0);
                puVar1[3] = 5;
                puVar1[0x2c] = 0;
                puVar1[0x11] = param_1[0x20];
                *(unsigned char *)(puVar1 + 0x132) = 0;
              }
            }
            else {
              FUN_0029a794(puVar1,0);
              puVar1[3] = 4;
              puVar1[0x2c] = 0;
              puVar1[0x2d] = param_1[0x14];
              puVar1[0x34] = 0;
              *(unsigned char *)(puVar1 + 0x132) = 0;
            }
          }
          else {
            FUN_0029a794(puVar1,0);
            puVar1[3] = 3;
            puVar1[5] = param_1[2];
            puVar1[9] = param_1[6];
            puVar1[0xd] = param_1[10];
            puVar1[6] = param_1[3];
            puVar1[10] = param_1[7];
            puVar1[0xe] = param_1[0xb];
            puVar1[0x2c] = 0;
            puVar1[0x2d] = 0;
            puVar1[0x34] = 0;
            *(unsigned char *)(puVar1 + 0x132) = 0;
          }
        }
        else {
          FUN_0029a794(puVar1,0);
          puVar1[3] = 2;
          temp_v0 = param_1[2];
          puVar1[5] = temp_v0;
          puVar1[9] = param_1[6];
          puVar1[0xd] = param_1[10];
          puVar1[6] = param_1[3];
          puVar1[10] = param_1[7];
          puVar1[0xe] = param_1[0xb];
          puVar1[7] = param_1[4];
          puVar1[0xb] = param_1[8];
          puVar1[0xf] = param_1[0xc];
          puVar1[8] = param_1[5];
          puVar1[0xc] = param_1[9];
          puVar1[0x10] = param_1[0xd];
          puVar1[0x2c] = 0;
          puVar1[0x2d] = 0;
          puVar1[0x34] = 0;
          if (DAT_005f15fc >= 100) {
            puVar1[0x1f] = param_1[0xf];
            puVar1[0x20] = param_1[0x10];
            puVar1[0x21] = param_1[0x11];
            puVar1[0x22] = param_1[0x12];
          }
          *(unsigned char *)(puVar1 + 0x132) = 0;
          if (temp_v0 == 0x3cb) {
            puVar1[0x2e] = param_1[0x15];
            puVar1[0x2f] = param_1[0x1b];
            puVar1[0x30] = param_1[0x1c];
            puVar1[0x31] = param_1[0x1d];
            puVar1[0x32] = param_1[0x1e];
            puVar1[0x33] = param_1[0x1f];
            *(unsigned char *)(puVar1 + 0x132) = 1;
          }
        }
      }
      else {
        FUN_0029a794(puVar1,0);
        temp_v0 = 0;
        puVar1[3] = 1;
        do {
          temp_v1 = param_1[temp_v0 + 2];
          puVar1[temp_v0 + 5] = temp_v1;
          puVar1[temp_v0 + 9] = param_1[temp_v0 + 6];
          puVar1[temp_v0 + 0xd] = param_1[temp_v0 + 10];
          FUN_00480a54();
          if (temp_v1 != 0) {
            puVar1[0x34] = puVar1[0x34] + 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 4);
        puVar1[0x2c] = param_1[0x13];
        puVar1[0x2d] = 0;
        puVar1[0x2e] = param_1[0x15];
        puVar1[0x2f] = param_1[0x1b];
        puVar1[0x30] = param_1[0x1c];
        puVar1[0x31] = param_1[0x1d];
        puVar1[0x32] = param_1[0x1e];
        puVar1[0x33] = param_1[0x1f];
        if (DAT_005f15fc >= 100) {
          puVar1[0x1f] = param_1[0xf];
          puVar1[0x20] = param_1[0x10];
          puVar1[0x21] = param_1[0x11];
          puVar1[0x22] = param_1[0x12];
        }
        *(unsigned char *)(puVar1 + 0x132) = 0;
      }
    }
    else {
      FUN_0029a794(puVar1,1);
      puVar1[3] = 0;
      puVar1[4] = param_1[1];
      *(int *)(temp_v0 + 0x24) = param_1[1];
      puVar1[0x2c] = 0;
      puVar1[0x2d] = 0;
      temp_v2 = FUN_00480c28();
      puVar1[0x2e] = temp_v2;
      temp_v0 = 0;
      do {
        temp_v2 = FUN_00480738((temp_v0 + 1U) & 0xff);
        temp_v1 = temp_v0 + 1;
        puVar1[temp_v0 + 0x2f] = temp_v2;
        temp_v0 = temp_v1;
      } while (temp_v1 < 5);
      if (DAT_005f15fc >= 100) {
        puVar1[0x1f] = param_1[0xf];
        puVar1[0x20] = param_1[0x10];
        puVar1[0x21] = param_1[0x11];
        puVar1[0x22] = param_1[0x12];
      }
      *(unsigned char *)(puVar1 + 0x132) = 0;
    }
  }
  else {
    FUN_0029a794(puVar1,1);
  }
  *(unsigned char *)(puVar1 + 2) = 0;
  puVar5 = &LAB_0029462c;
  FUN_0014e38c(&LAB_0029462c,4,0,0,FUN_002991d4,&LAB_00329a78,0);
  *puVar1 = (unsigned int)puVar5;
  FUN_0015155c(&LAB_00294640,0x71,0,0,&LAB_00329d64,&LAB_0037a074,0,puVar5);
  FUN_0015155c(&LAB_00294654,0x75,0,0,FUN_00329a90,&LAB_0037a070,0,*puVar1);
  FUN_0015155c(&LAB_00294664,0xea,0,0,FUN_003581bc,0,0,*puVar1);
  return;
}
