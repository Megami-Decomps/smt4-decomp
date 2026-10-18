/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010042c` (_code @ 0x10042c, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: while (INT_ADD). */
/* Supplied declaration required: FUN_0010095c. */
extern int FUN_0010123c(unsigned int *, unsigned int);


unsigned long long FUN_0010042c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  romwright_code *pcVar5;
  int temp_v4;
  unsigned int *temp_v5;
  unsigned int *temp_v6;
  
  temp_v0 = 0;
  temp_v6 = param_2;
  do {
    param_1[8] = temp_v0;
LAB_00100436:
    temp_v0 = (*(romwright_code *)param_1[3])(param_1);
    if (temp_v0 == 0) {
      return romwright_piece_4_4(temp_v5,param_1[8]);
    }
    if (temp_v0 != 0x25) {
      pcVar5 = (romwright_code *)param_1[1];
      temp_v3 = param_1[2];
    }
    else {
      temp_v3 = 0;
      while (((temp_v0 = (*(romwright_code *)param_1[3])(param_1), (int)temp_v0 >= 0x20 && (temp_v0 < 0x31)) &&
             (*(unsigned char *)(temp_v0 + 0x417e00) != 0))) {
        temp_v3 = temp_v3 | *(unsigned char *)(temp_v0 + 0x417e00);
      }
      if ((int)(temp_v3 << 0x1e) < 0) {
        temp_v3 = temp_v3 & 0xfffffffb;
      }
      param_1[7] = 0;
      temp_v4 = 0;
      param_1[6] = 0;
      do {
        if (temp_v0 != 0x2a) {
          temp_v1 = FUN_0010095c(temp_v0);
          if (temp_v1 != 0) {
            temp_v5 = param_1 + temp_v4;
            temp_v5[6] = temp_v0 - 0x30;
            while( 1 ) {
              temp_v0 = (*(romwright_code *)param_1[3])(param_1);
              temp_v1 = FUN_0010095c();
              if (temp_v1 == 0) break;
              temp_v5[6] = (temp_v5[6] * 10 + temp_v0) - 0x30;
            }
          }
          if (temp_v4 == 1) break;
        }
        else {
          temp_v0 = *temp_v6;
          temp_v6 = temp_v6 + 1;
          param_1[temp_v4 + 6] = temp_v0;
          temp_v0 = (*(romwright_code *)param_1[3])(param_1);
          if (temp_v4 == 1) {
            if ((int)param_1[7] < 0) {
              temp_v3 = temp_v3 & 0xffffffdf;
            }
            break;
          }
        }
        if (temp_v0 != 0x2e) break;
        temp_v0 = (*(romwright_code *)param_1[3])(param_1);
        temp_v3 = temp_v3 | 0x20;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 2);
      if ((int)param_1[6] < 0) {
        param_1[6] = -param_1[6];
        temp_v3 = temp_v3 | 1;
      }
      if ((temp_v3 & 1) != 0) {
        temp_v3 = temp_v3 & 0xffffffef;
      }
      if ((temp_v0 != 0x6c) && (temp_v0 != 0x68)) {
        if (temp_v0 != 0x4c) {
          if (temp_v0 != 0x6a) {
            if ((temp_v0 == 0x74) || (temp_v0 == 0x7a)) {
              temp_v0 = 0;
              temp_v3 = temp_v3 | temp_v0;
              temp_v0 = (*(romwright_code *)param_1[3])(param_1);
            }
          }
          else {
            temp_v0 = 0x80;
            temp_v3 = temp_v3 | temp_v0;
            temp_v0 = (*(romwright_code *)param_1[3])(param_1);
          }
        }
        else {
          temp_v0 = 0;
          temp_v3 = temp_v3 | temp_v0;
          temp_v0 = (*(romwright_code *)param_1[3])(param_1);
        }
      }
      else {
        temp_v2 = (*(romwright_code *)param_1[3])(param_1);
        if (temp_v2 == temp_v0) {
          if (temp_v0 == 0x6c) {
            temp_v0 = 0x80;
          }
          else {
            temp_v0 = 0x400;
          }
          temp_v3 = temp_v3 | temp_v0;
          temp_v0 = (*(romwright_code *)param_1[3])(param_1);
        }
        else {
          if (temp_v0 == 0x6c) {
            temp_v0 = 0x40;
          }
          else {
            temp_v0 = 0x100;
          }
          temp_v3 = temp_v3 | temp_v0;
          temp_v0 = temp_v2;
        }
      }
      if (temp_v0 == 0) {
        return romwright_piece_4_4(temp_v5,param_1[8]);
      }
      if (temp_v0 - 0x41 < 0x1a) {
        temp_v3 = temp_v3 | 0x800;
        temp_v0 = temp_v0 + 0x20;
      }
      *param_1 = temp_v3;
      temp_v4 = FUN_0010123c(param_1,temp_v0);
      if (temp_v4 != 0) {
        if (temp_v4 != 1) {
          temp_v6 = (unsigned int *)((((int)temp_v6 + 7U) & 0xfffffff8) + 8);
        }
        else {
          temp_v6 = temp_v6 + 1;
        }
        goto LAB_00100436;
      }
      pcVar5 = (romwright_code *)param_1[1];
      temp_v3 = param_1[2];
    }
    (*pcVar5)(temp_v0,temp_v3);
    temp_v0 = param_1[8] + 1;
  } while( 1 );
}
