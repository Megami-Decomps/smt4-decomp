/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4284` (_code @ 0x1e4284, 0x290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9604(int, unsigned int, unsigned int, int);
int FUN_001e39ec(...);
int FUN_0025b754(void);
int FUN_002ae898(int, int);
int FUN_002c58c8(int, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern int DAT_00448c58; /* 0x448c58 */
extern int DAT_00448c5c; /* 0x448c5c */
extern int DAT_00448c64; /* 0x448c64 */
extern unsigned int DAT_00448c68; /* 0x448c68 */
extern unsigned int DAT_00448c6c; /* 0x448c6c */
extern int DAT_00448c70; /* 0x448c70 */
extern int DAT_00448c74; /* 0x448c74 */
extern unsigned int DAT_00448c78; /* 0x448c78 */
extern unsigned int DAT_00448c7c; /* 0x448c7c */
extern int DAT_00448c80; /* 0x448c80 */
extern int DAT_00448c84; /* 0x448c84 */
extern int DAT_00448c88; /* 0x448c88 */
extern int DAT_00448c8c; /* 0x448c8c */
extern unsigned int DAT_00448c90; /* 0x448c90 */
extern int DAT_00448c94; /* 0x448c94 */
extern float DAT_0049f8fc; /* 0x49f8fc */
extern signed char DAT_0049fb44; /* 0x49fb44 */
extern int DAT_0049fcac; /* 0x49fcac */
extern int DAT_0049fcb4; /* 0x49fcb4 */
extern int DAT_0049fcb8; /* 0x49fcb8 */
extern int DAT_0049fcbc; /* 0x49fcbc */
extern int DAT_0049fcc0; /* 0x49fcc0 */
extern unsigned int DAT_0049fcc4; /* 0x49fcc4 */
extern int DAT_0049fcc8; /* 0x49fcc8 */
extern int DAT_0049fccc; /* 0x49fccc */
extern unsigned int DAT_0049fcd0; /* 0x49fcd0 */
extern unsigned int DAT_0049fcd4; /* 0x49fcd4 */
extern unsigned int DAT_0049fcd8; /* 0x49fcd8 */
extern unsigned int DAT_0049fcdc; /* 0x49fcdc */
extern unsigned int DAT_0049fce0; /* 0x49fce0 */
extern unsigned int DAT_0049fce4; /* 0x49fce4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a9604. */
/* Supplied declaration required: FUN_001e39ec. */
/* Supplied declaration required: FUN_0025b754. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002c1c0c(unsigned int, int);
/* Supplied declaration required: FUN_002c58c8. */


void FUN_001e4284(int param_1,int param_2)

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
  DAT_00448c84 = param_1;
  if (DAT_0049fb44 != '\0') {
    DAT_00448c84 = 0;
  }
  DAT_0049fcac = DAT_00448c84;
  psVar2 = (short *)(DAT_00448c58 + DAT_00448c84 * 0x30);
  DAT_0049fcb4 = (int)*psVar2;
  DAT_0049fcb8 = (int)psVar2[1];
  DAT_0049fcbc = (int)psVar2[2];
  DAT_0049fcc0 = (int)psVar2[3];
  temp_v1 = (int)*psVar2;
  if (temp_v0 != 0) {
    DAT_00448c78 = 0;
    DAT_00448c74 = DAT_00448c70;
    DAT_00448c7c = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else {
    DAT_00448c7c = 0x3f800000;
    DAT_00448c78 = 0x3f800000;
    DAT_00448c74 = temp_v1;
  }
  DAT_00448c70 = temp_v1;
  *(int *)(DAT_00448c5c + temp_v1 * 0x124) = (int)psVar2[3];
  if (DAT_00448c88 != 0) {
    FUN_002ae898(0x38,DAT_00448c8c);
    DAT_00448c88 = 0;
  }
  DAT_00448c8c = temp_v1;
  if (temp_v1 >= 0x32) {
    DAT_00448c8c = 0;
  }
  FUN_002c58c8(0x38,DAT_00448c8c);
  DAT_00448c88 = FUN_002c1c0c(0x38,DAT_00448c8c);
  DAT_00448c64 = (int)psVar2[1];
  DAT_00448c6c = 0;
  DAT_00448c94 = (int)psVar2[3];
  DAT_00448c80 = (int)psVar2[2];
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)psVar2 + 9),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)(psVar2 + 5),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)psVar2[6],(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)psVar2 + 0xb),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)psVar2[7],(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_00448c68 = temp_v2;
  FUN_001a9604((char)psVar2[4],(unsigned int)*(unsigned char *)(psVar2 + 5),(unsigned int)*(unsigned char *)((int)psVar2 + 0xb),
               (int)psVar2[6]);
  VectorSignedToFloat((int)psVar2[0xd],(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001e39ec(0,(char)psVar2[10],*(unsigned char *)((int)psVar2 + 0x15),(char)psVar2[0xb],
               *(unsigned char *)((int)psVar2 + 0x17),(char)psVar2[0xc],
               *(unsigned char *)((int)psVar2 + 0x19),(char)psVar2[0x10],
               *(unsigned char *)((int)psVar2 + 0x21),(char)psVar2[0x11],
               *(unsigned char *)((int)psVar2 + 0x23),(int)psVar2[0x12],(int)psVar2[0x13]);
  DAT_0049fcc4 = (unsigned int)*(unsigned char *)(psVar2 + 0x14);
  DAT_0049fcc8 = (int)(char)psVar2[0x15];
  DAT_0049fccc = (DAT_0049fcc8 * 3) / 5;
  DAT_0049fcd0 = (unsigned int)*(unsigned char *)((int)psVar2 + 0x2b);
  DAT_0049fcd4 = (unsigned int)*(unsigned char *)(psVar2 + 0x16);
  DAT_0049fcd8 = (unsigned int)*(unsigned char *)((int)psVar2 + 0x29);
  DAT_0049fcdc = (unsigned int)*(unsigned char *)((int)psVar2 + 0x2d);
  DAT_0049fce0 = (unsigned int)*(unsigned char *)(psVar2 + 0x17);
  DAT_0049fce4 = (unsigned int)*(unsigned char *)((int)psVar2 + 0x2f);
  DAT_0049f8fc = (float)VectorSignedToFloat((int)psVar2[0xd],(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_0049f8fc = DAT_0049f8fc + 180.0f;
  if ((int)DAT_0049f8fc >= 0x43b40001) {
    DAT_0049f8fc = DAT_0049f8fc - 360.0f;
  }
  DAT_00448c90 = 0;
  FUN_0025b754();
  return;
}

} /* extern "C" */
