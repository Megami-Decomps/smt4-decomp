/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a400` (_code @ 0x31a400, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_00227c5c(); /* 0x227c5c */
extern unsigned char LAB_002a35fc; /* 0x2a35fc */
extern unsigned char LAB_002a3600; /* 0x2a3600 */
extern unsigned char LAB_002a37a4; /* 0x2a37a4 */
extern unsigned char LAB_0031a5a4; /* 0x31a5a4 */
extern unsigned char LAB_0031a5b4; /* 0x31a5b4 */
extern unsigned char LAB_0031a5c8; /* 0x31a5c8 */
extern signed char DAT_0057f208; /* 0x57f208 */
extern unsigned int *DAT_0057f20c; /* 0x57f20c */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_002c85ec. */
/* Supplied declaration required: FUN_0037ed3c. */


void FUN_0031a400(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  if (DAT_0057f208 < '\x01') {
    if (DAT_0057f20c == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      FUN_00163060(0x100,0x100,0,0x18,1);
      DAT_0057f20c = puVar1;
    }
    puVar1 = DAT_0057f20c;
    *DAT_0057f20c = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar2 = &LAB_0031a5a4;
    FUN_0014e38c(&LAB_0031a5a4,4,0,0,FUN_00227c5c,&LAB_002a35fc,0);
    *puVar1 = (unsigned int)puVar2;
    FUN_0015155c(&LAB_0031a5b4,0xe8,0,0,&LAB_002a3600,0,0,puVar2);
    FUN_0015155c(&LAB_0031a5c8,0x15f,0,0,&LAB_002a37a4,0,0,*puVar1);
    FUN_002c85ec();
    puVar1 = DAT_0057f20c;
    DAT_0057f20c[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_0037ed3c();
  }
  puVar1 = DAT_0057f20c;
  if ((DAT_0057f20c != (unsigned int *)0x0) && (DAT_0057f20c[2] == 0)) {
    temp_v0 = FUN_0018719c(0x400);
    if (temp_v0 != 0) {
      puVar1[3] = 0;
    }
    else {
      puVar1[3] = 1;
    }
    puVar1[2] = 1;
    puVar1[4] = 0x3f800000;
    puVar1[5] = 0;
  }
  DAT_0057f208 = DAT_0057f208 + '\x01';
  return;
}
