/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354168` (_code @ 0x354168, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_004c7000; /* 0x4c7000 */
extern unsigned char DAT_004c7030; /* 0x4c7030 */
extern unsigned int DAT_004c7078; /* 0x4c7078 */
extern unsigned int DAT_004c707c; /* 0x4c707c */
extern unsigned char DAT_004c7080; /* 0x4c7080 */
extern unsigned int DAT_004c7100; /* 0x4c7100 */

/* Supplied declaration required: FUN_00239e14. */
/* Supplied declaration required: FUN_00239ed0. */
extern int FUN_00239f84(unsigned char *, unsigned char *, unsigned int);
extern int FUN_0023a0d8(unsigned int, int *, int);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_002baa40. */
/* Supplied declaration required: FUN_002bcd68. */
extern int FUN_002c55b4(void);
extern int FUN_002c55c4(void);
/* Supplied declaration required: FUN_002c5df8. */


void FUN_00354168(unsigned int param_1,int *param_2,unsigned int *param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  if (param_5 >= 0x41) {
    temp_v2 = 0xe0613880;
    FUN_002baa40(param_1,temp_v2);
    return;
  }
  temp_v1 = *param_2;
  FUN_00239e14(temp_v1,8);
  if (-1 < temp_v1) {
    temp_v2 = FUN_002b5c44();
    temp_v1 = FUN_0023a0d8(temp_v2,&temp_v3,*param_2);
    if (-1 < temp_v1) {
      FUN_002bcd68(&DAT_004c7030,temp_v3 + 0x54,0x44);
      temp_v0 = (char)param_3[1];
      if (temp_v0 == '\0') {
        DAT_004c707c = 0x8c;
      }
      else if (temp_v0 == '\x01') {
        DAT_004c707c = 0xd;
      }
      else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
        DAT_004c707c = 0;
      }
      else {
        DAT_004c707c = 0x10;
      }
      DAT_004c707c = DAT_004c707c | 0x40000;
      DAT_004c7078 = (unsigned int)*(unsigned char *)((int)param_3 + 5) | ((*param_3 & 0xff0fffff) << 8);
      FUN_002c5df8(&DAT_004c7080,param_4,param_5 << 1);
      DAT_004c7100 = param_5;
      temp_v1 = FUN_00239f84(temp_v4,&DAT_004c7000,0);
      if (-1 < temp_v1) {
        temp_v1 = FUN_002c55c4();
        if ((temp_v1 == 0) && (temp_v1 = FUN_002c55b4(), temp_v1 == 0)) {
          FUN_00239ed0(param_1,&DAT_004c7000);
          return;
        }
        temp_v2 = 0xc9413891;
        FUN_002baa40(param_1,temp_v2);
        return;
      }
    }
  }
  FUN_002baa40(param_1,temp_v1);
  return;
}
