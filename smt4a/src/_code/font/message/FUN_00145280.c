/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145280` (_code @ 0x145280, 0x240 bytes) from smt4a.cxi.
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

extern unsigned char LAB_00145504; /* 0x145504 */
extern unsigned char LAB_00145510; /* 0x145510 */
extern unsigned char LAB_0014551c; /* 0x14551c */
extern int FUN_0014c01c(); /* 0x14c01c */
extern int FUN_0014f3f4(); /* 0x14f3f4 */
extern unsigned char DAT_0052fe6c; /* 0x52fe6c */
extern unsigned char DAT_0052ff80; /* 0x52ff80 */
extern unsigned char DAT_0053004c; /* 0x53004c */
extern unsigned char DAT_005300a0; /* 0x5300a0 */

extern unsigned int FUN_0014bce0(unsigned int);
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_001513ec. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001692d4. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


unsigned int * FUN_00145280(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x1a28,1);
  FUN_002e6354();
  *(unsigned char *)((int)puVar1 + 0x19c5) = 0x15;
  FUN_001692d4();
  temp_v0 = FUN_0014bce0(0);
  puVar1[1] = temp_v0;
  FUN_001527d8(temp_v0,0xffffffff);
  FUN_001513ec(puVar1[1],3,0xff);
  FUN_00151408(puVar1[1],0,0xffffffff);
  *(unsigned char *)(puVar1 + 2) = 0;
  *(unsigned char *)(puVar1 + 0xd) = 0;
  *(unsigned char *)((int)puVar1 + 0x35) = 0;
  *(unsigned char *)((int)puVar1 + 0x19da) = 1;
  *(unsigned char *)((int)puVar1 + 0x32) = 0;
  *(unsigned char *)((int)puVar1 + 0x8e) = 0;
  *(unsigned char *)((int)puVar1 + 0x8f) = 0;
  *(unsigned char *)(puVar1 + 0x23) = 0;
  *(unsigned char *)(puVar1 + 0x24) = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  *(unsigned char *)(puVar1 + 0x3a) = 0;
  *(unsigned char *)((int)puVar1 + 0x192) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(unsigned char *)((int)puVar1 + 0x19f2) = 0;
  puVar1[0x67d] = 0;
  *(unsigned char *)((int)puVar1 + 0x19fb) = 0;
  puVar1[0x67f] = 0;
  puVar1[0x681] = 0;
  *(unsigned char *)(puVar1 + 0x682) = 0;
  puVar1[0x683] = 0;
  *(unsigned char *)((int)puVar1 + 0x33) = 0;
  puVar1[0x67b] = 0xfffffffe;
  *(unsigned char *)(puVar1 + 0x684) = 0;
  *(unsigned int *)((int)puVar1 + 0x1a11) = 0;
  puVar1[0x686] = 0;
  puVar3 = &LAB_00145504;
  FUN_0014e38c(&LAB_00145504,4,0,0,FUN_0014c01c,0,puVar1);
  *puVar1 = (unsigned int)puVar3;
  FUN_0015155c(&LAB_00145510,0x86,0,0,FUN_0014f3f4,0,puVar1,puVar3);
  FUN_0015155c(&LAB_0014551c,0xe2,0,0,FUN_0014f3f4,0,puVar1,*puVar1);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 0x65);
  FUN_001505ac(puVar1 + 0x65,&DAT_0052fe6c,0x114,&DAT_0052ff80,0xcc,&DAT_0053004c,0x54,0,0,
               &DAT_005300a0,0x94c);
  return puVar1;
}
