/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112910` (_code @ 0x112910, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107284(int, unsigned int *);
int FUN_0010728e(int, unsigned int *);
int onlineStringDestroy(unsigned int *);
int FUN_002ea704(void);
int onlineSockAddrToString(...);
int FUN_002fd784(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00107284. */
/* Supplied declaration required: FUN_0010728e. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: onlineSockAddrToString. */
/* Supplied declaration required: FUN_002fd784. */


long long FUN_00112910(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  int temp_v6;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v6 = param_4;
  temp_v0 = FUN_002ea704();
  if (((temp_v0 != 0) && (*(int *)(param_1 + 0x374) != 0)) && (*(int *)(param_1 + 0x39c) != 0)) {
    temp_v6 = param_1 + 0x138;
    onlineSockAddrToString(&uStack_20);
    temp_v0 = param_1 + 0x34c;
    FUN_0010728e(temp_v0,&uStack_20);
    onlineStringDestroy(&uStack_20);
    *(unsigned short *)(param_1 + 0x358) =
         (*(unsigned short *)(temp_v6 + 6) << 8) | (*(unsigned short *)(temp_v6 + 6) >> 8);
    temp_v3 = *(unsigned int *)(param_1 + 0x3a0);
    *(unsigned int *)(param_1 + 0x160) =
         (temp_v3 << 0x18) | (((temp_v3 >> 8) & 0xff) << 0x10) | (((temp_v3 >> 0x10) & 0xff) << 8) |
         (temp_v3 >> 0x18);
    *(unsigned short *)(param_1 + 0x15e) =
         (unsigned short)((*(unsigned int *)(param_1 + 0x39c) & 0xff) << 8) |
         ((unsigned short)(*(unsigned int *)(param_1 + 0x39c) >> 8) & 0xff);
    onlineSockAddrToString(&uStack_20,param_1 + 0x158);
    FUN_00107284(temp_v0,&uStack_20);
    onlineStringDestroy(&uStack_20);
    *(unsigned short *)(param_1 + 0x364) =
         (*(unsigned short *)(param_1 + 0x15e) << 8) | (*(unsigned short *)(param_1 + 0x15e) >> 8);
    if (*(int *)(param_1 + 0x388) == 0) {
      temp_v2 = 2;
    }
    else {
      temp_v2 = 1;
    }
    *(unsigned char *)(param_1 + 0x367) = temp_v2;
    if (*(int *)(param_1 + 0x374) == *(int *)(param_1 + 0x39c)) {
      *(unsigned char *)(param_1 + 0x366) = 1;
    }
    else {
      *(unsigned char *)(param_1 + 0x366) = 2;
      temp_v3 = *(unsigned int *)(param_1 + 0x39c);
      temp_v4 = *(unsigned int *)(param_1 + 0x374);
      if (temp_v3 >= temp_v4) {
        temp_v5 = temp_v3 - temp_v4;
      }
      else {
        temp_v5 = temp_v4 - temp_v3;
      }
      *(int *)(param_1 + 0x368) = temp_v5;
      if ((((*(unsigned short *)(temp_v6 + 6) & 0xff) << 8) | (unsigned int)(*(unsigned short *)(temp_v6 + 6) >> 8)) ==
          *(unsigned int *)(param_1 + 0x39c)) {
        *(unsigned char *)(param_1 + 0x36c) = 1;
        *(unsigned int *)(param_1 + 0x368) = 1;
      }
    }
    temp_v1 = FUN_002ea704();
    FUN_002fd784(temp_v1,temp_v0);
    return romwright_piece_4_4(uStack_20,1);
  }
  return (unsigned long long)uStack_20 << 0x20;
}

} /* extern "C" */
