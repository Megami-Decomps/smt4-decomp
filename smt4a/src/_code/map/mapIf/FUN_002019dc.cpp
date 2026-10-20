/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002019dc` (_code @ 0x2019dc, 0x274 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163060(int, int, int, int, int);
int FUN_002747dc(void);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char LAB_00201c9c; /* 0x201c9c */
extern unsigned char LAB_00201ca8; /* 0x201ca8 */
extern unsigned char LAB_00201cb4; /* 0x201cb4 */
extern unsigned char LAB_00201cc4; /* 0x201cc4 */
extern unsigned char LAB_00226538; /* 0x226538 */
extern unsigned char LAB_0029aa38; /* 0x29aa38 */
extern int FUN_0029d760(...); /* 0x29d760 */
extern unsigned char LAB_0029d7f8; /* 0x29d7f8 */
extern int FUN_00315d34(...); /* 0x315d34 */
extern unsigned int *DAT_0058103c; /* 0x58103c */
extern unsigned int DAT_006087e4; /* 0x6087e4 */
extern unsigned int DAT_006087e8; /* 0x6087e8 */
extern unsigned int DAT_006087ec; /* 0x6087ec */
extern unsigned int DAT_006087f0; /* 0x6087f0 */
extern unsigned int DAT_006087f4; /* 0x6087f4 */
extern unsigned int DAT_006087f8; /* 0x6087f8 */
extern unsigned int DAT_006087fc; /* 0x6087fc */
extern unsigned int DAT_00608800; /* 0x608800 */
extern unsigned int DAT_00608804; /* 0x608804 */
extern unsigned int DAT_00608808; /* 0x608808 */
extern unsigned int DAT_0060880c; /* 0x60880c */
extern unsigned int DAT_00608810; /* 0x608810 */
extern unsigned int DAT_00608e14; /* 0x608e14 */
extern unsigned int DAT_00608e18; /* 0x608e18 */
extern unsigned int DAT_00608e1c; /* 0x608e1c */
extern unsigned int DAT_00608e20; /* 0x608e20 */
extern unsigned int DAT_00608e24; /* 0x608e24 */
extern unsigned int DAT_00608e28; /* 0x608e28 */
extern unsigned int DAT_00608e2c; /* 0x608e2c */
extern unsigned int DAT_00608e30; /* 0x608e30 */
extern unsigned int DAT_00608e34; /* 0x608e34 */
extern unsigned int DAT_00608e38; /* 0x608e38 */
extern unsigned int DAT_00608e3c; /* 0x608e3c */
extern unsigned int DAT_00608e40; /* 0x608e40 */
extern unsigned int DAT_00609444; /* 0x609444 */
extern unsigned int DAT_00609448; /* 0x609448 */
extern unsigned int DAT_0060944c; /* 0x60944c */
extern unsigned int DAT_00609450; /* 0x609450 */
extern unsigned int DAT_00609454; /* 0x609454 */
extern unsigned int DAT_00609458; /* 0x609458 */
extern unsigned int DAT_0060945c; /* 0x60945c */
extern unsigned int DAT_00609460; /* 0x609460 */
extern unsigned int DAT_00609464; /* 0x609464 */
extern unsigned int DAT_00609468; /* 0x609468 */
extern unsigned int DAT_0060946c; /* 0x60946c */
extern unsigned int DAT_00609470; /* 0x609470 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002747dc. */


void FUN_002019dc(unsigned int param_1,unsigned char param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0xcd30,1);
  DAT_0058103c = puVar1;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)((int)puVar1 + 0x16) = 0;
  puVar1[6] = 0;
  *(unsigned char *)((int)puVar1 + 0x1d) = 0;
  puVar1[8] = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  *(unsigned char *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(unsigned char *)(puVar1 + 0x32f7) = 0;
  *(unsigned short *)(puVar1 + 0x333a) = 0;
  *(unsigned short *)((int)puVar1 + 0xccea) = 0;
  temp_v0 = 0;
  *(unsigned char *)(puVar1 + 0x333c) = 0;
  puVar1[0x333f] = 0;
  puVar1[0x3340] = 0;
  puVar1[0x3341] = 0;
  *(unsigned char *)(puVar1 + 0x3342) = 0;
  *(unsigned char *)(puVar1 + 0x3344) = 0;
  puVar1[0x3345] = 0;
  puVar1[0x3346] = 0;
  *(unsigned char *)(puVar1 + 0x3347) = 0;
  puVar1[0x3348] = 0xc2200000;
  puVar1[0x3349] = 0x43430000;
  puVar1[0x334a] = 0;
  puVar1[0x334b] = 0;
  puVar2 = &LAB_00201c9c;
  FUN_0015155c(&LAB_00201c9c,4,0,0,&LAB_00226538,&LAB_0029aa38,0,param_1);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_00201ca8;
  FUN_0015155c(&LAB_00201ca8,0x75,0,0,FUN_0029d760,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  FUN_0015155c(&LAB_00201cb4,0x8a,0,0,FUN_00315d34,0,0,*puVar1);
  puVar2 = &LAB_00201cc4;
  FUN_0015155c(&LAB_00201cc4,0x71,0,0,&LAB_0029d7f8,0,0,*puVar1);
  puVar1[2] = (unsigned int)puVar2;
  DAT_006087e4 = 0xc2800000;
  DAT_006087e8 = 0x41800000;
  DAT_006087f0 = 0xc2800000;
  DAT_006087f4 = 0xc1800000;
  DAT_006087fc = 0x42800000;
  DAT_00608800 = 0x41800000;
  DAT_00608808 = 0x42800000;
  DAT_0060880c = 0xc1800000;
  DAT_00608e14 = 0xc2800000;
  DAT_00608e28 = 0xc1800000;
  DAT_00608e2c = 0x42800000;
  DAT_00608e1c = 0x41800000;
  DAT_00608e20 = 0xc2800000;
  DAT_00608e34 = 0x41800000;
  DAT_00608e38 = 0x42800000;
  DAT_00608e40 = 0xc1800000;
  DAT_00609444 = 0xc2800000;
  DAT_0060944c = 0xc1800000;
  DAT_00609450 = 0xc2800000;
  DAT_00609458 = 0x41800000;
  DAT_0060945c = 0x42800000;
  DAT_00609464 = 0xc1800000;
  DAT_00609468 = 0x42800000;
  DAT_00609470 = 0x41800000;
  DAT_006087ec = temp_v0;
  DAT_006087f8 = temp_v0;
  DAT_00608804 = temp_v0;
  DAT_00608810 = temp_v0;
  DAT_00608e18 = temp_v0;
  DAT_00608e24 = temp_v0;
  DAT_00608e30 = temp_v0;
  DAT_00608e3c = temp_v0;
  DAT_00609448 = temp_v0;
  DAT_00609454 = temp_v0;
  DAT_00609460 = temp_v0;
  DAT_0060946c = temp_v0;
  *(unsigned char *)((int)puVar1 + 0x15) = param_2;
  FUN_002747dc();
  return;
}

} /* extern "C" */
