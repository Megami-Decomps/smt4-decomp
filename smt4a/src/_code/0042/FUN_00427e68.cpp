/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427e68` (_code @ 0x427e68, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);
int initBlockE30(unsigned char *);
int clearBlock10808(unsigned char *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0061b000; /* 0x61b000 */
extern unsigned int DAT_0061b008; /* 0x61b008 */
extern unsigned int DAT_0061b00c; /* 0x61b00c */
extern unsigned int DAT_0061b010; /* 0x61b010 */
extern unsigned int DAT_0061b014; /* 0x61b014 */
extern unsigned int DAT_0061b018; /* 0x61b018 */
extern unsigned char DAT_0061c000; /* 0x61c000 */

extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: sysFatalBreak. */
extern unsigned long long FUN_00302420(int, unsigned int, unsigned int);
extern int FUN_004287ac(unsigned int, int *, unsigned int);
/* Supplied declaration required: initBlockE30. */
/* Supplied declaration required: clearBlock10808. */


int FUN_00427e68(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  int temp_v8;
  
  temp_v8 = param_4;
  temp_v1 = FUN_0016ccfc();
  temp_v2 = FUN_004287ac(temp_v1,&temp_v8,param_1);
  if (-1 < temp_v2) {
    temp_v2 = temp_v8 + 0x14;
    temp_v5 = *(unsigned int *)(temp_v8 + 0xc);
    temp_v6 = *(unsigned int *)(temp_v8 + 0x10);
    initBlockE30(&DAT_0061b000);
    switch(temp_v6 & 0xff) {
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
    temp_v0 = (temp_v6 & 0xffffff) >> 0x10;
    temp_v4 = 0;
    if (temp_v0 != 0) {
      if (temp_v0 == 1) {
        temp_v4 = 2;
      }
      else {
        sysFatalBreak();
        temp_v4 = 0;
      }
    }
    DAT_0061b008 = (temp_v4 << 0x1c) | ((temp_v6 & 0xffff) >> 8) | ((temp_v5 & 0xfffff) << 8);
    DAT_0061b00c = temp_v3 | 0x40000;
    temp_v7 = FUN_00302420(temp_v2,0,10);
    DAT_0061b014 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
    DAT_0061b010 = (unsigned int)temp_v7;
    DAT_0061b018 = param_2;
    clearBlock10808(&DAT_0061c000);
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */
