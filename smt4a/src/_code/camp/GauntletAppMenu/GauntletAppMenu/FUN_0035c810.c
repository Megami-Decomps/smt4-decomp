/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c810` (_code @ 0x35c810, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_0035caac; /* 0x35caac */
extern unsigned char LAB_0035cac4; /* 0x35cac4 */
extern unsigned char LAB_0035caf0; /* 0x35caf0 */
extern unsigned char LAB_0035cb08; /* 0x35cb08 */
extern int FUN_003ce598(); /* 0x3ce598 */
extern int FUN_003d2688(); /* 0x3d2688 */
extern int FUN_003d9358(); /* 0x3d9358 */
extern unsigned char DAT_0052caec; /* 0x52caec */
extern unsigned char DAT_0052cb28; /* 0x52cb28 */
extern unsigned char DAT_0052cb88; /* 0x52cb88 */
extern unsigned int *DAT_0057f238; /* 0x57f238 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003dc0c0. */
/* Supplied declaration required: FUN_003f86f8. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


unsigned int FUN_0035c810(void)

{
/* irregular: 17 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0057f238 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x538,1);
    DAT_0057f238 = puVar1;
  }
  puVar1 = DAT_0057f238;
  FUN_002e6354();
  puVar2 = &LAB_0035caac;
  FUN_0014e38c(&LAB_0035caac,3,0,0,FUN_003ce598,FUN_003d9358,0);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_0035cac4;
  FUN_0015155c(&LAB_0035cac4,0xea,0,0,FUN_003d2688,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  temp_v0 = FUN_0018719c(0x520);
  if (temp_v0 != 0) {
    *(unsigned char *)(puVar1 + 0xad) = 1;
  }
  temp_v0 = FUN_0018719c(0x521);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b5) = 1;
  }
  temp_v0 = FUN_0018719c(0x526);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b6) = 1;
  }
  temp_v0 = FUN_0018719c(0x527);
  if (temp_v0 != 0) {
    *(unsigned char *)((int)puVar1 + 0x2b7) = 1;
  }
  FUN_003dc0c0(puVar1,0);
  FUN_003f86f8(0xd);
  temp_v1 = FUN_00187180(0xd,0);
  temp_v2 = FUN_00192798();
  puVar1[0xab] = temp_v2;
  temp_v1 = FUN_00192748(temp_v1);
  puVar1[0xac] = temp_v1;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 0xae);
  FUN_001505ac(puVar1 + 0xae,&DAT_0052caec,0x3c,&DAT_0052cb28,0x60,0,0,0,0,&DAT_0052cb88,0x134);
  FUN_0014e188(puVar1 + 0xb6,0x14,0,puVar1 + 0xae,0xc9);
  FUN_00184758(puVar1 + 0xb6,3,0);
  FUN_00184c00(puVar1 + 0xb6,6,0);
  FUN_0014e188(puVar1 + 0xd9,0x14,0,puVar1 + 0xae,0xc9);
  FUN_001846d0(puVar1 + 0xd9,0);
  FUN_0014e188(puVar1 + 0xfc,0x14,0,puVar1 + 0xae,0xc9);
  FUN_001846d0(puVar1 + 0xfc,2);
  FUN_0014e188(puVar1 + 0x11f,0x14,0x59f,puVar1 + 0xae,0xb5);
  *(unsigned short *)((int)puVar1 + 0x4b6) = 2;
  FUN_001846d0(puVar1 + 0x11f,1);
  puVar2 = &LAB_0035caf0;
  FUN_0020214c();
  puVar1[0x14a] = (unsigned int)puVar2;
  puVar2 = &LAB_0035cb08;
  FUN_0020214c();
  puVar1[0x14b] = (unsigned int)puVar2;
  FUN_00275bc8();
  puVar1[0x14c] = (unsigned int)puVar2;
  return *puVar1;
}
