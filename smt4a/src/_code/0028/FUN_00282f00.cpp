/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282f00` (_code @ 0x282f00, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163fd4(int);
int asdTextureRelease(void);
int FUN_002fe590(void);
int FUN_00388aac(int);
int effMenuListsClear(void);
int FUN_00399768(int, int);
int floatPairAddA(int, float *);
int floatPairAddB(void);
int FUN_003ba614(int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char g_effectEditor; /* 0x59dbe0 */
extern unsigned char DAT_0059dbe6; /* 0x59dbe6 */
extern signed char DAT_0059dbe8; /* 0x59dbe8 */
extern unsigned int DAT_0059dbec; /* 0x59dbec */
extern int DAT_0059dbf0; /* 0x59dbf0 */
extern int DAT_0059dbf4; /* 0x59dbf4 */
extern int DAT_0059dc00; /* 0x59dc00 */
extern int DAT_0059dc08; /* 0x59dc08 */
extern unsigned int DAT_0059dc0c; /* 0x59dc0c */
extern int DAT_0059dc10; /* 0x59dc10 */
extern unsigned int DAT_0059dc2c; /* 0x59dc2c */
extern unsigned int DAT_0059dc30; /* 0x59dc30 */
extern unsigned int DAT_0059dc34; /* 0x59dc34 */
extern unsigned int DAT_0059dc38; /* 0x59dc38 */
extern unsigned int DAT_0059dc40; /* 0x59dc40 */
extern unsigned int DAT_0059dc44; /* 0x59dc44 */
extern unsigned int DAT_0059dc48; /* 0x59dc48 */
extern unsigned int DAT_0059e9b4; /* 0x59e9b4 */

/* Supplied declaration required: FUN_00163fd4. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: asdTextureRelease. */
/* Supplied declaration required: FUN_002fe590. */
/* Supplied declaration required: FUN_00388aac. */
/* Supplied declaration required: effMenuListsClear. */
/* Supplied declaration required: FUN_00399768. */
/* Supplied declaration required: floatPairAddA. */
/* Supplied declaration required: floatPairAddB. */
/* Supplied declaration required: FUN_003ba614. */


unsigned int FUN_00282f00(void)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned long long temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = '\0';
  if (DAT_0059dc08 != 0) {
    temp_v0 = DAT_0059dbe8;
  }
  if (DAT_0059dc08 == 0 || temp_v0 == '\0') {
    temp_v2 = FUN_00163fd4(0x1c);
    pfVar3 = (float *)((unsigned long long)temp_v2 >> 0x20);
    if ((int)temp_v2 != 0) {
      pfVar3 = &temp_v3;
    }
    else {
      temp_v4 = 0.0f;
      temp_v3 = 0.0f;
    }
    temp_v4 = temp_v4 * 128.0f;
    temp_v3 = temp_v3 * 128.0f;
    floatPairAddA(0,pfVar3);
    floatPairAddB();
    FUN_002fe590();
    DAT_0059dc0c = 0;
    effMenuListsClear();
    FUN_00388aac(0);
    temp_v1 = FUN_00163fd4(0x1c);
    if ((temp_v1 != 0) && (temp_v1 = padButtonIsPressed(0x1b), temp_v1 != 0)) {
      if (g_effectEditor == '\0') {
        g_effectEditor = '\x01';
      }
      else {
        g_effectEditor = '\0';
      }
    }
    return 1;
  }
  DAT_0059dbe6 = 0;
  DAT_0059dbec = 0;
  DAT_0059e9b4 = 0;
  if (DAT_0059dbf4 != 0) {
    FUN_003ba614(DAT_0059dbf4,3);
    DAT_0059dbf4 = 0;
  }
  if (DAT_0059dbf0 != 0) {
    FUN_003ba614(DAT_0059dbf0,3);
    DAT_0059dbf0 = 0;
  }
  if (DAT_0059dc00 != 0) {
    FUN_00399768(DAT_0059dc00,3);
    DAT_0059dc00 = 0;
  }
  DAT_0059dc2c = 0;
  DAT_0059dc30 = 0;
  DAT_0059dc34 = 1;
  DAT_0059dc38 = 0;
  DAT_0059dc40 = 0;
  DAT_0059dc44 = 0;
  DAT_0059dc48 = 0;
  DAT_0059dbe8 = 0;
  if (DAT_0059dc10 != 0) {
    asdTextureRelease();
    DAT_0059dc10 = 0;
  }
  return 0;
}

} /* extern "C" */
