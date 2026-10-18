/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a4e9c` (_code @ 0x4a4e9c, 0x348 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_004a5224; /* 0x4a5224 */
extern unsigned char LAB_004a523c; /* 0x4a523c */
extern unsigned char LAB_004a5254; /* 0x4a5254 */
extern unsigned char LAB_004a6f14; /* 0x4a6f14 */
extern unsigned char LAB_004a6f3c; /* 0x4a6f3c */
extern unsigned char LAB_004a7238; /* 0x4a7238 */
extern unsigned char LAB_004a7588; /* 0x4a7588 */
extern unsigned char DAT_0055c86c; /* 0x55c86c */
extern unsigned char DAT_0055c90c; /* 0x55c90c */
extern int DAT_0056fcc0; /* 0x56fcc0 */
extern int *DAT_0057f0a0; /* 0x57f0a0 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002c8550. */
/* Supplied declaration required: FUN_0031f718. */
/* Supplied declaration required: FUN_003f86f8. */
extern int FUN_004082f8(int);
/* Supplied declaration required: FUN_004930e4. */
/* Supplied declaration required: FUN_00493660. */
/* Supplied declaration required: FUN_004a4848. */
/* Supplied declaration required: FUN_004a6c18. */
/* Supplied declaration required: FUN_004a6c50. */
/* Supplied declaration required: FUN_004a83f8. */
/* Supplied declaration required: FUN_004cf7cc. */
extern int FUN_004d0040(int *);
/* Supplied declaration required: FUN_004d05c4. */
/* Supplied declaration required: FUN_004d0b3c. */


void FUN_004a4e9c(int *param_1)

{
/* irregular: 16 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned short *)(param_1 + 0x2a1c) = 0xffff;
  *(unsigned char *)((int)param_1 + 0xa97e) = 0xff;
  *(unsigned char *)((int)param_1 + 0x95) = 1;
  FUN_004a83f8();
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  FUN_0031f718(0,1);
  FUN_002c8550(7);
  if ((char)param_1[0x218] == '\x01') {
    FUN_004930e4(0);
  }
  piVar1 = (int *)0x100;
  FUN_00163060(0x100,0x100,0,4,1);
  DAT_0057f0a0 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_004a5224;
  FUN_0014e38c(&LAB_004a5224,4,0,0,&LAB_004a6f14,&LAB_004a6f3c,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_004a523c;
  FUN_0015155c(&LAB_004a523c,0x71,1,0,&LAB_004a7238,0,DAT_0057f0a0,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_004a5254;
  FUN_0015155c(&LAB_004a5254,0xea,1,0,&LAB_004a7588,0,DAT_0057f0a0,param_1[1]);
  param_1[3] = (int)puVar2;
  temp_v0 = 0x68;
  if ((char)param_1[0x218] != '\0') {
    FUN_0016007c();
    puVar5 = (unsigned int *)0x0;
    if (temp_v0 != 0) {
      puVar5 = (unsigned int *)FUN_004d0b3c();
      *puVar5 = (unsigned int)&DAT_0055c86c;
    }
    param_1[0x213] = (int)puVar5;
    puVar5[0x19] = (unsigned int)(param_1 + 0x32);
    temp_v0 = param_1[10];
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_004d05c4(param_1 + 0x206,0x13,0x1030,temp_v0);
    *(unsigned char *)(param_1 + 0x20a) = 1;
    temp_v0 = 1;
    *(unsigned short *)((int)param_1 + 0xa97a) = 0;
    do {
      temp_v1 = FUN_004082f8(temp_v0);
      if (temp_v1 != 0) {
        *(short *)((int)param_1 + *(short *)((int)param_1 + 0xa97a) * 2 + 0xa87a) = (short)temp_v0;
        if (param_1[0x2a1d] == temp_v0) {
          *(unsigned short *)(param_1 + 0x2a5f) = *(unsigned short *)((int)param_1 + 0xa97a);
        }
        *(short *)((int)param_1 + 0xa97a) = *(short *)((int)param_1 + 0xa97a) + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x3c);
  }
  else {
    FUN_0016007c();
    piVar1 = (int *)0x0;
    if (temp_v0 != 0) {
      piVar1 = (int *)FUN_004d0b3c();
      *piVar1 = (int)&DAT_0055c90c;
    }
    param_1[0x213] = (int)piVar1;
    (**(romwright_code **)(*piVar1 + 8))();
    *(unsigned short *)(param_1[0x213] + 4) = *(unsigned short *)(param_1[0x213] + 4) | 0x1000;
    *(int **)(param_1[0x213] + 100) = param_1 + 0x32;
    temp_v0 = param_1[10];
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_004d05c4(param_1 + 0x206,0x14,0x40e,temp_v0);
    *(unsigned char *)(param_1 + 0x20a) = 1;
  }
  FUN_004a4848(param_1);
  FUN_004a6c18((int)param_1 + 0x96);
  FUN_004a6c50((int)param_1 + 0x96,0);
  temp_v0 = FUN_004d0040(param_1 + 8);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      if ((short)param_1[temp_v1 * 8 + 0x21a] != 0) {
        FUN_004a6c50((int)param_1 + 0x96,(short)param_1[temp_v1 * 8 + 0x21a]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_004cf7cc(param_1 + 0x37);
  FUN_003f86f8(0x22);
  if ((char)param_1[0x218] != '\0') {
    FUN_00493660(param_1 + 0x32,0x140,0,0x13);
  }
  else {
    FUN_00493660(param_1 + 0x32,0x140,0,0x14);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned int *)(DAT_0056fcc0 + 0x34) = *(unsigned int *)(DAT_0056fcc0 + 0x34) | 3;
  return;
}
