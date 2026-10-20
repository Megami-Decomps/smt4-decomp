/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dcc64` (_code @ 0x1dcc64, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00219908(void);
int FUN_002629a8(int, int);
int FUN_002629f0(int, int);
int asdTextureRelease(void);
int FUN_002c15fc(int);
int FUN_002fcd98(int);
int effMenuListsClear(void);
int effMenuAddDeltaA(int, float *);
int effMenuAddDeltaB(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char g_effectEditor; /* 0x44ea80 */
extern unsigned char DAT_0044ea86; /* 0x44ea86 */
extern signed char DAT_0044ea88; /* 0x44ea88 */
extern unsigned int DAT_0044ea8c; /* 0x44ea8c */
extern int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044ea94; /* 0x44ea94 */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern int DAT_0044eaa8; /* 0x44eaa8 */
extern unsigned int DAT_0044eaac; /* 0x44eaac */
extern int DAT_0044eab0; /* 0x44eab0 */
extern unsigned int DAT_0044eacc; /* 0x44eacc */
extern unsigned int DAT_0044ead0; /* 0x44ead0 */
extern unsigned int DAT_0044ead4; /* 0x44ead4 */
extern unsigned int DAT_0044ead8; /* 0x44ead8 */
extern unsigned int DAT_0044eae0; /* 0x44eae0 */
extern unsigned int DAT_0044eae4; /* 0x44eae4 */
extern unsigned int DAT_0044eae8; /* 0x44eae8 */
extern unsigned int DAT_0044f864; /* 0x44f864 */

/* Supplied declaration required: FUN_00219908. */
/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: FUN_002629f0. */
extern int padIsButtonPressed(unsigned int);
/* Supplied declaration required: asdTextureRelease. */
/* Supplied declaration required: FUN_002c15fc. */
/* Supplied declaration required: FUN_002fcd98. */
/* Supplied declaration required: effMenuListsClear. */
/* Supplied declaration required: effMenuAddDeltaA. */
/* Supplied declaration required: effMenuAddDeltaB. */


unsigned int FUN_001dcc64(void)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float *pfVar3;
  unsigned long long temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v0 = '\0';
  if (DAT_0044eaa8 != 0) {
    temp_v0 = DAT_0044ea88;
  }
  if (DAT_0044eaa8 == 0 || temp_v0 == '\0') {
    temp_v2 = FUN_002c15fc(0x1c);
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
    effMenuAddDeltaA(0,pfVar3);
    effMenuAddDeltaB();
    FUN_00219908();
    DAT_0044eaac = 0;
    effMenuListsClear();
    FUN_002fcd98(0);
    temp_v1 = FUN_002c15fc(0x1c);
    if ((temp_v1 != 0) && (temp_v1 = padIsButtonPressed(0x1b), temp_v1 != 0)) {
      if (g_effectEditor == '\0') {
        g_effectEditor = '\x01';
      }
      else {
        g_effectEditor = '\0';
      }
    }
    return 1;
  }
  DAT_0044ea86 = 0;
  DAT_0044ea8c = 0;
  DAT_0044f864 = 0;
  if (DAT_0044ea94 != 0) {
    FUN_002629f0(DAT_0044ea94,3);
    DAT_0044ea94 = 0;
  }
  if (DAT_0044ea90 != 0) {
    FUN_002629f0(DAT_0044ea90,3);
    DAT_0044ea90 = 0;
  }
  if (DAT_0044eaa0 != 0) {
    FUN_002629a8(DAT_0044eaa0,3);
    DAT_0044eaa0 = 0;
  }
  DAT_0044eacc = 0;
  DAT_0044ead0 = 0;
  DAT_0044ead4 = 1;
  DAT_0044ead8 = 0;
  DAT_0044eae0 = 0;
  DAT_0044eae4 = 0;
  DAT_0044eae8 = 0;
  DAT_0044ea88 = 0;
  if (DAT_0044eab0 != 0) {
    asdTextureRelease();
    DAT_0044eab0 = 0;
  }
  return 0;
}

} /* extern "C" */
