/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001227a8` (_code @ 0x1227a8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010d29c(int);
int FUN_002e6e26(void);
int FUN_002e6e5c(unsigned char **);
int sharedRefRelease(void);
int FUN_002e78d0(unsigned int, unsigned int, int);
int FUN_002f4f20(int, int);

/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0055b294; /* 0x55b294 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int FUN_00105c54(int, unsigned int, int);
/* Supplied declaration required: FUN_0010d29c. */
/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: sharedRefRelease. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(unsigned char *);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002f4f20. */
extern int onlineMutexNeedsLock(void);
extern int onlineOwnerHasPendingJob2(int);


void FUN_001227a8(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v3 = param_2;
  temp_v4 = param_3;
  temp_v5 = param_4;
  temp_v0 = FUN_002e6e26();
  temp_v3 = &DAT_0055b294;
  temp_v4 = romwright_piece_3_1((((unsigned int)(temp_v4) >> 8) & 0xffffffU),1);
  temp_v5 = temp_v0 + 0x58;
  temp_v1 = onlineMutexNeedsLock();
  if (temp_v1 != 0) {
    FUN_0010d29c(temp_v0 + 0x58);
  }
  temp_v0 = FUN_002e789a(param_2);
  if ((temp_v0 != 0) && (temp_v0 = onlineOwnerHasPendingJob2(param_1), temp_v0 == 0)) {
    if (*(int *)(param_1 + 0x120) != 0) {
      sharedRefRelease();
      *(unsigned int *)(param_1 + 0x120) = 0;
    }
    temp_v1 = operatorNew(0xd0);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00105c54(temp_v1,*(unsigned int *)(param_2 + 0x44),param_1);
    }
    *(int *)(param_1 + 0x120) = temp_v0;
    FUN_002f4f20(temp_v0 + 4,1);
    temp_v2 = FUN_002e6e26();
    FUN_002e78d0(temp_v2,*(unsigned int *)(param_1 + 0x120),0);
  }
  FUN_002e6e5c(&temp_v3);
  return;
}

} /* extern "C" */
