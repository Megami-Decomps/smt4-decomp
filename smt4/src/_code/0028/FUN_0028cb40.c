/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cb40` (_code @ 0x28cb40, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int FUN_00292f28(int);
extern int FUN_002939f4(void);
extern unsigned int FUN_00297ca4(int, unsigned int);
/* Supplied declaration required: FUN_0029efa8. */
/* Supplied declaration required: FUN_0029efc0. */
extern unsigned int FUN_002b63ac(void);
extern int FUN_002c09d0(unsigned int);


void FUN_0028cb40(int param_1,unsigned short *param_2,short *param_3)

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
  unsigned int temp_v10 [6];
  
  temp_v8 = 0;
  temp_v3 = FUN_002939f4();
  if ((*(unsigned int *)(temp_v3 + 0x44a0) & 0x200) != 0) {
    *param_2 = 7;
    *param_3 = 7;
    return;
  }
  temp_v4 = FUN_00297ca4(param_1,1);
  switch(temp_v4) {
  case 0:
  case 6:
    temp_v2 = 0;
    *param_2 = 1;
    break;
  case 1:
    temp_v3 = FUN_0029efc0();
    temp_v8 = FUN_0029efa8(param_1 + 0x3218);
    temp_v8 = temp_v8 + temp_v3;
    if (*(int *)(param_1 + 0x305c) != 0) {
      if (temp_v8 != 0) {
        temp_v0 = 2;
        *param_2 = temp_v0;
        temp_v2 = (short)*(unsigned int *)(param_1 + 0x3068);
        break;
      }
      temp_v0 = 1;
    }
    else {
      if (temp_v8 == 0) {
        temp_v0 = 1;
        *param_2 = temp_v0;
        temp_v2 = (short)*(unsigned int *)(param_1 + 0x3068);
        break;
      }
      if ((temp_v8 == 1) && (temp_v3 = FUN_002c09d0(0x410), temp_v3 != 0)) {
        temp_v5 = FUN_002b63ac();
        temp_v9 = *(short *)(temp_v5 + 2) != 0;
        if (temp_v9) {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 4);
        }
        if (temp_v9 && temp_v5 != 0) {
          temp_v0 = 1;
          *param_2 = temp_v0;
          temp_v2 = (short)*(unsigned int *)(param_1 + 0x3068);
          break;
        }
      }
      temp_v0 = 2;
    }
    *param_2 = temp_v0;
    temp_v2 = (short)*(unsigned int *)(param_1 + 0x3068);
    break;
  case 2:
    *param_2 = 3;
    temp_v2 = (short)*(unsigned int *)(param_1 + 0x3068);
    break;
  case 3:
    *param_2 = 7;
    temp_v3 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v3 + 0x44a8) & 0x1000) == 0) {
      temp_v10[5] = 5;
      temp_v10[0] = 0;
      temp_v10[1] = 1;
      temp_v10[2] = 2;
      temp_v10[3] = 3;
      temp_v10[4] = 4;
      temp_v3 = 0;
      do {
        temp_v6 = FUN_00292f28(temp_v3 + 0x2e);
        if (temp_v6 != 0) {
          temp_v6 = FUN_0029efc0(param_1 + 0x3344);
          temp_v7 = FUN_0029efa8(param_1 + 0x3344);
          if (temp_v7 + temp_v6 == temp_v8) {
            temp_v2 = (short)temp_v10[temp_v3];
            *param_3 = temp_v2;
            return;
          }
          temp_v8 = temp_v8 + 1;
        }
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 6) {
          return;
        }
      } while( 1 );
    }
    temp_v1 = FUN_0029efc0();
    temp_v2 = FUN_0029efa8(param_1 + 0x3344);
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
    temp_v3 = FUN_0029efc0();
    temp_v8 = FUN_0029efa8(param_1 + 0x32e0);
    temp_v2 = *(short *)(param_1 + (temp_v8 + temp_v3) * 2 + 0x3480);
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
