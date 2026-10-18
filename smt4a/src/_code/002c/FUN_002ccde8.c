/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ccde8` (_code @ 0x2ccde8, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_3_stack;

extern unsigned int DAT_00573ba8; /* 0x573ba8 */
extern unsigned int DAT_00573bac; /* 0x573bac */
extern unsigned int DAT_00573bd0; /* 0x573bd0 */
extern unsigned int DAT_00573bd4; /* 0x573bd4 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_002a4860. */
/* Supplied declaration required: FUN_002a4894. */
extern unsigned int FUN_002cc9e0(int, unsigned int);
extern int FUN_003e46f4(unsigned int);


void FUN_002ccde8(int param_1,unsigned short *param_2,short *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10 [8];
  
  temp_v8 = 0;
  temp_v3 = FUN_0014aa78();
  if ((*(unsigned int *)(temp_v3 + 0x45a4) & DAT_00573bac) != 0 ||
      (*(unsigned int *)(temp_v3 + 0x45a0) & DAT_00573ba8) != 0) {
    *param_2 = 7;
    *param_3 = 4;
    return;
  }
  temp_v4 = FUN_002cc9e0(param_1,1);
  switch(temp_v4) {
  case 0:
  case 6:
    temp_v2 = 0;
    *param_2 = 1;
    break;
  case 1:
    temp_v3 = FUN_002a4860();
    temp_v8 = FUN_002a4894(param_1 + 0x3a4c);
    temp_v8 = temp_v8 + temp_v3;
    if (*(short *)(param_1 + *(int *)(param_1 + 0x3890) * 2 + 0x4210) != -1) {
      if (temp_v8 != 0) {
        temp_v0 = 2;
        *param_2 = temp_v0;
        temp_v2 = (short)*(unsigned int *)(param_1 + 0x389c);
        break;
      }
      temp_v0 = 1;
    }
    else {
      if (temp_v8 == 0) {
        temp_v0 = 1;
        *param_2 = temp_v0;
        temp_v2 = (short)*(unsigned int *)(param_1 + 0x389c);
        break;
      }
      if ((temp_v8 == 1) && (temp_v3 = FUN_0018719c(0x410), temp_v3 != 0)) {
        temp_v5 = FUN_001801a4();
        temp_v9 = *(short *)(temp_v5 + 2) != 0;
        if (temp_v9) {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
        }
        if (temp_v9 && temp_v5 != 0) {
          temp_v0 = 1;
          *param_2 = temp_v0;
          temp_v2 = (short)*(unsigned int *)(param_1 + 0x389c);
          break;
        }
      }
      temp_v0 = 2;
    }
    *param_2 = temp_v0;
    temp_v2 = (short)*(unsigned int *)(param_1 + 0x389c);
    break;
  case 2:
    *param_2 = 3;
    temp_v2 = (short)*(unsigned int *)(param_1 + 0x389c);
    break;
  case 3:
    *param_2 = 7;
    temp_v3 = FUN_0014aa78();
    if ((DAT_00573bd0 & *(unsigned int *)(temp_v3 + 0x45a8)) == 0 &&
        (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_00573bd4) == 0) {
      temp_v10[3] = 0;
      temp_v10[4] = 1;
      temp_v10[5] = 2;
      temp_v3 = 0;
      temp_v10[2] = 0x33;
      temp_v10[0] = 0x2e;
      temp_v10[1] = 0x32;
      do {
        temp_v6 = FUN_003e46f4(temp_v10[temp_v3]);
        if (temp_v6 != 0) {
          temp_v6 = FUN_002a4860(param_1 + 0x3b78);
          temp_v7 = FUN_002a4894(param_1 + 0x3b78);
          if (temp_v7 + temp_v6 == temp_v8) {
            temp_v2 = (short)temp_v10[temp_v3 + 3];
            *param_3 = temp_v2;
            return;
          }
          temp_v8 = temp_v8 + 1;
        }
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 3) {
          return;
        }
      } while( 1 );
    }
    temp_v1 = FUN_002a4860();
    temp_v2 = FUN_002a4894(param_1 + 0x3b78);
    temp_v2 = temp_v2 + temp_v1;
    break;
  case 4:
    temp_v2 = 0;
    *param_2 = 0xd;
    break;
  case 5:
    temp_v2 = 0;
    *param_2 = 6;
    break;
  case 7:
    *param_2 = 8;
    temp_v3 = FUN_002a4860();
    temp_v8 = FUN_002a4894(param_1 + 0x3b14);
    temp_v2 = *(short *)(param_1 + (temp_v8 + temp_v3) * 2 + 0x3ca8);
    break;
  case 9:
    temp_v2 = 0;
    *param_2 = 4;
    break;
  case 10:
    temp_v2 = 0;
    *param_2 = 9;
    break;
  case 0xb:
    *param_2 = 0xe;
    *param_3 = 0;
    return;
  case 0xc:
    *param_2 = 2;
    temp_v2 = (short)*(unsigned int *)(param_1 + 0x389c);
    break;
  case 0xffffffff:
  case 8:
    temp_v2 = 0;
    *param_2 = 5;
    break;
  default:
    return;
  }
  *param_3 = temp_v2;
  return;
}
