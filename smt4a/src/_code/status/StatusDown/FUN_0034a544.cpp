/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a544` (_code @ 0x34a544, 0x38c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_0014e220(...);
int FUN_0014e38c(...);
int FUN_001505ac(...);
int FUN_00151408(...);
int FUN_0015155c(...);
int FUN_001527d8(...);
int FUN_00163060(...);
int FUN_001846d0(...);
int FUN_00184758(...);
int FUN_001b4a90(...);
int FUN_00230b9c(...);
int FUN_002804b0(...);
int FUN_002e6354(...);
int FUN_003e4140(...);
int FUN_0050d794(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int FUN_00268770(...); /* 0x268770 */
extern int FUN_0026b0e4(...); /* 0x26b0e4 */
extern unsigned char LAB_0034a914; /* 0x34a914 */
extern unsigned char LAB_0034a924; /* 0x34a924 */
extern unsigned char LAB_0034a948; /* 0x34a948 */
extern unsigned char DAT_0053687c; /* 0x53687c */
extern unsigned char DAT_00536924; /* 0x536924 */
extern unsigned char DAT_005369b4; /* 0x5369b4 */
extern unsigned char DAT_005369cc; /* 0x5369cc */
extern unsigned int *DAT_00588fe8; /* 0x588fe8 */

extern unsigned int FUN_0014bce0(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00230b9c. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003e4140. */
/* Supplied declaration required: FUN_0050d794. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0034a544(void)

{
/* irregular: 19 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  unsigned int *puVar5;
  
  if (DAT_00588fe8 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x259c,1);
    DAT_00588fe8 = puVar1;
  }
  puVar1 = DAT_00588fe8;
  FUN_002e6354();
  puVar2 = &LAB_0034a914;
  FUN_0014e38c(&LAB_0034a914,4,0,0,FUN_00268770,0,0);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_0034a924;
  FUN_0015155c(&LAB_0034a924,0xeb,0,0,FUN_0026b0e4,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  puVar1 = DAT_00588fe8;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_00588fe8 + 2);
  FUN_001505ac(puVar1 + 2,&DAT_0053687c,0xa8,&DAT_00536924,0x90,&DAT_005369b4,0x18,0,0,&DAT_005369cc
               ,0x1a4);
  FUN_0014e188(puVar1 + 10,0x12,1000,puVar1 + 2,1);
  FUN_00230b9c(0,0xffffffff);
  FUN_0014e188(puVar1 + 0x2d,0x12,1000,puVar1 + 2,1);
  FUN_001846d0(puVar1 + 0x2d,0);
  FUN_0014e188(puVar1 + 0x50,0x12,1000,puVar1 + 2,1);
  FUN_001846d0(puVar1 + 0x50,1);
  FUN_0014e188(puVar1 + 0x73,0x12,1000,puVar1 + 2,1);
  FUN_001846d0(puVar1 + 0x73,3);
  FUN_0014e188(puVar1 + 0x96,0x12,1000,puVar1 + 2,1);
  FUN_001846d0(puVar1 + 0x96,3);
  FUN_0014e188(puVar1 + 0xb9,0x12,1000,puVar1 + 2,1);
  FUN_00184758(puVar1 + 0xb9,1,0);
  FUN_0014e220(puVar1 + 0xdc,0x12,0xffffffff,0x1c,puVar1 + 2,0xc9);
  FUN_001846d0(puVar1 + 0xdc,2);
  *(unsigned short *)((int)puVar1 + 0x3aa) = 2;
  FUN_0014e188(puVar1 + 0xff,0x12,0x556,puVar1 + 2,1);
  FUN_0014e188(puVar1 + 0x122,0x12,0x556,puVar1 + 2,1);
  temp_v0 = FUN_0014bce0(0);
  puVar1[0x8ee] = temp_v0;
  FUN_001527d8(temp_v0,0xffffffff);
  FUN_00151408(puVar1[0x8ee],0,0x91a2a2ff);
  FUN_001b4a90(puVar1 + 0x151,0x2a,0xffffffff);
  *(unsigned char *)((int)puVar1 + 0x24aa) = 1;
  puVar5 = DAT_00588fe8;
  DAT_00588fe8[0x92b] = 0;
  puVar5[0x959] = 1;
  puVar5[0x92c] = 0;
  puVar5[0x92d] = 0;
  puVar5[0x92e] = 0;
  puVar5[0x92f] = 0;
  puVar5[0x930] = 0;
  puVar5[0x931] = 0;
  puVar5[0x932] = 0;
  puVar5[0x933] = 0;
  puVar5[0x934] = 0;
  puVar5[0x935] = 0;
  puVar5[0x936] = 0;
  puVar5[0x937] = 0;
  puVar5[0x938] = 0;
  puVar5[0x939] = 0;
  puVar5[0x93a] = 0;
  FUN_0050d794(puVar5 + 0x93d,0xffffffff);
  *(unsigned char *)(puVar5 + 0x93c) = 0;
  puVar5[0x93f] = 0;
  puVar5 = DAT_00588fe8 + 0x962;
  *(unsigned char *)(DAT_00588fe8 + 0x961) = 0;
  FUN_003e4140(puVar5);
  *(unsigned char *)(puVar1 + 0x966) = 0;
  puVar1 = DAT_00588fe8;
  puVar5 = DAT_00588fe8 + 0x95b;
  DAT_00588fe8[0x95d] = 0;
  FUN_002804b0(&LAB_0034a948,puVar5,0);
  FUN_002804b0(0x34a958,puVar1 + 0x95c,0);
  return;
}

} /* extern "C" */
