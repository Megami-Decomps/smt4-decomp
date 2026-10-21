/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429210` (_code @ 0x429210, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int FUN_001b57a8(...);
int FUN_00427a10(unsigned int, unsigned char *);
int FUN_00427e68(int, int);
int rt_memcpy(unsigned char *, unsigned int, unsigned int);
int rt_memcpy_w(unsigned char *, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_0061b000; /* 0x61b000 */
extern unsigned char DAT_0061b030; /* 0x61b030 */
extern unsigned int DAT_0061b078; /* 0x61b078 */
extern unsigned int DAT_0061b07c; /* 0x61b07c */
extern unsigned char DAT_0061b080; /* 0x61b080 */
extern unsigned int DAT_0061b100; /* 0x61b100 */

extern int FUN_0015a410(void);
extern int appletIsExitRequested(void);
extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_001b57a8. */
/* Supplied declaration required: FUN_00427a10. */
extern int FUN_00427e28(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00427e68. */
extern int tokenResolveAddress(unsigned int, int *, int);
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00429210(unsigned int param_1,int *param_2,unsigned int *param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  
  if (param_5 >= 0x41) {
    temp_v4 = 0xe0613880;
    FUN_001b57a8(param_1,temp_v4);
    return;
  }
  temp_v1 = *param_2;
  FUN_00427e68(temp_v1,8);
  if (-1 < temp_v1) {
    temp_v4 = FUN_0016ccfc();
    temp_v1 = tokenResolveAddress(temp_v4,&temp_v5,*param_2);
    if (-1 < temp_v1) {
      rt_memcpy_w(&DAT_0061b030,temp_v5 + 0x54,0x44);
      switch((char)param_3[1]) {
      case 0:
        temp_v2 = 0x8c;
        break;
      case 1:
        temp_v2 = 0xd;
        break;
      default:
        temp_v2 = 0;
        break;
      case 3:
        temp_v2 = 0x10;
        break;
      case 4:
        temp_v2 = 0x30;
      }
      temp_v3 = *param_3;
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
      DAT_0061b078 = (temp_v1 << 0x1c) | (unsigned int)temp_v0 | ((temp_v3 & 0xfffff) << 8);
      DAT_0061b07c = temp_v2 | 0x40000;
      rt_memcpy(&DAT_0061b080,param_4,param_5 << 1);
      DAT_0061b100 = param_5;
      temp_v1 = FUN_00427e28(temp_v6,&DAT_0061b000,0);
      if (-1 < temp_v1) {
        temp_v1 = appletIsExitRequested();
        if ((temp_v1 == 0) && (temp_v1 = FUN_0015a410(), temp_v1 == 0)) {
          FUN_00427a10(param_1,&DAT_0061b000);
          return;
        }
        temp_v4 = 0xc9413891;
        FUN_001b57a8(param_1,temp_v4);
        return;
      }
    }
  }
  FUN_001b57a8(param_1,temp_v1);
  return;
}

} /* extern "C" */
