/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6774` (_code @ 0x2f6774, 0x258 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296d6c(...);
int FUN_0029c3b0(...);
int FUN_002a03a0(...);
int FUN_002a5ed0(...);
int FUN_002b9024(...);
int FUN_002c4938(...);
int FUN_002c4a08(...);
int FUN_002c5300(...);
int FUN_002c5788(...);
int FUN_002c5914(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00203cfc; /* 0x203cfc */
extern int FUN_0022413c(...); /* 0x22413c */
extern int FUN_002dad64(...); /* 0x2dad64 */
extern unsigned char LAB_002f6a28; /* 0x2f6a28 */
extern unsigned char LAB_002f6a40; /* 0x2f6a40 */
extern unsigned char LAB_002f6a5c; /* 0x2f6a5c */
extern unsigned int *DAT_0044dc50; /* 0x44dc50 */
extern unsigned char DAT_0044dc68; /* 0x44dc68 */
extern unsigned char DAT_0044dc98; /* 0x44dc98 */
extern char s________________0044dca8[43]; /* 0x44dca8 */
extern unsigned char DAT_0044dcf4; /* 0x44dcf4 */
extern char s________________0044dd04[43]; /* 0x44dd04 */
extern unsigned char DAT_0044dd50; /* 0x44dd50 */
extern char s____________0044dd60[31]; /* 0x44dd60 */
extern unsigned char DAT_0044dda4; /* 0x44dda4 */
extern char s____________0044ddb4[31]; /* 0x44ddb4 */
extern unsigned char DAT_0044ddf8; /* 0x44ddf8 */
extern unsigned char DAT_0044de08; /* 0x44de08 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00296d6c. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002a03a0. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002c5914. */


void FUN_002f6774(unsigned int param_1)

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
  FUN_002c5300(0x100,0x100,0,0x1b8,1);
  DAT_0044dc50 = puVar1;
  FUN_002c4938();
  puVar1 = DAT_0044dc50;
  FUN_002c5914(0x37,0);
  temp_v1 = 0;
  do {
    FUN_002a5ed0(0x37,temp_v1);
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
  puVar1[0x31] = (unsigned int)&DAT_0044dc68;
  puVar1[0x32] = (unsigned int)&DAT_0044dc98;
  puVar1[0x35] = (unsigned int)s________________0044dca8;
  puVar1[0x3e] = (unsigned int)(s________________0044dca8 + 0x1c);
  puVar1[0x3f] = (unsigned int)&DAT_0044dcf4;
  puVar1[0x42] = (unsigned int)s________________0044dd04;
  puVar1[0x4b] = (unsigned int)(s________________0044dd04 + 0x1c);
  puVar1[0x4c] = (unsigned int)&DAT_0044dd50;
  puVar1[0x4f] = (unsigned int)s____________0044dd60;
  puVar1[0x58] = (unsigned int)(s____________0044dd60 + 0x14);
  puVar1[0x59] = (unsigned int)&DAT_0044dda4;
  puVar1[0x5c] = (unsigned int)s____________0044ddb4;
  puVar1[0x5d] = 10;
  puVar1[0x65] = (unsigned int)(s____________0044ddb4 + 0x14);
  puVar1[0x66] = (unsigned int)&DAT_0044ddf8;
  puVar1[0x69] = (unsigned int)&DAT_0044de08;
  temp_v3 = 0;
  do {
    temp_v0 = FUN_00296d6c(0,0xff);
    temp_v2 = temp_v3 + 1;
    temp_v0 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar1[temp_v3 * 8 + 8] = temp_v0;
    temp_v3 = temp_v2;
  } while (temp_v2 < 2);
  temp_v3 = 0;
  do {
    temp_v0 = FUN_00296d6c(0,puVar1[temp_v3 * 0xd + 0x36] - 1);
    temp_v2 = temp_v3 + 1;
    puVar1[temp_v3 * 0xd + 0x37] = temp_v0;
    temp_v3 = temp_v2;
  } while (temp_v2 < 5);
  param_1 = param_1 & 0xffff;
  FUN_002b9024();
  puVar1 = DAT_0044dc50;
  DAT_0044dc50[3] = *(unsigned char *)(param_1 + 0x32) + 0x100008a;
  puVar3 = &LAB_002f6a28;
  FUN_002c5788(&LAB_002f6a28,2,0,0,&LAB_00203cfc,FUN_002dad64,puVar1);
  puVar1 = DAT_0044dc50;
  *DAT_0044dc50 = (unsigned int)puVar3;
  FUN_002c4a08(&LAB_002f6a40,0x7d,0,0,FUN_0022413c,0,puVar1,puVar3);
  FUN_002c4a08(&LAB_002f6a5c,0xdb,0,0,FUN_0022413c,0,DAT_0044dc50,*DAT_0044dc50);
  FUN_0029c3b0(0);
  FUN_002a03a0(DAT_0044dc50[3],0,0x3c);
  return;
}

} /* extern "C" */
