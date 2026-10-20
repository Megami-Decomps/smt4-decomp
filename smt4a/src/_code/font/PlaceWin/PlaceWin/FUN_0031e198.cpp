/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e198` (_code @ 0x31e198, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int FUN_0014e38c(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_001505ac(...);
int FUN_0015155c(...);
int FUN_00163060(int, int, int, int, int);
int FUN_001846d0(...);
int FUN_002e6354(void);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(unsigned int *);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_0031e310; /* 0x31e310 */
extern unsigned char LAB_0031e324; /* 0x31e324 */
extern unsigned char LAB_0031e338; /* 0x31e338 */
extern int FUN_003d0110(...); /* 0x3d0110 */
extern unsigned char LAB_003d08c8; /* 0x3d08c8 */
extern unsigned char DAT_0052fb2c; /* 0x52fb2c */
extern unsigned char DAT_0052fb44; /* 0x52fb44 */
extern unsigned char DAT_0052fb5c; /* 0x52fb5c */
extern unsigned int *DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0031e198(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f578 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x140,1);
    DAT_0057f578 = puVar1;
  }
  puVar1 = DAT_0057f578;
  FUN_002e6354();
  puVar2 = &LAB_0031e310;
  FUN_0014e38c(&LAB_0031e310,3,0,0,&LAB_003d08c8,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0031e324,0x86,0,0,FUN_003d0110,0,0,puVar2);
  FUN_0015155c(&LAB_0031e338,0xe2,0,0,FUN_003d0110,0,0,*puVar1);
  puVar1 = DAT_0057f578;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0057f578 + 5);
  FUN_001505ac(puVar1 + 5,&DAT_0052fb2c,0x18,&DAT_0052fb44,0x18,0,0,0,0,&DAT_0052fb5c,0x70);
  FUN_0014e188(puVar1 + 0xd,8,0x87,puVar1 + 5,1);
  FUN_001846d0(puVar1 + 0xd,0);
  return;
}

} /* extern "C" */
