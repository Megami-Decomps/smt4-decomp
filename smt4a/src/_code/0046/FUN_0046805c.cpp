/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046805c` (_code @ 0x46805c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageSetMode(int);
int FUN_0020401c(void);
int FUN_0034913c(void);
int FUN_0037d6e4(int);
int FUN_003a7630(int);
int FUN_003c1060(void);
int FUN_003c3e14(void);
int gameFlagSetValue(int, int);
int pickObjStart(unsigned int *, unsigned char *);
int dataTable28Type0GetEntry(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_004681f4; /* 0x4681f4 */
extern unsigned char LAB_00468208; /* 0x468208 */
extern unsigned char LAB_00468218; /* 0x468218 */

extern unsigned char gameFlagIsSet(unsigned int);
/* Supplied declaration required: messageSetMode. */
/* Supplied declaration required: FUN_0020401c. */
extern int FUN_002c2758(unsigned short);
extern int messageWindowIsState1(void);
/* Supplied declaration required: FUN_0034913c. */
/* Supplied declaration required: FUN_0037d6e4. */
/* Supplied declaration required: FUN_003a7630. */
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: pickObjStart. */
/* Supplied declaration required: dataTable28Type0GetEntry. */


void FUN_0046805c(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  FUN_003a7630(1);
  temp_v2 = 0;
  do {
    temp_v3 = FUN_002c2758(temp_v2);
    temp_v4 = temp_v2;
    if (temp_v3 == 1) break;
    temp_v2 = temp_v2 + 1;
    temp_v4 = 0;
  } while (temp_v2 < 0x20);
  temp_v5 = 0;
  temp_v1 = gameFlagIsSet(0x586);
  if ((temp_v4 == 6) && ((char)param_1[6] != '\0')) {
    temp_v5 = (char)param_1[4] != '\x0e';
    gameFlagSetValue(0x586,1);
  }
  temp_v6 = (temp_v5 & ~temp_v1) == 0;
  temp_v0 = '\0';
  if (!temp_v6) {
    temp_v0 = (char)param_1[6];
  }
  if (!(temp_v6 || temp_v0 == '\0')) {
    FUN_003c3e14();
    messageSetMode(1);
    pickObjStart(param_1,&LAB_004681f4);
    *(unsigned char *)((int)param_1 + 0x1b) = 1;
    param_1[1] = 0xe;
    param_1[2] = 0;
  }
  else {
    if (((temp_v4 != 0) && (temp_v5 == 0)) && ((char)param_1[6] != '\0')) {
      FUN_003c3e14();
      messageSetMode(1);
      pickObjStart(param_1,&LAB_00468208);
      *(unsigned char *)((int)param_1 + 0x1b) = 1;
      param_1[1] = 0xe;
      param_1[2] = 0;
      return;
    }
    dataTable28Type0GetEntry((int)param_1 + 0x19,(int)(char)param_1[4]);
    FUN_0020401c();
    if ((char)param_1[6] != '\0') {
      FUN_003c1060();
      pickObjStart(param_1,&LAB_00468218);
      param_1[1] = 6;
      param_1[2] = 0;
      return;
    }
    FUN_0037d6e4(0);
    *param_1 = *param_1 & 0xfffffdff;
    param_1[1] = 0x11;
    param_1[2] = 0;
    temp_v3 = messageWindowIsState1();
    if (temp_v3 != 0) {
      FUN_0034913c();
      return;
    }
  }
  return;
}

} /* extern "C" */
