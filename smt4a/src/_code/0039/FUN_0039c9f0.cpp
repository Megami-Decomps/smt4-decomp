/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c9f0` (_code @ 0x39c9f0, 0x2d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_00180310(...);
int FUN_001834a4(int, int);
int FUN_00183bb0(void);
int jobGetScalarValue(void);

/* stack frame of param_6: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

extern unsigned char LAB_0039ccc8; /* 0x39ccc8 */
extern unsigned char LAB_0039cccc; /* 0x39cccc */
extern unsigned char LAB_0039ccd0; /* 0x39ccd0 */
extern unsigned char LAB_0039ccd4; /* 0x39ccd4 */
extern unsigned char LAB_0039ccd8; /* 0x39ccd8 */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: jobGetScalarValue. */
extern int FUN_0026264c(unsigned short);


void FUN_0039c9f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  jobGetScalarValue();
  temp_v0 = FUN_001834a4(0x12,param_2 + 0x7b);
  temp_v1 = FUN_001834a4(0x12,0x7a);
  if ((*(char *)(param_1 + 0x2017) != '\x0e') &&
     (((*(char *)(param_1 + 0x2017) != '\a' ||
       (temp_v2 = FUN_0026264c(*(unsigned short *)(param_1 + 0x1390)), temp_v2 != 0)) &&
      (*(char *)(param_1 + 0x2017) != '\x10')))) {
    if (param_5 >= 1000) {
      FUN_00180310(0,*(short *)(temp_v1 + 8) + param_3,
                   (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,3,0xdd,
                   &LAB_0039ccc8);
    }
    else {
      FUN_00180310(0,*(short *)(temp_v1 + 8) + param_3,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + param_4,1,3,0xdd,
                   &LAB_0039ccd0,param_5);
    }
  }
  else {
    FUN_00180310(0,*(short *)(temp_v1 + 8) + param_3,
                 (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,3,0xdd,
                 &LAB_0039cccc);
  }
  if (*(char *)(param_1 + 0x2013) != '\0') {
    temp_v0 = FUN_001834a4(0x12,param_2 + 0x85);
    temp_v1 = FUN_001834a4(0x12,0x84);
    if (param_6 >= 1) {
      FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_3,
                   (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,1,0xdd,
                   &LAB_0039ccd4);
    }
    else if (param_6 < 0) {
      FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_3,
                   (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,1,0xdd,
                   &LAB_0039ccd8);
    }
    temp_v1 = FUN_001834a4(0x12,0x83);
    if (param_6 >= 1) {
      FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_3,
                   (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,3,0xdd,
                   &LAB_0039ccd0,param_6);
    }
    else if (param_6 < 0) {
      FUN_00180310(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_3,
                   (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_4,1,3,0xdd,
                   &LAB_0039ccd0,-param_6);
    }
  }
  efctSetSpeed();
  FUN_00183bb0();
  return;
}

} /* extern "C" */
