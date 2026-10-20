/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142b84` (_code @ 0x142b84, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00159030(void);
int FUN_00159e58(int);
int FUN_0015de34(int *, unsigned int, unsigned int);
int asdMemoryAlloc(int, int, int, unsigned int, int);
int FUN_0016f368(void);
int FUN_00171424(int);
int sysFatalBreak(void);

/* stack frame of param_1: 9 slot(s), 27 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp1E; /* 0x1e: local_1e */
    unsigned char sp1F; /* 0x1f: local_1f */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned int DAT_0063e6b4; /* 0x63e6b4 */
extern unsigned int DAT_0063e774; /* 0x63e774 */
extern unsigned int DAT_0063e7e4; /* 0x63e7e4 */
extern unsigned int DAT_0063e854; /* 0x63e854 */
extern unsigned int DAT_0063e8c4; /* 0x63e8c4 */
extern unsigned int DAT_0063e900; /* 0x63e900 */
extern unsigned char DAT_0063e904; /* 0x63e904 */
extern unsigned char DAT_0063e905; /* 0x63e905 */
extern unsigned int DAT_0063e93c; /* 0x63e93c */
extern unsigned char DAT_0063e940; /* 0x63e940 */
extern unsigned char DAT_0063e941; /* 0x63e941 */
extern unsigned int DAT_0063e944; /* 0x63e944 */
extern unsigned int DAT_0063e948; /* 0x63e948 */
extern unsigned char DAT_0063e984; /* 0x63e984 */
extern unsigned char DAT_0063e986; /* 0x63e986 */
extern unsigned char DAT_0063e987; /* 0x63e987 */
extern unsigned char DAT_0063e9c0; /* 0x63e9c0 */
extern unsigned char DAT_0063e9c2; /* 0x63e9c2 */
extern unsigned char DAT_0063e9c3; /* 0x63e9c3 */
extern unsigned char DAT_0063e9fc; /* 0x63e9fc */
extern unsigned char DAT_0063e9fe; /* 0x63e9fe */
extern unsigned char DAT_0063e9ff; /* 0x63e9ff */
extern unsigned char DAT_0063ea38; /* 0x63ea38 */
extern unsigned char DAT_0063ea3a; /* 0x63ea3a */
extern unsigned char DAT_0063ea3b; /* 0x63ea3b */
extern unsigned char DAT_0063f4c4; /* 0x63f4c4 */
extern unsigned char DAT_0063f4c5; /* 0x63f4c5 */
extern unsigned int g_asdSoundDuck; /* 0x63f4c8 */
extern unsigned int DAT_0063f4cc; /* 0x63f4cc */
extern unsigned int DAT_0063f4d0; /* 0x63f4d0 */
extern unsigned int DAT_0063f4d4; /* 0x63f4d4 */
extern unsigned int DAT_0063f4d8; /* 0x63f4d8 */
extern unsigned int DAT_0063f4dc; /* 0x63f4dc */
extern unsigned char DAT_0063f4e0; /* 0x63f4e0 */
extern unsigned char DAT_0063f4e1; /* 0x63f4e1 */
extern unsigned char DAT_0063f4e2; /* 0x63f4e2 */
extern unsigned int g_asdSoundStatus; /* 0x63f4e4 */
extern unsigned int DAT_0063f4e8; /* 0x63f4e8 */
extern unsigned char DAT_0063f4fd; /* 0x63f4fd */
extern unsigned char DAT_0063f4ff; /* 0x63f4ff */
extern unsigned char DAT_0063f52c; /* 0x63f52c */

extern int FUN_00158f64(void);
/* Supplied declaration required: FUN_00159030. */
extern int FUN_00159d60(void);
/* Supplied declaration required: FUN_00159e58. */
/* Supplied declaration required: FUN_0015de34. */
extern unsigned int FUN_0015e0c8(unsigned int *);
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_0016f368. */
/* Supplied declaration required: FUN_00171424. */
/* Supplied declaration required: sysFatalBreak. */


void FUN_00142b84(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v6;
  unsigned int uStack_24;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  
  temp_v0 = FUN_00158f64();
  temp_v0 = -(temp_v0 >> 0x1f);
  if (temp_v0 != 0) {
    sysFatalBreak();
  }
  FUN_00159030();
  if (temp_v0 < 0) {
    sysFatalBreak();
  }
  temp_v0 = FUN_00159d60();
  if (temp_v0 < 0) {
    sysFatalBreak();
  }
  FUN_0016f368();
  if (0 < param_1) {
    FUN_00171424(0x1e);
    FUN_00159e58(3);
  }
  temp_v5 = 0x4000;
  uStack_30 = 0x20000;
  uStack_2c = 3;
  temp_v6 = 0x4000;
  uStack_24 = 0x2000;
  temp_v3 = 4;
  temp_v7 = 1;
  temp_v8 = 0;
  temp_v9 = 1;
  temp_v10 = 0xffffffff;
  temp_v4 = (unsigned int)(0 < param_1);
  temp_v1 = FUN_0015e0c8((unsigned int *)&temp_v3);
  temp_v2 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,temp_v1,1);
  DAT_0063e6b4 = temp_v2;
  FUN_0015de34(&temp_v3,temp_v2,temp_v1);
  DAT_0063e774 = 0x40;
  DAT_0063e7e4 = 0x40;
  DAT_0063e854 = 0x40;
  DAT_0063e8c4 = 0x40;
  DAT_0063e900 = 0;
  DAT_0063e904 = 0;
  DAT_0063e905 = 0x40;
  DAT_0063e93c = 0;
  DAT_0063e940 = 0;
  DAT_0063e941 = 0x40;
  DAT_0063e948 = 0;
  DAT_0063e944 = 0;
  DAT_0063e984 = 0x40;
  DAT_0063e986 = 0;
  DAT_0063e987 = 0;
  DAT_0063e9c0 = 0x40;
  DAT_0063e9c2 = 0;
  DAT_0063e9c3 = 0;
  DAT_0063e9fc = 0x40;
  DAT_0063e9fe = 0;
  DAT_0063e9ff = 0;
  DAT_0063ea38 = 0x40;
  DAT_0063ea3a = 0;
  DAT_0063ea3b = 0;
  DAT_0063f4c4 = 0;
  DAT_0063f4c5 = 0x40;
  DAT_0063f4cc = 0;
  g_asdSoundDuck = 0;
  DAT_0063f4d4 = 0;
  DAT_0063f4d8 = 0;
  DAT_0063f4d0 = 0;
  DAT_0063f4dc = 0;
  DAT_0063f4e1 = 0;
  DAT_0063f4e0 = 0;
  DAT_0063f4e2 = 0;
  DAT_0063f4fd = 0;
  DAT_0063f4ff = 0;
  g_asdSoundStatus = 0;
  DAT_0063f4e8 = 0;
  DAT_0063f52c = 0;
  return;
}

} /* extern "C" */
