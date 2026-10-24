/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011dbcc` (_code @ 0x11dbcc, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b1d8(int, unsigned int);
int FUN_0011d3d0(int, unsigned char [64], int, int, int, int);
int sharedRefAddRef(void);
int FUN_002e9c64(int, unsigned char *, int *, int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002f451c(int *, unsigned int);
int FUN_002f4db0(unsigned char [12], int, unsigned int, int, int, int, int);
int _ZNK18OnlineResultRecord7isValidEv(unsigned char [12]);
int FUN_002f4f00(unsigned char [64]);
int onlineJobSetStateWaiting(int);
int FUN_00303cd8(unsigned char [64]);
int FUN_00303d10(unsigned char [64], int, int);
int FUN_00310e5e(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char LAB_0011dcb0; /* 0x11dcb0 */
extern unsigned char LAB_0011dd97; /* 0x11dd97 */

/* Supplied declaration required: FUN_0010b1d8. */
/* Supplied declaration required: FUN_0011d3d0. */
/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: FUN_002e9c64. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int streamWriterFinish(unsigned char *);
/* Supplied declaration required: FUN_002f451c. */
extern int FUN_002f4d9c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002f4db0. */
/* Supplied declaration required: _ZNK18OnlineResultRecord7isValidEv. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: FUN_00303d10. */
/* Supplied declaration required: FUN_00310e5e. */


void FUN_0011dbcc(int param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [64];
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [12];
  unsigned char temp_v7 [16];
  
  temp_v0 = *(int *)(param_1 + 0x6c);
  FUN_0010b1d8(temp_v0,*(unsigned int *)(param_1 + 0x74));
  if (temp_v0 != 0) {
    **(int **)(param_1 + 0x78) = temp_v0;
    sharedRefAddRef();
    temp_v1 = 2;
  }
  else {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 8) != 0) {
      FUN_00303cd8(temp_v2);
      FUN_00303d10(temp_v2,10,1);
      FUN_002f451c(&temp_v3,*(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x20));
      *(unsigned int *)(param_1 + 0xd8) = temp_v3;
      *(unsigned int *)(param_1 + 0xdc) = temp_v4;
      FUN_0011d3d0(param_1 + 0x80,temp_v2,param_1 + 0x118,param_1 + 0x70,param_1 + 0x74,
                   param_1 + 0xf8);
      temp_v5 = param_1;
      FUN_002e9c64(param_1 + 0x80,&LAB_0011dd97,&temp_v5,0);
      temp_v0 = FUN_002f4d9c(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 8),10);
      *(unsigned int *)(param_1 + 0xcc) = *(unsigned int *)(temp_v0 + 0x78);
      *(int *)(param_1 + 200) = temp_v0;
      temp_v1 = streamWriterFinish(temp_v2);
      FUN_002f4db0(temp_v6,temp_v0,temp_v1,1,0,0,0);
      _ZNK18OnlineResultRecord7isValidEv(temp_v6);
      temp_v1 = FUN_002ea3c0(temp_v7,0x11dcb9,0,&LAB_0011dcb0);
      FUN_002ea3d0(param_1,temp_v1);
      onlineJobSetStateWaiting(param_1);
      FUN_002f4f00(temp_v2);
      return;
    }
    temp_v1 = 3;
  }
  FUN_00310e5e(param_1,temp_v1);
  return;
}

} /* extern "C" */
