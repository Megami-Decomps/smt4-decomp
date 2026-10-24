/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d890` (_code @ 0x11d890, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002f7e38(int, unsigned int);
int FUN_00310eb4(unsigned char [12], unsigned int, int, int);
int FUN_00310ec8(int, unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_0011d930; /* 0x11d930 */
extern unsigned char LAB_0011da41; /* 0x11da41 */

extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(int *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
extern int _ZNK18OnlineResultRecord7isValidEv(unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f7e38. */
/* Supplied declaration required: FUN_00310eb4. */
/* Supplied declaration required: FUN_00310ec8. */


void FUN_0011d890(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4 [3];
  unsigned char temp_v5 [12];
  unsigned int temp_v6 [2];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x90;
    FUN_002e9c0c();
    FUN_002f7e38(temp_v0,*(unsigned int *)(param_1 + 0x88));
    temp_v4[0] = param_1 + 0x68;
    temp_v4[1] = 0x4000;
    FUN_00310eb4(temp_v5,*(unsigned int *)(param_1 + 0x74),temp_v0,param_1 + 0x7c);
    temp_v1 = _ZNK18OnlineResultRecord7isValidEv(temp_v5);
    if (temp_v1 != 0) {
      temp_v3 = *(unsigned int *)(param_1 + 0xd4);
      temp_v2 = onlineInstanceTableGetCurrent();
      FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x6c),temp_v3);
      onlineJobSetStateWaiting(param_1);
      temp_v1 = _Znwj(0x10);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_002ea3c0(temp_v1,&LAB_0011da41,0,&LAB_0011d930);
      }
      FUN_002f7cba(param_1,temp_v0,temp_v2);
      return;
    }
    temp_v6[0] = 0x8001000d;
  }
  else {
    temp_v6[0] = 0x80010004;
  }
  temp_v2 = _ZN12OnlineResultC1ERKj(temp_v4,temp_v6);
  FUN_00310ec8(param_1,temp_v2);
  return;
}

} /* extern "C" */
