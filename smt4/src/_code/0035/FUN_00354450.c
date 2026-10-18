/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354450` (_code @ 0x354450, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_004c7000; /* 0x4c7000 */
extern unsigned char DAT_004c7030; /* 0x4c7030 */
extern unsigned int DAT_004c7074; /* 0x4c7074 */
extern unsigned int DAT_004c7078; /* 0x4c7078 */
extern unsigned int DAT_004c707c; /* 0x4c707c */
extern unsigned char DAT_004c7080; /* 0x4c7080 */
extern signed char DAT_004c72f8; /* 0x4c72f8 */

/* Supplied declaration required: FUN_00239e14. */
/* Supplied declaration required: FUN_00239ed0. */
extern int FUN_00239f84(unsigned char *, unsigned char *, unsigned int);
extern int FUN_0023a0d8(unsigned int, int *, int);
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: FUN_002baa40. */
extern int FUN_002c55b4(void);
extern int FUN_002c55c4(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00354450(unsigned int param_1,int *param_2,unsigned int *param_3,int param_4,unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  
  if (param_5 >= 0x15) {
    temp_v3 = 0xe061389c;
    FUN_002baa40(param_1,temp_v3);
    return;
  }
  temp_v1 = *param_2;
  FUN_00239e14(temp_v1,4);
  if (-1 < temp_v1) {
    temp_v4 = 0;
    if (temp_v4 < param_5) {
      do {
        temp_v0 = (char)param_3[1];
        if (temp_v0 == '\0') {
          temp_v2 = 0x8c;
        }
        else if (temp_v0 == '\x01') {
          temp_v2 = 0xd;
        }
        else if ((temp_v0 == '\x02') || (temp_v0 != '\x03')) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = 0x10;
        }
        (&DAT_004c7078)[temp_v4 * 8] =
             (unsigned int)*(unsigned char *)((int)param_3 + 5) | ((*param_3 & 0xff0fffff) << 8);
        (&DAT_004c707c)[temp_v4 * 8] = temp_v2 | 0x40000;
        *(unsigned int *)(&DAT_004c7080 + temp_v4 * 0x20) = *(unsigned int *)(param_4 + temp_v4 * 0x24);
        FUN_002ba81c(temp_v4 * 0x20 + 0x4c7084,param_4 + temp_v4 * 0x24 + 4,0x14);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < param_5);
    }
    DAT_004c7074 = param_5;
    temp_v3 = FUN_002b5c44();
    temp_v1 = FUN_0023a0d8(temp_v3,&temp_v5,*param_2);
    if (-1 < temp_v1) {
      rt_memcpy_w(&DAT_004c7030,temp_v5 + 0x54,0x44);
      DAT_004c72f8 = *(char *)(temp_v5 + 0x98);
      temp_v1 = FUN_00239f84(temp_v6,&DAT_004c7000,0);
      if (-1 < temp_v1) {
        temp_v1 = FUN_002c55c4();
        if ((temp_v1 == 0) && (temp_v1 = FUN_002c55b4(), temp_v1 == 0)) {
          if ((*(char *)(temp_v5 + 0x98) == '\0') && (DAT_004c72f8 != '\0')) {
            *(unsigned char *)(temp_v5 + 0x98) = 1;
          }
          FUN_00239ed0(param_1,&DAT_004c7000);
          return;
        }
        temp_v3 = 0xc9413891;
        FUN_002baa40(param_1,temp_v3);
        return;
      }
    }
  }
  FUN_002baa40(param_1,temp_v1);
  return;
}
