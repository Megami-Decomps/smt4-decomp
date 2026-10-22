/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004293b0` (_code @ 0x4293b0, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int FUN_0019a46c(unsigned char *, unsigned int *, int);
int _ZN18WindowStatusResultC1Ej(...);
int FUN_00427a10(unsigned int, unsigned char *);
int FUN_00427e68(int, int);
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
extern unsigned int DAT_0061b0a0; /* 0x61b0a0 */
extern unsigned char DAT_0061b0a4; /* 0x61b0a4 */

extern unsigned char libc_toupper(void);
extern int FUN_0015a410(void);
extern int appletIsExitRequested(void);
extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
/* Supplied declaration required: FUN_00427a10. */
extern int FUN_00427e28(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00427e68. */
extern int tokenResolveAddress(unsigned int, int *, int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004293b0(unsigned int param_1,int *param_2,unsigned int *param_3,unsigned int *param_4,int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [4];
  
  temp_v2 = *param_2;
  FUN_00427e68(temp_v2,6);
  if (-1 < temp_v2) {
    temp_v3 = FUN_0016ccfc();
    temp_v2 = tokenResolveAddress(temp_v3,&temp_v6,*param_2);
    if (-1 < temp_v2) {
      rt_memcpy_w(&DAT_0061b030,temp_v6 + 0x54,0x44);
      switch((char)param_3[1]) {
      case 0:
        temp_v4 = 0x8c;
        break;
      case 1:
        temp_v4 = 0xd;
        break;
      default:
        temp_v4 = 0;
        break;
      case 3:
        temp_v4 = 0x10;
        break;
      case 4:
        temp_v4 = 0x30;
      }
      temp_v5 = *param_3;
      temp_v0 = *(unsigned char *)((int)param_3 + 5);
      temp_v2 = 0;
      if (*(char *)((int)param_3 + 6) != '\0') {
        if (*(char *)((int)param_3 + 6) == '\x01') {
          temp_v2 = 2;
        }
        else {
          sysFatalBreak();
          temp_v2 = 0;
        }
      }
      DAT_0061b078 = (temp_v2 << 0x1c) | (unsigned int)temp_v0 | ((temp_v5 & 0xfffff) << 8);
      DAT_0061b07c = temp_v4 | 0x40000;
      for (temp_v5 = 0; (temp_v5 < 0x1f && (*(char *)(param_5 + temp_v5) != '\0')); temp_v5 = temp_v5 + 1) {
        temp_v1 = libc_toupper();
        (&DAT_0061b080)[temp_v5] = temp_v1;
      }
      (&DAT_0061b080)[temp_v5] = 0;
      DAT_0061b0a0 = *param_4;
      FUN_0019a46c(&DAT_0061b0a4,param_4 + 1,0x14);
      temp_v2 = FUN_00427e28(temp_v7,&DAT_0061b000,0);
      if (-1 < temp_v2) {
        temp_v2 = appletIsExitRequested();
        if ((temp_v2 == 0) && (temp_v2 = FUN_0015a410(), temp_v2 == 0)) {
          FUN_00427a10(param_1,&DAT_0061b000);
          return;
        }
        _ZN18WindowStatusResultC1Ej(param_1,0xc9413891);
        return;
      }
    }
  }
  _ZN18WindowStatusResultC1Ej(param_1,temp_v2);
  return;
}

} /* extern "C" */
