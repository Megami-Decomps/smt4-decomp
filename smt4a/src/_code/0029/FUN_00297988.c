/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297988` (_code @ 0x297988, 0x28c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int DAT_005821c4; /* 0x5821c4 */
extern int DAT_005821c8; /* 0x5821c8 */
extern int DAT_005821d0; /* 0x5821d0 */
extern unsigned int DAT_005821d4; /* 0x5821d4 */
extern unsigned int DAT_005821d8; /* 0x5821d8 */
extern int DAT_005821dc; /* 0x5821dc */
extern int DAT_005821e0; /* 0x5821e0 */
extern unsigned int DAT_005821e4; /* 0x5821e4 */
extern unsigned int DAT_005821e8; /* 0x5821e8 */
extern int DAT_005821ec; /* 0x5821ec */
extern int DAT_005821f0; /* 0x5821f0 */
extern int DAT_005821f4; /* 0x5821f4 */
extern int DAT_005821f8; /* 0x5821f8 */
extern unsigned int DAT_005821fc; /* 0x5821fc */
extern int DAT_00582200; /* 0x582200 */
extern float DAT_005f15dc; /* 0x5f15dc */
extern signed char DAT_005f1858; /* 0x5f1858 */
extern int DAT_005f1c0c; /* 0x5f1c0c */
extern int DAT_005f1c14; /* 0x5f1c14 */
extern int DAT_005f1c18; /* 0x5f1c18 */
extern int DAT_005f1c1c; /* 0x5f1c1c */
extern int DAT_005f1c20; /* 0x5f1c20 */
extern unsigned int DAT_005f1c24; /* 0x5f1c24 */
extern int DAT_005f1c28; /* 0x5f1c28 */
extern int DAT_005f1c2c; /* 0x5f1c2c */
extern unsigned int DAT_005f1c30; /* 0x5f1c30 */
extern unsigned int DAT_005f1c34; /* 0x5f1c34 */
extern unsigned int DAT_005f1c38; /* 0x5f1c38 */
extern unsigned int DAT_005f1c3c; /* 0x5f1c3c */
extern unsigned int DAT_005f1c40; /* 0x5f1c40 */
extern unsigned int DAT_005f1c44; /* 0x5f1c44 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014afd0. */
extern int FUN_00153f64(unsigned int, int);
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_00235bfc. */
/* Supplied declaration required: FUN_00297024. */
/* Supplied declaration required: FUN_0033f42c. */


void FUN_00297988(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  if (param_2 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 0xf;
    if (param_2 >= 2) {
      temp_v0 = param_2;
    }
  }
  temp_v2 = 0;
  DAT_005821f0 = param_1;
  if (DAT_005f1858 != '\0') {
    DAT_005821f0 = 0;
  }
  DAT_005f1c0c = DAT_005821f0;
  psVar2 = (short *)(DAT_005821c4 + DAT_005821f0 * 0x30);
  DAT_005f1c14 = (int)*psVar2;
  DAT_005f1c18 = (int)psVar2[1];
  DAT_005f1c1c = (int)psVar2[2];
  DAT_005f1c20 = (int)psVar2[3];
  temp_v1 = (int)*psVar2;
  if (temp_v0 != 0) {
    DAT_005821e4 = 0;
    DAT_005821e0 = DAT_005821dc;
    DAT_005821e8 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else {
    DAT_005821e8 = 0x3f800000;
    DAT_005821e4 = 0x3f800000;
    DAT_005821e0 = temp_v1;
  }
  DAT_005821dc = temp_v1;
  *(int *)(DAT_005821c8 + temp_v1 * 0x124) = (int)psVar2[3];
  if (DAT_005821f4 != 0) {
    FUN_0019a7f4(0x2d,DAT_005821f8);
    DAT_005821f4 = 0;
  }
  DAT_005821f8 = temp_v1;
  if (temp_v1 >= 0x32) {
    DAT_005821f8 = 0;
  }
  FUN_0014afd0(0x2d,DAT_005821f8);
  DAT_005821f4 = FUN_00153f64(0x2d,DAT_005821f8);
  DAT_005821d0 = (int)psVar2[1];
  DAT_005821d8 = 0;
  DAT_00582200 = (int)psVar2[3];
  DAT_005821ec = (int)psVar2[2];
  VectorSignedToFloat((int)psVar2[6],(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)psVar2[7],(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)(psVar2 + 5),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)psVar2 + 9),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)psVar2 + 0xb),(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_005821d4 = temp_v2;
  FUN_00235bfc((char)psVar2[4],(int)psVar2[7],(unsigned int)*(unsigned char *)((int)psVar2 + 9),
               (unsigned int)*(unsigned char *)(psVar2 + 5));
  VectorSignedToFloat((int)psVar2[0xd],(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00297024(0,(char)psVar2[10],*(unsigned char *)((int)psVar2 + 0x15),(char)psVar2[0xb],
               *(unsigned char *)((int)psVar2 + 0x17),(char)psVar2[0xc],
               *(unsigned char *)((int)psVar2 + 0x19),(char)psVar2[0x10],
               *(unsigned char *)((int)psVar2 + 0x21),(char)psVar2[0x11],
               *(unsigned char *)((int)psVar2 + 0x23),(int)psVar2[0x12],(int)psVar2[0x13]);
  DAT_005f1c24 = (unsigned int)*(unsigned char *)(psVar2 + 0x14);
  DAT_005f1c28 = (int)(char)psVar2[0x15];
  DAT_005f1c2c = (DAT_005f1c28 * 3) / 5;
  DAT_005f1c30 = (unsigned int)*(unsigned char *)((int)psVar2 + 0x2b);
  DAT_005f1c34 = (unsigned int)*(unsigned char *)(psVar2 + 0x16);
  DAT_005f1c38 = (unsigned int)*(unsigned char *)((int)psVar2 + 0x29);
  DAT_005f1c3c = (unsigned int)*(unsigned char *)((int)psVar2 + 0x2d);
  DAT_005f1c40 = (unsigned int)*(unsigned char *)(psVar2 + 0x17);
  DAT_005f1c44 = (unsigned int)*(unsigned char *)((int)psVar2 + 0x2f);
  DAT_005f15dc = (float)VectorSignedToFloat((int)psVar2[0xd],(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_005f15dc = DAT_005f15dc + 180.0f;
  if ((int)DAT_005f15dc >= 0x43b40001) {
    DAT_005f15dc = DAT_005f15dc - 360.0f;
  }
  DAT_005821fc = 0;
  FUN_0033f42c();
  return;
}
