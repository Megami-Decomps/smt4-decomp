/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ae58` (_code @ 0x13ae58, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(unsigned char *, unsigned int [2], int);
int asdSoundSetHasStream(int);
int FUN_00143800(void);
int asdSoundDuckSetup(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_0013aefc; /* 0x13aefc */
extern unsigned char *DAT_0061996c; /* 0x61996c */
extern unsigned char DAT_00619970; /* 0x619970 */
extern unsigned char DAT_00619971; /* 0x619971 */
extern unsigned char DAT_00619972; /* 0x619972 */
extern unsigned int DAT_00619974; /* 0x619974 */
extern unsigned int DAT_00619978; /* 0x619978 */
extern unsigned int DAT_0061997c; /* 0x61997c */
extern unsigned int DAT_00619980; /* 0x619980 */
extern unsigned int DAT_00619984; /* 0x619984 */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: asdSoundSetHasStream. */
/* Supplied declaration required: FUN_00143800. */
/* Supplied declaration required: asdSoundDuckSetup. */
extern int jyoucyuGetTableEntry(unsigned int);


void FUN_0013ae58(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1 [2];
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    FUN_00143800();
    DAT_00619971 = 0x60;
    DAT_00619970 = DAT_00619970 | 3;
    DAT_00619972 = 0;
    asdSoundSetHasStream(1);
    DAT_00619974 = 0x3f19999a;
    DAT_00619978 = 5;
    DAT_0061997c = 0x1e;
    DAT_00619980 = 1;
    DAT_00619984 = 0x14;
    asdSoundDuckSetup(1);
    temp_v1[0] = 0;
    if (DAT_0061996c == (unsigned char *)0x0) {
      puVar2 = &LAB_0013aefc;
      FUN_0013c174(&LAB_0013aefc,temp_v1,0);
      DAT_0061996c = puVar2;
    }
  }
  return;
}

} /* extern "C" */
