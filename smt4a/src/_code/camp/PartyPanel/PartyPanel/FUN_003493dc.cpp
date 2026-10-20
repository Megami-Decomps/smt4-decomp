/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003493dc` (_code @ 0x3493dc, 0x70c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_0014e38c(...);
int FUN_001505ac(...);
int FUN_0015155c(...);
int FUN_0016007c(...);
int FUN_00163060(...);
int FUN_001846d0(...);
int FUN_00184758(...);
int FUN_001ab888(...);
int FUN_00203b40(...);
int FUN_00215bd0(...);
int FUN_00230ac0(...);
int FUN_002804b0(...);
int FUN_002c7e6c(...);
int FUN_002c8538(...);
int FUN_002e6354(...);
int FUN_0031d890(...);
int FUN_003d1d6c(...);
int FUN_003f3d54(...);
int FUN_004dc4b4(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int FUN_00262874(...); /* 0x262874 */
extern unsigned char LAB_002e7a88; /* 0x2e7a88 */
extern int FUN_002e7a8c(...); /* 0x2e7a8c */
extern unsigned char LAB_003497f4; /* 0x3497f4 */
extern unsigned char LAB_00349804; /* 0x349804 */
extern unsigned char LAB_00349814; /* 0x349814 */
extern unsigned char LAB_00349828; /* 0x349828 */
extern unsigned char DAT_0052d888; /* 0x52d888 */
extern unsigned char DAT_0052d93c; /* 0x52d93c */
extern unsigned char DAT_0052d9e4; /* 0x52d9e4 */
extern unsigned char DAT_0052d9fc; /* 0x52d9fc */
extern unsigned int *DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_001ab888. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_00230ac0. */
extern int FUN_0026140c(void);
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002c7e6c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: FUN_003d1d6c. */
/* Supplied declaration required: FUN_003f3d54. */
/* Supplied declaration required: FUN_004dc4b4. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_003493dc(int param_1)

{
/* irregular: 23 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned char *pbVar10;
  unsigned char temp_v5;
  
  if (DAT_0057f268 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x1220,1);
    DAT_0057f268 = puVar2;
  }
  puVar2 = DAT_0057f268;
  FUN_002e6354();
  temp_v1 = FUN_0026140c();
  *(unsigned char *)((int)puVar2 + 0x42) = *(unsigned char *)(temp_v1 + 0x44);
  puVar4 = &LAB_003497f4;
  FUN_0014e38c(&LAB_003497f4,3,0,0,FUN_00262874,&LAB_002e7a88,0);
  *puVar2 = (unsigned int)puVar4;
  puVar5 = &LAB_00349804;
  FUN_0015155c(&LAB_00349804,0xea,0,0,FUN_002e7a8c,0,0,puVar4);
  puVar2[2] = (unsigned int)puVar5;
  FUN_002804b0(&LAB_00349814,puVar2 + 3,1);
  FUN_002804b0(&LAB_00349828,puVar2 + 4,1);
  FUN_002c7e6c();
  if (param_1 != 0) {
    FUN_002c8538(1);
    FUN_00215bd0();
  }
  else {
    FUN_002c8538(0);
  }
  temp_v1 = 0x1b8;
  FUN_0016007c();
  if (temp_v1 != 0) {
    FUN_004dc4b4();
  }
  puVar2[0x41f] = temp_v1;
  *(unsigned char *)(temp_v1 + 0x17a) = 1;
  FUN_001ab888();
  temp_v1 = 0x54;
  puVar2[0x486] = 0;
  FUN_0016007c();
  puVar2[0x284] = temp_v1;
  *(unsigned char *)(temp_v1 + 0x20) = 0;
  *(unsigned int *)(puVar2[0x284] + 0x34) = 0xffffffff;
  FUN_003f3d54(puVar2[0x284],0);
  temp_v1 = 0;
  do {
    temp_v2 = 0x54;
    FUN_0016007c();
    puVar2[temp_v1 + 0x285] = temp_v2;
    *(unsigned char *)(temp_v2 + 0x21) = 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = 0x54;
    FUN_0016007c();
    temp_v2 = temp_v1 + 1;
    puVar2[temp_v1 + 0x288] = temp_v3;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x18);
  FUN_003d1d6c();
  puVar2 = DAT_0057f268;
  puVar8 = DAT_0057f268 + 0x12;
  *(unsigned short *)((int)DAT_0057f268 + 0x36) = 0;
  *(unsigned short *)(puVar2 + 0xe) = 0xffff;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar8);
  FUN_001505ac(puVar2 + 0x12,&DAT_0052d888,0xb4,&DAT_0052d93c,0xa8,&DAT_0052d9e4,0x18,0,0,
               &DAT_0052d9fc,0x39c);
  FUN_0014e188(puVar2 + 0x1a,0x11,0x24,puVar2 + 0x12,0x6a);
  FUN_001846d0(puVar2 + 0x1a,0);
  FUN_0014e188(puVar2 + 0x3d,0x11,0x25,puVar2 + 0x12,0x6a);
  FUN_001846d0(puVar2 + 0x3d,1);
  FUN_0014e188(puVar2 + 0x60,0x11,0,puVar2 + 0x12,0x6a);
  FUN_00184758(puVar2 + 0x60,4,0);
  FUN_0014e188(puVar2 + 0x83,0x11,0,puVar2 + 0x12,0x6a);
  FUN_001846d0(puVar2 + 0x83,2);
  temp_v1 = 0;
  do {
    FUN_0014e188(puVar2 + temp_v1 * 0x23 + 0xa6,0x11,0,puVar2 + 0x12,0x6a);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_0014e188(puVar2 + 0x132,0x11,0,puVar2 + 0x12,0x6a);
  FUN_0014e188(puVar2 + 0x24a,0x11,1,puVar2 + 0x12,0x6a);
  FUN_00230ac0(4,0xffffffff,0);
  FUN_0014e188(puVar2 + 0x155,0x11,1000,puVar2 + 0x12,0xc9);
  FUN_001846d0(puVar2 + 0x155,3);
  FUN_0014e188(puVar2 + 0x178,0x11,1000,puVar2 + 0x12,0xc9);
  FUN_001846d0(puVar2 + 0x178,4);
  FUN_0014e188(puVar2 + 0x19b,0x11,0xb5,puVar2 + 0x12,0xc9);
  FUN_001846d0(puVar2 + 0x19b,5);
  puVar2[0x485] = 0;
  FUN_0014e188(puVar2 + 0x1be,0x11,0x160,puVar2 + 0x12,0xc9);
  FUN_001846d0(puVar2 + 0x1be,6);
  temp_v1 = 0;
  do {
    FUN_0014e188(puVar2 + temp_v1 * 0x23 + 0x1e1,0x11,temp_v1 + 0x161,puVar2 + 0x12,
                 (int)(short)((short)temp_v1 + 0xca));
    FUN_001846d0(puVar2 + temp_v1 * 0x23 + 0x1e1,7);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  FUN_00203b40(puVar2 + 0x309,4,1,4,1,1);
  temp_v1 = FUN_001ab888();
  pbVar10 = (unsigned char *)(temp_v1 + 0x1ca3);
  temp_v0 = *pbVar10;
  temp_v4 = (unsigned int)temp_v0;
  temp_v5 = temp_v0 >> 2;
  if ((temp_v0 & 3) != 0) {
    temp_v5 = temp_v5 + 1;
  }
  if (temp_v4 < 0xc) {
    FUN_00203b40(puVar2 + 0x322,temp_v4,temp_v5,4,1,1);
    FUN_00203b40(puVar2 + 0x354,*pbVar10 + 4,temp_v5 + 1,4,1,1);
  }
  else if (puVar2[0xb] != 0) {
    FUN_00203b40(puVar2 + 0x322,temp_v4 - 0xc,3,4,1,1);
    FUN_00203b40(puVar2 + 0x354,*pbVar10 - 8,4,4,1,1);
  }
  else {
    FUN_00203b40(puVar2 + 0x322,0xc,3,4,1,1);
    FUN_00203b40(puVar2 + 0x354,0x10,4,4,1,1);
  }
  FUN_00203b40(puVar2 + 0x33b,*pbVar10,temp_v5,4,1,1);
  FUN_00203b40(puVar2 + 0x36d,*pbVar10 + 4,temp_v5 + 1,4,1,1);
  FUN_00203b40(puVar2 + 0x386,6,6,1,1,1);
  puVar2[0x26e] = 0xffffffff;
  puVar2[0x26f] = 0xffffffff;
  FUN_0031d890();
  *(unsigned short *)(puVar2 + 0x281) = 0;
  *(unsigned char *)(puVar2 + 0x11) = 0;
  return;
}

} /* extern "C" */
