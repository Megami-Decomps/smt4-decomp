/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0c18` (_code @ 0x2f0c18, 0x6b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int FUN_00215cb8(); /* 0x215cb8 */
extern int FUN_0023b4cc(); /* 0x23b4cc */
extern unsigned char LAB_0028587c; /* 0x28587c */
extern unsigned char LAB_002f1034; /* 0x2f1034 */
extern unsigned char LAB_002f1048; /* 0x2f1048 */
extern unsigned char LAB_002f105c; /* 0x2f105c */
extern unsigned char LAB_002f1074; /* 0x2f1074 */
extern unsigned char LAB_002f1084; /* 0x2f1084 */
extern unsigned char LAB_002f10a0; /* 0x2f10a0 */
extern unsigned char DAT_0052e8ec; /* 0x52e8ec */
extern unsigned char DAT_0052e97c; /* 0x52e97c */
extern unsigned char DAT_0052eaa8; /* 0x52eaa8 */
extern unsigned char DAT_0052eb44; /* 0x52eb44 */
extern unsigned int *DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00184c40. */
extern int FUN_0019f1a4(unsigned short, unsigned int);
extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001bd100(unsigned short);
/* Supplied declaration required: FUN_001ff724. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_0023b4b4. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_003872b8. */
extern int FUN_003deeb4(unsigned short);
extern int FUN_003deecc(unsigned short);
/* Supplied declaration required: FUN_003f86f8. */
/* Supplied declaration required: FUN_00417de8. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002f0c18(void)

{
/* irregular: 25 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *pbVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned short temp_v4;
  
  if (DAT_0057f28c == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0xd50,1);
    DAT_0057f28c = puVar2;
  }
  puVar2 = DAT_0057f28c;
  FUN_002e6354();
  puVar3 = &LAB_002f1034;
  FUN_0014e38c(&LAB_002f1034,4,0,0,FUN_00215cb8,0,0);
  *puVar2 = (unsigned int)puVar3;
  FUN_0015155c(&LAB_002f1048,0x81,0,0,FUN_0023b4cc,0,0,puVar3);
  FUN_0015155c(&LAB_002f105c,0xdd,0,0,FUN_0023b4cc,0,0,*puVar2);
  FUN_0015155c(&LAB_002f1074,0xea,0,0,&LAB_0028587c,0,0,*puVar2);
  puVar2 = DAT_0057f28c;
  FUN_0023b4b4(0);
  puVar3 = &LAB_002f1084;
  FUN_0020214c();
  puVar2[0x23d] = (unsigned int)puVar3;
  puVar3 = &LAB_002f10a0;
  FUN_0020214c();
  puVar2[0x23e] = (unsigned int)puVar3;
  FUN_00275bc8();
  puVar2[0x23f] = (unsigned int)puVar3;
  *(unsigned short *)((int)puVar2 + 0xcce) = 0;
  *(unsigned short *)(puVar2 + 0x334) = 0;
  FUN_0014384c(0x1e);
  FUN_0014afd0(0x1e,0);
  FUN_003f86f8(0x34);
  temp_v4 = 0x65;
  do {
    temp_v1 = temp_v4;
    FUN_001ad9b4();
    if (temp_v1 == 0) {
      temp_v2 = FUN_001ab940();
      pbVar6 = (unsigned char *)(temp_v2 + temp_v4 * 4 + 0x2a0);
      if (pbVar6 != (unsigned char *)0x0) {
        *pbVar6 = *pbVar6 & 0xfe;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x15e);
  FUN_001ff724();
  temp_v0 = 0;
  do {
    temp_v2 = FUN_0019f1a4(temp_v0,2);
    if (((temp_v2 != 0) && (temp_v2 = FUN_001bd100(temp_v0), temp_v2 != 0)) &&
       ((temp_v2 = FUN_003deeb4(temp_v0), temp_v2 != 0 || (temp_v2 = FUN_003deecc(temp_v0), temp_v2 != 0)))) {
      FUN_00417de8(temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 400);
  temp_v0 = 0;
  do {
    temp_v2 = FUN_0019f1a4(temp_v0,2);
    if (((temp_v2 != 0) && (temp_v2 = FUN_001bd100(temp_v0), temp_v2 == 0)) &&
       ((temp_v2 = FUN_003deeb4(temp_v0), temp_v2 != 0 || (temp_v2 = FUN_003deecc(temp_v0), temp_v2 != 0)))) {
      FUN_00417de8(temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 400);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar2 + 5);
  FUN_001505ac(puVar2 + 5,&DAT_0052e8ec,0x90,&DAT_0052e97c,300,&DAT_0052eaa8,0x9c,0,0,&DAT_0052eb44,
               0x40c);
  FUN_0014e188(puVar2 + 0xd,0x1e,0,puVar2 + 5,0xc9);
  FUN_00184758(puVar2 + 0xd,0);
  FUN_00184c00(puVar2 + 0xd,8,0);
  FUN_0014e188(puVar2 + 0x30,0x1e,0,puVar2 + 5,0xc9);
  FUN_001846d0(puVar2 + 0x30,0);
  FUN_0014e188(puVar2 + 0x53,0x1e,0,puVar2 + 5,0xc9);
  FUN_00184758(puVar2 + 0x53,6,0);
  FUN_0014e188(puVar2 + 0x76,0x1e,0,puVar2 + 5,0xc9);
  FUN_0014e188(puVar2 + 0x99,0x1e,0x61,puVar2 + 5,0x68);
  FUN_001846d0(puVar2 + 0x99,2);
  FUN_003872b8(puVar2 + 0x99,0x1e,0x2a,0x61);
  FUN_0014e188(puVar2 + 0xbc,0x1e,0x5d,puVar2 + 5,0xa1);
  FUN_001846d0(puVar2 + 0xbc,2);
  FUN_00387240(puVar2 + 0xbc,0x1e,0x53);
  FUN_0014e220(puVar2 + 0xdf,0x1e,0xffffffff,0x12,puVar2 + 5,0xc9);
  FUN_001846d0(puVar2 + 0xdf,3);
  *(unsigned short *)((int)puVar2 + 0x3b6) = 2;
  FUN_00184c40(puVar2 + 0xdf,0,0x78);
  puVar7 = puVar2 + 0x102;
  FUN_0014e188(puVar7,0x1e,0x5c,puVar2 + 5,0xa1);
  FUN_00184758(puVar7,0);
  FUN_00184c00(puVar7,8,0);
  FUN_003872b8(puVar7,0x1e,0x5a,0x5c);
  puVar7 = puVar2 + 0x125;
  FUN_0014e188(puVar7,0x1e,0,puVar2 + 5,0xc9);
  FUN_00184758(puVar7,2,0);
  FUN_00184c00(puVar7,9,0);
  FUN_0014e188(puVar2 + 0x148,0x1e,0,puVar2 + 5,0xc9);
  FUN_001846d0(puVar2 + 0x148,5);
  FUN_0014e188(puVar2 + 0x16b,0x1e,0x4c,puVar2 + 5,0xc9);
  FUN_0014e188(puVar2 + 0x18e,0x1e,0,puVar2 + 5,0xc9);
  FUN_0014e188(puVar2 + 0x1b1,0x1e,0x5d,puVar2 + 5,0xc9);
  FUN_0014e188(puVar2 + 0x1d4,0x1e,0x57,puVar2 + 5,0xc9);
  FUN_0014e188(puVar2 + 0x1f7,0x1e,0x4b,puVar2 + 5,0xc9);
  FUN_0014e188(puVar2 + 0x21a,0x1e,0x4d,puVar2 + 5,0xc9);
  puVar2 = DAT_0057f28c;
  temp_v3 = DAT_0057f28c[1];
  DAT_0057f28c[1] = 0;
  puVar2[2] = temp_v3;
  puVar2[4] = 0;
  return;
}
