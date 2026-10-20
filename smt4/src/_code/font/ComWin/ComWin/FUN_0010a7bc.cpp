/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a7bc` (_code @ 0x10a7bc, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bee58(...);
int FUN_002beed0(...);
int FUN_002c312c(...);
int FUN_002c4938(void);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_002c5788(unsigned char *, int, int, int, unsigned char *, int, int);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(unsigned int *);

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

extern unsigned char LAB_0010a974; /* 0x10a974 */
extern unsigned char LAB_0010a984; /* 0x10a984 */
extern unsigned char LAB_0010a998; /* 0x10a998 */
extern int FUN_0011a434(...); /* 0x11a434 */
extern unsigned char LAB_0011b174; /* 0x11b174 */
extern unsigned char DAT_004037ec; /* 0x4037ec */
extern unsigned char DAT_0040381c; /* 0x40381c */
extern unsigned char DAT_0040384c; /* 0x40384c */
extern unsigned int *DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002beed0. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0010a7bc(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043e0f8 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x188,1);
    DAT_0043e0f8 = puVar1;
  }
  puVar1 = DAT_0043e0f8;
  FUN_002c4938();
  puVar2 = &LAB_0010a974;
  FUN_002c5788(&LAB_0010a974,1,0,0,&LAB_0011b174,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_0010a984,0x81,0,0,FUN_0011a434,0,0,puVar2);
  FUN_002c4a08(&LAB_0010a998,0xdf,0,0,FUN_0011a434,0,0,*puVar1);
  puVar1 = DAT_0043e0f8;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0043e0f8 + 7);
  FUN_002c312c(puVar1 + 7,0,0,&DAT_004037ec,0x30,&DAT_0040381c,0x30,0,0,&DAT_0040384c,0x118);
  FUN_002beed0(puVar1 + 0xf,0xe,0xffffffff,2,puVar1 + 7,1);
  FUN_002bee58(puVar1 + 0xf,0);
  FUN_002beed0(puVar1 + 0x32,0xe,0xffffffff,3,puVar1 + 7,1);
  FUN_002bee58(puVar1 + 0x32,2);
  return;
}

} /* extern "C" */
