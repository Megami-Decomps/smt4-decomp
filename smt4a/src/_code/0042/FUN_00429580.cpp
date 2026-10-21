/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429580` (_code @ 0x429580, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int FUN_0019a46c(unsigned int, unsigned int, int);
int FUN_001b57a8(...);
int FUN_00427a10(unsigned int, unsigned char *);
int FUN_00427e68(int, unsigned int);
int rt_memcpy_w(unsigned char *, int, int);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

extern unsigned char DAT_0061b000; /* 0x61b000 */
extern unsigned char DAT_0061b030; /* 0x61b030 */
extern unsigned int DAT_0061b074; /* 0x61b074 */
extern unsigned int DAT_0061b078; /* 0x61b078 */
extern unsigned int DAT_0061b07c; /* 0x61b07c */
extern unsigned char DAT_0061b080; /* 0x61b080 */
extern signed char DAT_0061b2f8; /* 0x61b2f8 */

extern int FUN_0015a410(void);
extern int appletIsExitRequested(void);
extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: FUN_001b57a8. */
/* Supplied declaration required: FUN_00427a10. */
extern int FUN_00427e28(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00427e68. */
extern int tokenResolveAddress(unsigned int, int *, int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00429580(unsigned int param_1,int *param_2,unsigned int *param_3,int param_4,unsigned int param_5,int param_6
                 )

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [8];
  unsigned int temp_v8;
  int *temp_v9;
  unsigned int *puStack_2c;
  int iStack_28;
  
  temp_v8 = param_1;
  temp_v9 = param_2;
  puStack_2c = param_3;
  iStack_28 = param_4;
  if (param_5 >= 0x15) {
    FUN_001b57a8(param_1,0xe061389c);
    return;
  }
  if (param_6 == 0) {
    temp_v2 = 4;
  }
  else {
    temp_v2 = 0xd;
  }
  temp_v1 = *param_2;
  FUN_00427e68(temp_v1,temp_v2);
  if (-1 < temp_v1) {
    temp_v4 = 0;
    if (temp_v4 < param_5) {
      do {
        switch((char)param_3[1]) {
        case 0:
          temp_v3 = 0x8c;
          break;
        case 1:
          temp_v3 = 0xd;
          break;
        default:
          temp_v3 = 0;
          break;
        case 3:
          temp_v3 = 0x10;
          break;
        case 4:
          temp_v3 = 0x30;
        }
        temp_v5 = *param_3;
        temp_v0 = *(unsigned char *)((int)param_3 + 5);
        temp_v1 = 0;
        if (*(char *)((int)param_3 + 6) != '\0') {
          if (*(char *)((int)param_3 + 6) == '\x01') {
            temp_v1 = 2;
          }
          else {
            sysFatalBreak();
            temp_v1 = 0;
          }
        }
        (&DAT_0061b078)[temp_v4 * 8] = (temp_v1 << 0x1c) | (unsigned int)temp_v0 | ((temp_v5 & 0xfffff) << 8);
        (&DAT_0061b07c)[temp_v4 * 8] = temp_v3 | 0x40000;
        *(unsigned int *)(&DAT_0061b080 + temp_v4 * 0x20) = *(unsigned int *)(param_4 + temp_v4 * 0x24);
        FUN_0019a46c(temp_v4 * 0x20 + 0x61b084,param_4 + temp_v4 * 0x24 + 4,0x14);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < param_5);
    }
    DAT_0061b074 = param_5;
    temp_v2 = FUN_0016ccfc();
    temp_v1 = tokenResolveAddress(temp_v2,&temp_v6,*temp_v9);
    if (-1 < temp_v1) {
      rt_memcpy_w(&DAT_0061b030,temp_v6 + 0x54,0x44);
      DAT_0061b2f8 = *(char *)(temp_v6 + 0x98);
      temp_v1 = FUN_00427e28(temp_v7,&DAT_0061b000,0);
      if (-1 < temp_v1) {
        temp_v1 = appletIsExitRequested();
        if ((temp_v1 == 0) && (temp_v1 = FUN_0015a410(), temp_v1 == 0)) {
          if ((*(char *)(temp_v6 + 0x98) == '\0') && (DAT_0061b2f8 != '\0')) {
            *(unsigned char *)(temp_v6 + 0x98) = 1;
          }
          FUN_00427a10(temp_v8,&DAT_0061b000);
          return;
        }
        FUN_001b57a8(temp_v8,0xc9413891);
        return;
      }
    }
  }
  FUN_001b57a8(temp_v8,temp_v1);
  return;
}

} /* extern "C" */
