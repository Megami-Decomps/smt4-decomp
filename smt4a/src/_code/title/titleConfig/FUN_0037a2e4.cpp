/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a2e4` (_code @ 0x37a2e4, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int FUN_001505ac(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int sysPlaySe(...);
int FUN_00184758(...);
int FUN_00184c00(...);
int FUN_0019de98(...);
int FUN_001a9110(...);
int FUN_00203b40(...);
int FUN_002804b0(...);
int FUN_0050d794(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_002a0b58; /* 0x2a0b58 */
extern int titleConfigDestroy(...); /* 0x32b9ac */
extern int FUN_0032ba8c(...); /* 0x32ba8c */
extern unsigned char LAB_0037a570; /* 0x37a570 */
extern unsigned char LAB_0037a588; /* 0x37a588 */
extern unsigned char LAB_0037a5a0; /* 0x37a5a0 */
extern unsigned char LAB_0037a5b0; /* 0x37a5b0 */
extern unsigned char DAT_00536bec; /* 0x536bec */
extern unsigned char DAT_00536c1c; /* 0x536c1c */
extern unsigned char DAT_00588fc0; /* 0x588fc0 */
extern unsigned char DAT_00588fc1; /* 0x588fc1 */
extern unsigned char DAT_00588fc2; /* 0x588fc2 */
extern unsigned char DAT_00588fc4; /* 0x588fc4 */
extern unsigned int *g_titleConfig; /* 0x589164 */

extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: taskCreateDraw. */
extern int FUN_00162858(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001a9110. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_003164ac(unsigned char);
extern unsigned int FUN_0032b62c(unsigned char);
extern unsigned int FUN_00358c60(unsigned char);
/* Supplied declaration required: FUN_0050d794. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0037a2e4(void)

{
/* irregular: 16 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x160,1);
  puVar2 = &LAB_0037a570;
  g_titleConfig = puVar1;
  asdProcessCreateSimple(&LAB_0037a570,4,0,0,&LAB_002a0b58,titleConfigDestroy,puVar1);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0037a588,0xea,0,0,FUN_0032ba8c,0,0,puVar2);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar1 + 0xf);
  FUN_001505ac(puVar1 + 0xf,&DAT_00536bec,0x30,&DAT_00536c1c,0x30,0,0,0,0,0,0);
  temp_v1 = 0x3f800000;
  FUN_0014e188(puVar1 + 0x17,0x24,0,puVar1 + 0xf,0xc9);
  FUN_00184758(puVar1 + 0x17,2,0);
  FUN_00184c00(puVar1 + 0x17,0);
  puVar1[0x3a] = temp_v1;
  puVar1[0x3b] = 0x1e;
  FUN_00203b40(puVar1 + 0x3c,3,3,1,0,1);
  puVar1[2] = 0;
  *(unsigned short *)((int)puVar1 + 0x1a) = 0;
  FUN_0050d794(puVar1 + 7,0xffffffff);
  *(unsigned short *)(puVar1 + 9) = 0;
  FUN_002804b0(&LAB_0037a5a0,puVar1 + 0x55,0);
  FUN_002804b0(&LAB_0037a5b0,puVar1 + 0x56,0);
  sysPlaySe(0x9b);
  FUN_0019de98(0,0xf4f4f4ff);
  temp_v0 = FUN_00162858();
  if ((temp_v0 != 0) && (temp_v0 = FUN_0014af84(), *(char *)(temp_v0 + 0x27e94) != '\0')) {
    temp_v1 = FUN_0032b62c(*(unsigned char *)(temp_v0 + 0x27e90));
    puVar1[10] = temp_v1;
    temp_v1 = FUN_003164ac(*(unsigned char *)(temp_v0 + 0x27e91));
    puVar1[0xb] = temp_v1;
    temp_v1 = FUN_00358c60(*(unsigned char *)(temp_v0 + 0x27e92));
    puVar1[0xc] = temp_v1;
    temp_v1 = *(unsigned int *)(temp_v0 + 0x27e94);
    puVar1[0xd] = *(unsigned int *)(temp_v0 + 0x27e90);
    puVar1[0xe] = temp_v1;
    *(unsigned char *)(puVar1 + 0xe) = DAT_00588fc4;
    return;
  }
  temp_v1 = FUN_0032b62c(DAT_00588fc0);
  puVar1[10] = temp_v1;
  temp_v1 = FUN_003164ac(DAT_00588fc1);
  puVar1[0xb] = temp_v1;
  temp_v1 = FUN_00358c60(DAT_00588fc2);
  puVar1[0xc] = temp_v1;
  FUN_001a9110(puVar1 + 0xd,&DAT_00588fc0);
  return;
}

} /* extern "C" */
