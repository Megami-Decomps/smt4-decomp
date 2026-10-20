/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e234` (_code @ 0x37e234, 0x258 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(...);
int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_001630d4(...);
int FUN_00184310(...);
int FUN_00184964(...);
int FUN_001acf98(...);
int FUN_002e6354(...);
int FUN_003d2d34(...);
int FUN_003d2d6c(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_002c91d0; /* 0x2c91d0 */
extern int FUN_0031fec0(...); /* 0x31fec0 */
extern int FUN_0034cb00(...); /* 0x34cb00 */
extern unsigned char LAB_0037e4ec; /* 0x37e4ec */
extern unsigned char LAB_0037e504; /* 0x37e504 */
extern unsigned char LAB_0037e520; /* 0x37e520 */
extern unsigned int *DAT_00588c54; /* 0x588c54 */
extern unsigned char DAT_00588c58; /* 0x588c58 */
extern unsigned char DAT_00588c88; /* 0x588c88 */
extern char s________________00588c98[43]; /* 0x588c98 */
extern unsigned char DAT_00588ce4; /* 0x588ce4 */
extern char s________________00588cf4[43]; /* 0x588cf4 */
extern unsigned char DAT_00588d40; /* 0x588d40 */
extern char s____________00588d50[31]; /* 0x588d50 */
extern unsigned char DAT_00588d94; /* 0x588d94 */
extern char s____________00588da4[31]; /* 0x588da4 */
extern unsigned char DAT_00588de8; /* 0x588de8 */
extern char s________________00588df8[43]; /* 0x588df8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00184964. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003d2d6c. */


void FUN_0037e234(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  
  puVar1 = (unsigned int *)0x100;
  FUN_001630d4(0x100,0x100,0,0x1b8,1);
  DAT_00588c54 = puVar1;
  FUN_002e6354();
  puVar1 = DAT_00588c54;
  FUN_0013f1b8(0x2c,0);
  temp_v1 = 0;
  do {
    FUN_001acf98(0x2c,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  puVar1[4] = 0x3f800000;
  puVar1[10] = 3000;
  puVar1[9] = 0x3e29e87d;
  puVar1[0x12] = 2000;
  puVar1[0x11] = 0x3dda740e;
  puVar1[0x1c] = 0;
  puVar1[0x24] = 0;
  puVar1[0x2c] = 1000;
  puVar1[0x28] = 0x3dc7ce0c;
  puVar1[0x36] = 0xe;
  puVar1[0x43] = 0xe;
  puVar1[0x50] = 10;
  puVar1[0x6a] = 0xe;
  puVar1[0x31] = (unsigned int)&DAT_00588c58;
  puVar1[0x32] = (unsigned int)&DAT_00588c88;
  puVar1[0x35] = (unsigned int)s________________00588c98;
  puVar1[0x3e] = (unsigned int)(s________________00588c98 + 0x1c);
  puVar1[0x3f] = (unsigned int)&DAT_00588ce4;
  puVar1[0x42] = (unsigned int)s________________00588cf4;
  puVar1[0x4b] = (unsigned int)(s________________00588cf4 + 0x1c);
  puVar1[0x4c] = (unsigned int)&DAT_00588d40;
  puVar1[0x4f] = (unsigned int)s____________00588d50;
  puVar1[0x58] = (unsigned int)(s____________00588d50 + 0x14);
  puVar1[0x59] = (unsigned int)&DAT_00588d94;
  puVar1[0x5c] = (unsigned int)s____________00588da4;
  puVar1[0x5d] = 10;
  puVar1[0x65] = (unsigned int)(s____________00588da4 + 0x14);
  puVar1[0x66] = (unsigned int)&DAT_00588de8;
  puVar1[0x69] = (unsigned int)s________________00588df8;
  temp_v3 = 0;
  do {
    temp_v0 = FUN_00184964(0,0xff);
    temp_v2 = temp_v3 + 1;
    temp_v0 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[temp_v3 * 8 + 8] = temp_v0;
    temp_v3 = temp_v2;
  } while (temp_v2 < 2);
  temp_v3 = 0;
  do {
    temp_v0 = FUN_00184964(0,puVar1[temp_v3 * 0xd + 0x36] - 1);
    temp_v2 = temp_v3 + 1;
    puVar1[temp_v3 * 0xd + 0x37] = temp_v0;
    temp_v3 = temp_v2;
  } while (temp_v2 < 5);
  param_1 = param_1 & 0xffff;
  FUN_00184310();
  puVar1 = DAT_00588c54;
  DAT_00588c54[3] = *(unsigned char *)(param_1 + 0x3a) + 0x1000097;
  puVar3 = &LAB_0037e4ec;
  FUN_0014e38c(&LAB_0037e4ec,4,0,0,&LAB_002c91d0,FUN_0034cb00,puVar1);
  puVar1 = DAT_00588c54;
  *DAT_00588c54 = (unsigned int)puVar3;
  FUN_0015155c(&LAB_0037e504,0x81,0,0,FUN_0031fec0,0,puVar1,puVar3);
  FUN_0015155c(&LAB_0037e520,0xdd,0,0,FUN_0031fec0,0,DAT_00588c54,*DAT_00588c54);
  FUN_003d2d6c(0);
  FUN_003d2d34(DAT_00588c54[3],0,0x3c);
  return;
}

} /* extern "C" */
