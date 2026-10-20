/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1110` (_code @ 0x1a1110, 0x3c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);
int rt_memclr(int, int);
int FUN_002c4924(void);
int memClear(int, int);
int FUN_002cf3b4(void);
int FUN_0033f81c(void);
int FUN_003bbf54(void);
int FUN_003c25f0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */
extern unsigned int *DAT_0043e2b4; /* 0x43e2b4 */

/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_002c4924. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_002cf3b4. */
/* Supplied declaration required: FUN_0033f81c. */
/* Supplied declaration required: FUN_003bbf54. */
/* Supplied declaration required: FUN_003c25f0. */


void FUN_001a1110(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned short *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar7;
  unsigned int temp_v4;
  
  memClear(DAT_0043e2ac + 0x88,0x24d28);
  puVar2 = DAT_0043e2b4;
  temp_v3 = 0x18;
  *DAT_0043e2b4 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  temp_v0 = DAT_0043e2ac;
  temp_v1 = 0;
  temp_v2 = DAT_0043e2ac + 0x8c;
  do {
    *(unsigned char *)(temp_v2 + temp_v1 + 0x90f0) = 0xff;
    *(char *)(temp_v2 + temp_v1 * 0x604 + 0xda) = (char)temp_v1;
    temp_v3 = temp_v3 - 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v3 != 0);
  *(unsigned char *)(temp_v0 + 0x9194) = 0xff;
  *(unsigned char *)(temp_v0 + 0x9195) = 0xff;
  *(unsigned char *)(temp_v0 + 0x9196) = 0xff;
  *(unsigned int *)(temp_v0 + 0x986c) = 0;
  *(unsigned int *)(temp_v0 + 0x9870) = 0;
  rt_memclr(temp_v0 + 0x981e,0x4c);
  puVar2 = DAT_0043e2b4;
  temp_v0 = DAT_0043e2ac;
  temp_v1 = 0;
  *(unsigned short *)(DAT_0043e2b4 + 2) = 0;
  puVar7 = (unsigned short *)(temp_v0 + 0xc22c);
  *(unsigned short *)((int)puVar2 + 10) = 0;
  do {
    puVar4 = (unsigned short *)((temp_v1 + 1U) & 0xffff);
    devilGetRecord();
    puVar2 = DAT_0043e2b4;
    if (puVar4 != (unsigned short *)0x0) {
      if ((puVar4[3] & 1) != 0) {
        if (*(short *)(DAT_0043e2b4 + 2) == 0) {
          *(unsigned short *)(DAT_0043e2b4 + 2) = *puVar4;
        }
        *(unsigned short *)((int)puVar2 + 10) = *puVar4;
      }
      *puVar7 = (unsigned short)*(unsigned char *)((int)puVar4 + 3);
      puVar7[1] = puVar4[0xd];
      puVar7[2] = puVar4[0xe];
      puVar7[3] = puVar4[0xf];
      puVar7[4] = puVar4[0x10];
      puVar7[5] = puVar4[0x11];
      puVar7[6] = puVar4[0xd];
      puVar7[7] = puVar4[0xe];
      puVar7[8] = puVar4[0xf];
      puVar7[9] = puVar4[0x10];
      puVar7[10] = puVar4[0x11];
      puVar7[0xc] = puVar4[10];
      puVar7[0xd] = puVar4[0xb];
      puVar7[0xe] = puVar4[0x1e];
      puVar7[0xf] = puVar4[0x1f];
      puVar7[0x10] = puVar4[0x20];
      puVar7[0x11] = puVar4[0x21];
      puVar7[0x12] = puVar4[0x22];
      puVar7[0x13] = puVar4[0x23];
      puVar7[0x14] = puVar4[0x24];
      puVar7[0x15] = puVar4[0x25];
      puVar7[0x16] = 0;
      puVar7[0x17] = puVar7[0x17] & 0xff00;
      *(unsigned char *)(puVar7 + 0xb) = (unsigned char)puVar7[0xb] & 0xc1;
    }
    temp_v0 = DAT_0043e2ac;
    temp_v1 = temp_v1 + 1;
    puVar7 = puVar7 + 0x1a;
  } while (temp_v1 < 0x500);
  temp_v4 = 0;
  *(unsigned char *)(DAT_0043e2ac + 0xa8c0) = 0;
  *(unsigned char *)(temp_v0 + 0xa8c1) = 0;
  *(unsigned char *)(temp_v0 + 0xa8c2) = 0;
  *(unsigned char *)(temp_v0 + 0xa8c3) = 0;
  *(unsigned int *)(temp_v0 + 0xa8c4) = 0;
  *(unsigned int *)(temp_v0 + 0xa8c8) = 0;
  *(unsigned int *)(temp_v0 + 0xa8cc) = 0;
  *(unsigned int *)(temp_v0 + 0xa8d0) = 0;
  *(unsigned int *)(temp_v0 + 0xa8d4) = 0;
  *(unsigned int *)(temp_v0 + 0xa8d8) = 0;
  *(unsigned short *)(temp_v0 + 0xa8e0) = 0;
  *(unsigned short *)(temp_v0 + 0xa8e2) = 0;
  *(unsigned char *)(temp_v0 + 0xa8dc) = 0;
  *(unsigned short *)(temp_v0 + 0xa8de) = 0xffff;
  *(unsigned char *)(temp_v0 + 0xa8dd) = 0;
  *(unsigned int *)(temp_v0 + 0xb004) = 0;
  *(unsigned int *)(temp_v0 + 0xb008) = 0;
  *(unsigned int *)(temp_v0 + 0xb00c) = 0;
  *(unsigned int *)(temp_v0 + 0xb010) = 0;
  *(unsigned int *)(temp_v0 + 0xb014) = 0;
  *(unsigned int *)(temp_v0 + 0xb018) = 0;
  *(unsigned int *)(temp_v0 + 0xb01c) = 0;
  *(unsigned int *)(temp_v0 + 0xb020) = 0;
  *(unsigned int *)(temp_v0 + 0xb024) = 0;
  *(unsigned int *)(temp_v0 + 0xb028) = 0;
  *(unsigned int *)(temp_v0 + 0xb02c) = 0;
  *(unsigned int *)(temp_v0 + 0xb030) = 0;
  *(unsigned int *)(temp_v0 + 0xb034) = 0;
  *(unsigned int *)(temp_v0 + 0xb038) = 0;
  *(unsigned int *)(temp_v0 + 0xb03c) = 0;
  *(unsigned int *)(temp_v0 + 0xb040) = 0;
  *(unsigned int *)(temp_v0 + 0xb044) = 0;
  *(unsigned int *)(temp_v0 + 0xb048) = 0;
  *(unsigned int *)(temp_v0 + 0xb04c) = 0;
  *(unsigned int *)(temp_v0 + 0xb498) = 0;
  *(unsigned int *)(temp_v0 + 0xb49c) = 0;
  *(unsigned int *)(temp_v0 + 0xb4a0) = 0;
  *(unsigned int *)(temp_v0 + 0xb4a4) = 0;
  *(unsigned int *)(temp_v0 + 0xb4a8) = 0;
  *(unsigned int *)(temp_v0 + 0xb4ac) = 0;
  *(unsigned int *)(temp_v0 + 0xb4b0) = 0;
  *(unsigned int *)(temp_v0 + 0xb4b4) = 0;
  *(unsigned int *)(temp_v0 + 0xb4b8) = 0;
  *(unsigned int *)(temp_v0 + 0xb4bc) = 0;
  *(unsigned int *)(temp_v0 + 0xb4c0) = 0;
  *(unsigned int *)(temp_v0 + 0xb4c4) = 0;
  *(unsigned int *)(temp_v0 + 0xb4c8) = 0;
  *(unsigned int *)(temp_v0 + 0xb4cc) = 0;
  *(unsigned int *)(temp_v0 + 0xb4d0) = 0;
  *(unsigned int *)(temp_v0 + 0xb4d4) = 0;
  memClear(temp_v0 + 0xb4d8,0x80);
  *(unsigned int *)(temp_v0 + 0xb5d8) = 0;
  *(unsigned int *)(temp_v0 + 0xb5dc) = 0;
  *(unsigned int *)(temp_v0 + 0xb5e0) = 0;
  *(unsigned int *)(temp_v0 + 0xb5e4) = 0;
  *(unsigned int *)(temp_v0 + 0xb5e8) = 0;
  *(unsigned int *)(temp_v0 + 0xb5ec) = 0;
  *(unsigned int *)(temp_v0 + 0xb5f0) = 0;
  *(unsigned int *)(temp_v0 + 0xb5f4) = 0;
  *(unsigned int *)(temp_v0 + 0xb5f8) = 0;
  *(unsigned int *)(temp_v0 + 0xb5fc) = 0;
  *(unsigned int *)(temp_v0 + 0xb600) = 0;
  *(unsigned int *)(temp_v0 + 0xb604) = 0;
  *(unsigned int *)(temp_v0 + 0xb608) = 0;
  *(unsigned int *)(temp_v0 + 0xb60c) = 0;
  *(unsigned int *)(temp_v0 + 0xb610) = 0;
  *(unsigned int *)(temp_v0 + 0xb614) = 0;
  *(unsigned int *)(temp_v0 + 0xb61c) = 0;
  *(unsigned int *)(temp_v0 + 0xb620) = 0;
  *(unsigned int *)(temp_v0 + 0xb624) = 0;
  *(unsigned int *)(temp_v0 + 0xb628) = 0;
  *(unsigned int *)(temp_v0 + 0xb62c) = 0;
  *(unsigned int *)(temp_v0 + 0xb630) = 0;
  *(unsigned int *)(temp_v0 + 0xb634) = 0;
  *(unsigned int *)(temp_v0 + 0xb638) = 0;
  *(unsigned int *)(temp_v0 + 0xb65c) = 0;
  *(unsigned int *)(temp_v0 + 0xb660) = 0;
  *(unsigned int *)(temp_v0 + 0xb664) = 0;
  *(unsigned int *)(temp_v0 + 0xb668) = 0;
  *(unsigned int *)(temp_v0 + 0xb66c) = 0;
  *(unsigned char *)(temp_v0 + 0xa8fa) = 1;
  *(unsigned char *)(temp_v0 + 0xa8fb) = 1;
  *(unsigned char *)(temp_v0 + 0xb052) = 0;
  memClear(temp_v0 + 0xb720,0xc0);
  *(unsigned char *)(temp_v0 + 0xb6a0) = 0;
  *(unsigned char *)(temp_v0 + 0xb6a1) = 0;
  *(unsigned char *)(temp_v0 + 0xb6a2) = 0;
  *(unsigned char *)(temp_v0 + 0xb6a3) = 0;
  *(unsigned int *)(temp_v0 + 0xb714) = 0xffffffff;
  *(unsigned char *)(temp_v0 + 0xb61a) = 0xc;
  *(unsigned int *)(temp_v0 + 0xb658) = 0xe10;
  *(unsigned int *)(temp_v0 + 0xb654) = 0;
  *(unsigned char *)(temp_v0 + 0xb61b) = 0;
  *(unsigned int *)(temp_v0 + 0xb680) = 0;
  *(unsigned int *)(temp_v0 + 0xb684) = temp_v4;
  *(unsigned char *)(temp_v0 + 0xb688) = 0;
  FUN_0033f81c();
  FUN_002c4924();
  FUN_003bbf54();
  FUN_003c25f0();
  rt_memclr(DAT_0043e2ac + 0x1ec18,0x80);
  FUN_002cf3b4();
  return;
}

} /* extern "C" */
