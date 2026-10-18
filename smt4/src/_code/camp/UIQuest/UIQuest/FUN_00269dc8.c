/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269dc8` (_code @ 0x269dc8, 0x580 bytes) from smt4_v1.2.0.cxi.
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

extern int FUN_001956c4(); /* 0x1956c4 */
extern int FUN_001ad9f0(); /* 0x1ad9f0 */
extern unsigned char LAB_001ddc7c; /* 0x1ddc7c */
extern unsigned char LAB_0026a200; /* 0x26a200 */
extern unsigned char LAB_0026a214; /* 0x26a214 */
extern unsigned char LAB_0026a228; /* 0x26a228 */
extern unsigned char LAB_0026a240; /* 0x26a240 */
extern unsigned char LAB_0026a250; /* 0x26a250 */
extern unsigned char LAB_0026a26c; /* 0x26a26c */
extern unsigned char DAT_00402e00; /* 0x402e00 */
extern unsigned char DAT_00402e3c; /* 0x402e3c */
extern unsigned char DAT_00402e9c; /* 0x402e9c */
extern unsigned char DAT_00402ed8; /* 0x402ed8 */
extern unsigned int *DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_00189c24. */
/* Supplied declaration required: FUN_001ad9d8. */
/* Supplied declaration required: FUN_00254198. */
/* Supplied declaration required: FUN_00262210. */
extern int FUN_002886b0(unsigned short);
extern int FUN_002886c8(unsigned short);
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297410. */
extern int FUN_00298f88(unsigned short);
extern int FUN_00298fa0(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002b2650. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002beed0. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002c58c8. */
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00269dc8(void)

{
/* irregular: 22 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  
  if (DAT_0043dd50 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x9fc,1);
    DAT_0043dd50 = puVar2;
  }
  puVar2 = DAT_0043dd50;
  FUN_002c4938();
  puVar3 = &LAB_0026a200;
  FUN_002c5788(&LAB_0026a200,2,0,0,FUN_001956c4,0,0);
  *puVar2 = (unsigned int)puVar3;
  FUN_002c4a08(&LAB_0026a214,0x7d,0,0,FUN_001ad9f0,0,0,puVar3);
  FUN_002c4a08(&LAB_0026a228,0xdb,0,0,FUN_001ad9f0,0,0,*puVar2);
  FUN_002c4a08(&LAB_0026a240,0xe6,0,0,&LAB_001ddc7c,0,0,*puVar2);
  puVar2 = DAT_0043dd50;
  FUN_001ad9d8(0);
  temp_v1 = FUN_002c5c04(&LAB_0026a250);
  puVar2[0x16b] = temp_v1;
  temp_v1 = FUN_002c5c04(&LAB_0026a26c);
  puVar2[0x16c] = temp_v1;
  FUN_00297060(temp_v1,puVar2[0x16b]);
  puVar2[0x16d] = temp_v1;
  *(unsigned short *)((int)puVar2 + 0x982) = 0;
  *(unsigned short *)(puVar2 + 0x261) = 0;
  FUN_002c4c2c(0x29);
  FUN_002c58c8(0x29,0);
  FUN_00297410(0x34);
  FUN_00189c24();
  temp_v0 = 0;
  do {
    temp_v2 = FUN_00298fa0(temp_v0,2);
    if (((temp_v2 != 0) && (temp_v2 = FUN_00298f88(temp_v0), temp_v2 != 0)) &&
       ((temp_v2 = FUN_002886c8(temp_v0), temp_v2 != 0 || (temp_v2 = FUN_002886b0(temp_v0), temp_v2 != 0)))) {
      FUN_00254198(temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 400);
  temp_v0 = 0;
  do {
    temp_v2 = FUN_00298fa0(temp_v0,2);
    if (((temp_v2 != 0) && (temp_v2 = FUN_00298f88(temp_v0), temp_v2 == 0)) &&
       ((temp_v2 = FUN_002886c8(temp_v0), temp_v2 != 0 || (temp_v2 = FUN_002886b0(temp_v0), temp_v2 != 0)))) {
      FUN_00254198(temp_v0);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 400);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar2 + 5);
  FUN_002c312c(puVar2 + 5,&DAT_00402e00,0x3c,&DAT_00402e3c,0x60,&DAT_00402e9c,0x3c,0,0,&DAT_00402ed8
               ,0x214);
  FUN_002bd954(puVar2 + 0xd,0x29,0,puVar2 + 5,0xc9);
  FUN_002bd8e8(puVar2 + 0xd,0);
  FUN_002bd954(puVar2 + 0x30,0x29,0,puVar2 + 5,0xc9);
  FUN_002bee58(puVar2 + 0x30,0);
  FUN_002bd954(puVar2 + 0x53,0x29,0,puVar2 + 5,0xc9);
  FUN_002bd8e8(puVar2 + 0x53,4,0);
  FUN_002bd954(puVar2 + 0x76,0x29,0,puVar2 + 5,0xc9);
  FUN_002bd954(puVar2 + 0x99,0x29,0x61,puVar2 + 5,0x68);
  FUN_002bee58(puVar2 + 0x99,2);
  FUN_00295eb0(puVar2 + 0x99,0x29,0x2a);
  FUN_002bd954(puVar2 + 0xbc,0x29,0x5d,puVar2 + 5,0xa1);
  FUN_002bee58(puVar2 + 0xbc,2);
  FUN_00295eb0(puVar2 + 0xbc,0x29,0x53);
  FUN_002beed0(puVar2 + 0xdf,0x29,0xffffffff,0x12,puVar2 + 5,0xc9);
  FUN_002bee58(puVar2 + 0xdf,3);
  *(unsigned short *)((int)puVar2 + 0x3b6) = 2;
  FUN_002b2650(puVar2 + 0xdf,0,0x78);
  puVar6 = puVar2 + 0x102;
  FUN_002bd954(puVar6,0x29,0x5c,puVar2 + 5,0xa1);
  FUN_002bd8e8(puVar6,0);
  FUN_00262210(puVar6,0x29,0x5a,0x5c);
  FUN_002bd954(puVar2 + 0x125,0x29,0,puVar2 + 5,0xc9);
  FUN_002bd8e8(puVar2 + 0x125,2,0);
  FUN_002bd954(puVar2 + 0x148,0x29,0,puVar2 + 5,0xc9);
  FUN_002bee58(puVar2 + 0x148,5);
  puVar2 = DAT_0043dd50;
  temp_v1 = DAT_0043dd50[1];
  DAT_0043dd50[1] = 0;
  puVar2[2] = temp_v1;
  puVar2[4] = 0;
  return;
}
