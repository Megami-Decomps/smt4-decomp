/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113348` (_code @ 0x113348, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a0cc(unsigned int, int);
int FUN_002e78d0(unsigned int, int, int);
int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea704(void);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(...);
int FUN_002f8174(int, unsigned int, unsigned int, int);
int FUN_002f81c8(void);
int FUN_002fdce8(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0011348c; /* 0x11348c */
extern unsigned int DAT_00594a60; /* 0x594a60 */
extern unsigned int DAT_00594a64; /* 0x594a64 */

/* Supplied declaration required: FUN_0010a0cc. */
extern unsigned int onlineContextGetInstance(void);
extern int _Znwj(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea704. */
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f8174. */
/* Supplied declaration required: FUN_002f81c8. */
/* Supplied declaration required: FUN_002fdce8. */


void FUN_00113348(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6 [2];
  
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002ea704(), temp_v0 != 0)) {
    if (*(char *)(param_1 + 0xe8) == '\x01') {
      onlineJobSetStateWaiting(param_1);
      temp_v0 = _Znwj(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,0x113349,0,&LAB_0011348c);
      }
      temp_v0 = param_1 + 0xd8;
      FUN_002f7cba(param_1,temp_v0,temp_v1);
      return;
    }
    temp_v0 = onlineInstanceTableGetCurrent();
    temp_v5 = param_1 + 0xc0;
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0xd0));
    if (temp_v0 != 0) {
      if (((*(int *)(param_1 + 0x138) == 0) ||
          ((*(unsigned int *)(*(int *)(param_1 + 0x138) + 0x94) & 0xff) != 1)) ||
         (temp_v0 = FUN_002ea704(), *(char *)(temp_v0 + 0x10d) != '\0')) {
        temp_v1 = FUN_002ea3c0(&temp_v4,0x11330d,0,&LAB_0011348c);
        FUN_002ea3d0(param_1,temp_v1);
        return;
      }
      temp_v0 = *(int *)(param_1 + 0x138);
      temp_v1 = FUN_002ea704();
      FUN_0010a0cc(temp_v1,temp_v0 + 0x88);
      temp_v0 = param_1 + 0x140;
      FUN_002e9c0c();
      temp_v2 = FUN_002e789a(temp_v0);
      if (temp_v2 != 0) {
        temp_v2 = _Znwj(0xc0);
        if (temp_v2 != 0) {
          temp_v4 = 0;
          FUN_002f8174(temp_v2,DAT_00594a60,DAT_00594a64,0x10a077);
        }
        FUN_002f81c8();
        temp_v1 = onlineContextGetInstance();
        FUN_002e78d0(temp_v1,temp_v2,1);
        temp_v3 = *(unsigned int *)(param_1 + 0x184);
        temp_v1 = onlineInstanceTableGetCurrent();
        FUN_002f7c94(temp_v1,*(unsigned int *)(temp_v5 + 0x10),temp_v3);
        onlineJobSetStateWaiting(param_1);
        temp_v2 = _Znwj(0x10);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = FUN_002ea3c0(temp_v2,0x113495,0,&LAB_0011348c);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v1);
        return;
      }
    }
  }
  temp_v6[0] = 0x80010004;
  temp_v1 = _ZN12OnlineResultC1ERKj((unsigned int *)&temp_v4,temp_v6);
  FUN_002fdce8(param_1,temp_v1);
  return;
}

} /* extern "C" */
