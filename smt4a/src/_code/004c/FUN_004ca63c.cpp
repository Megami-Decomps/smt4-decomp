/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ca63c` (_code @ 0x4ca63c, 0x370 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_002e6354(unsigned int *, int);
int FUN_002e6dd4(int, int);
int FUN_003edaf0(unsigned int *, int);
int FUN_003f1138(void);
int FUN_0041a7dc(int);
int FUN_004c3d00(unsigned int *);
int FUN_004c571c(int, int, unsigned int *, int);
int FUN_0050d71c(int);
int rt_memcpy_w(unsigned int *, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int DAT_0057aa30; /* 0x57aa30 */
extern unsigned int DAT_0057aa34; /* 0x57aa34 */
extern unsigned int DAT_0057aa38; /* 0x57aa38 */
extern unsigned int DAT_0057aa3c; /* 0x57aa3c */
extern unsigned int DAT_0057aa40; /* 0x57aa40 */
extern unsigned int DAT_0057aa44; /* 0x57aa44 */
extern unsigned int DAT_0057aa48; /* 0x57aa48 */
extern unsigned int DAT_0057aa4c; /* 0x57aa4c */
extern unsigned int DAT_0057aa50; /* 0x57aa50 */
extern unsigned int DAT_0057aa54; /* 0x57aa54 */
extern unsigned int DAT_0057aa60; /* 0x57aa60 */
extern unsigned int DAT_0057aa64; /* 0x57aa64 */
extern unsigned int DAT_0057aa88; /* 0x57aa88 */
extern unsigned int DAT_0057aa8c; /* 0x57aa8c */
extern unsigned int DAT_0057aa90; /* 0x57aa90 */
extern unsigned int DAT_0057aa94; /* 0x57aa94 */

extern unsigned int FUN_0015688c(void);
extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_001ab854(void);
extern unsigned int FUN_002919a4(void);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd4. */
extern unsigned int *FUN_003e83b4(unsigned int *, int, unsigned int);
/* Supplied declaration required: FUN_003edaf0. */
/* Supplied declaration required: FUN_003f1138. */
/* Supplied declaration required: FUN_0041a7dc. */
/* Supplied declaration required: FUN_004c3d00. */
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_0050d71c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004ca63c(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  puVar3 = (unsigned int *)0x0;
  *(unsigned int *)(param_2 + 0x228) = 0;
  FUN_0050d71c(param_2 + 0x1be);
  FUN_0050d71c(param_2 + 0x1c6);
  FUN_002e6dd4(param_2 + 0x1d6,0x50);
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        puVar3 = (unsigned int *)FUN_003e83b4(param_1,param_4,0);
        if (puVar3 == (unsigned int *)0x0) {
          puVar3 = (unsigned int *)FUN_003e83b4(param_1,param_4,1);
        }
        rt_memcpy_w(puVar3 + 0x59,param_2,0x230);
        temp_v1 = DAT_0057aa54 | DAT_0057aa34;
        *puVar3 = DAT_0057aa50 | DAT_0057aa30;
        puVar3[1] = temp_v1;
        temp_v1 = FUN_0015688c();
        puVar3[0x100] = temp_v1;
        param_1[0x135a] = temp_v1;
        if ((puVar3[0x100] != 0) && ((*(unsigned short *)(puVar3[0x100] + 0x60) & 2) == 0)) {
          *(unsigned char *)(param_1 + 0x1334) = 1;
        }
        else {
          *(unsigned char *)(param_1 + 0x1334) = 0;
        }
      }
    }
    else {
      puVar3 = param_1;
      FUN_003f1138();
      rt_memcpy_w(puVar3 + 0x59,param_2,0x230);
      temp_v1 = DAT_0057aa4c | DAT_0057aa34;
      *puVar3 = DAT_0057aa48 | DAT_0057aa30;
      puVar3[1] = temp_v1;
      temp_v1 = (unsigned int)*(unsigned short *)((int)puVar3 + 0x166);
      FUN_0019cac4();
      puVar3[0x101] = temp_v1;
      if ((char)puVar3[0x8e] == '\x01') {
        temp_v1 = puVar3[1] | DAT_0057aa64;
        *puVar3 = *puVar3 | DAT_0057aa60;
        puVar3[1] = temp_v1;
      }
      *(short *)((int)param_1 + 0x2002) = *(short *)((int)param_1 + 0x2002) + 1;
    }
  }
  else {
    puVar3 = (unsigned int *)FUN_003e83b4(param_1,param_4,0);
    rt_memcpy_w(puVar3 + 0x59,param_2,0x230);
    if ((puVar3[0x59] & 1) != 0) {
      temp_v1 = DAT_0057aa3c | DAT_0057aa34;
      *puVar3 = DAT_0057aa38 | DAT_0057aa30;
      puVar3[1] = temp_v1;
      temp_v1 = FUN_001801a4();
      puVar3[0xfe] = temp_v1;
    }
    else {
      temp_v1 = DAT_0057aa44 | DAT_0057aa34;
      *puVar3 = DAT_0057aa40 | DAT_0057aa30;
      puVar3[1] = temp_v1;
      if ((short)puVar3[0x5b] >= 0) {
        temp_v1 = FUN_001ab854();
      }
      else {
        temp_v1 = FUN_002919a4();
      }
      puVar3[0xff] = temp_v1;
    }
    *(short *)(param_1 + 0x800) = (short)param_1[0x800] + 1;
  }
  *(short *)(puVar3 + 2) = (short)param_4;
  FUN_002e6354(puVar3 + 0x1d,200);
  FUN_002e6354(puVar3 + 0x4f,0x12);
  puVar3[0xe5] = 0;
  puVar3[0xe6] = 0;
  puVar3[0xe7] = 0;
  puVar3[0xe8] = 0;
  puVar3[0xe9] = 0;
  puVar3[0xea] = 0;
  puVar3[0xeb] = 0;
  puVar3[0xec] = 0;
  if (param_5 != 0) {
    temp_v1 = puVar3[1] | DAT_0057aa8c;
    *puVar3 = *puVar3 | DAT_0057aa88;
    puVar3[1] = temp_v1;
  }
  if (((param_1[0x44] & 0x40) != 0) && ((puVar3[0x59] & 1) != 0)) {
    temp_v1 = *puVar3 | DAT_0057aa90;
    puVar3[1] = DAT_0057aa94 | puVar3[1];
    *puVar3 = temp_v1;
  }
  temp_v2 = param_1[0x7b5] + param_4 * 0x1d0;
  *(unsigned int *)(temp_v2 + 0x50) = 0x81;
  if (param_4 < 4) {
    *(unsigned int *)(temp_v2 + 0x50) = 0x281;
  }
  else {
    if (param_4 < 0x36) {
      temp_v0 = 0x481;
    }
    else {
      temp_v0 = 0x881;
    }
    *(unsigned int *)(temp_v2 + 0x50) = temp_v0;
  }
  if (*(char *)((int)puVar3 + 0x23a) != '\0') {
    *(unsigned char *)(temp_v2 + 0xa0) = 1;
  }
  *(unsigned short *)(temp_v2 + 0x68) = *(unsigned short *)((int)puVar3 + 0x6e);
  *(short *)(temp_v2 + 0x6a) = (short)param_4;
  FUN_0041a7dc(temp_v2 + 0x128);
  if (param_3 == 1) {
    FUN_003edaf0(param_1,*(unsigned short *)((int)puVar3 + 0x166));
    *(unsigned int *)(temp_v2 + 0x1b0) = in_s0;
    *(unsigned int *)(temp_v2 + 0x1b4) = in_s1;
    *(unsigned int *)(temp_v2 + 0x1b8) = in_s2;
  }
  FUN_004c3d00(puVar3);
  FUN_004c571c(param_4,0xc,puVar3,0);
  return;
}

} /* extern "C" */
