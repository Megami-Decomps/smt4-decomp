/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038350c` (_code @ 0x38350c, 0x238 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00381d8c; /* 0x381d8c */
extern unsigned char LAB_00383748; /* 0x383748 */
extern unsigned char LAB_00383760; /* 0x383760 */

extern int FUN_00235510(int, unsigned int);
extern int FUN_0023ebc0(int);
extern unsigned int FUN_00297004(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_0031e438. */
extern int FUN_00385d0c(int);
/* Supplied declaration required: FUN_00385d14. */
extern int FUN_00385d2c(int);


void FUN_0038350c(int param_1)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7 [64];
  
  temp_v0 = FUN_0023ebc0(param_1 + 0x20);
  if (((temp_v0 != 0) && (temp_v0 = FUN_00385d0c(param_1 + 0x20), temp_v0 != 0)) &&
     (temp_v0 = FUN_00385d2c(param_1 + 0x20), temp_v0 != 0)) {
    temp_v0 = FUN_00235510(param_1 + 0x20,0);
    temp_v5 = 0;
    temp_v1 = param_1 + 0x20;
    FUN_00385d14();
    puVar8 = (unsigned int *)(param_1 + 0xd8c);
    if (0 < temp_v1) {
      do {
        temp_v1 = temp_v0 + temp_v5 * 0x88;
        if ((((unsigned int)*(unsigned short *)(temp_v1 + 0x60) == (int)*(char *)(param_1 + 0x10)) &&
            ((*(short *)(temp_v1 + 0x66) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 != 0)))) &&
           ((*(short *)(temp_v1 + 0x68) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
          temp_v4 = *(int *)(param_1 + 0xd8c);
          temp_v2 = 0;
          if (temp_v2 < temp_v4) {
            do {
              if (*(unsigned int *)(param_1 + temp_v2 * 8 + 0xd60) == (unsigned int)*(unsigned short *)(temp_v1 + 0x62))
              goto LAB_00383620;
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < temp_v4);
          }
          *(int *)(param_1 + temp_v4 * 8 + 0xd5c) = temp_v5;
          *(unsigned int *)(param_1 + *puVar8 * 8 + 0xd60) = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
          temp_v3 = *puVar8;
          *puVar8 = temp_v3 + 1;
          if (temp_v3 + 1 >= 6) break;
        }
LAB_00383620:
        temp_v5 = temp_v5 + 1;
        temp_v1 = param_1 + 0x20;
        FUN_00385d14();
      } while (temp_v5 < temp_v1);
    }
    FUN_002b7f0a(param_1 + 0xd5c,*(unsigned int *)(param_1 + 0xd8c),8,&LAB_00381d8c);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      temp_v3 = 0;
      do {
        temp_v0 = 0;
        if (temp_v0 < *(int *)(param_1 + 0xd8c)) {
          do {
            if (*(int *)(param_1 + temp_v0 * 8 + 0xd60) == temp_v3 + 1) {
              temp_v0 = FUN_00235510(param_1 + 0x20,*(unsigned int *)(param_1 + temp_v0 * 8 + 0xd5c));
              if ((*(short *)(temp_v0 + 100) == 1) || (*(short *)(temp_v0 + 100) != 2)) {
                temp_v6 = 2;
              }
              else {
                temp_v6 = 1;
              }
              goto LAB_003836d0;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < *(int *)(param_1 + 0xd8c));
        }
        temp_v6 = FUN_00297004(1,2);
LAB_003836d0:
        FUN_002be7fc(temp_v7,&LAB_00383748,temp_v3 + 1,temp_v6);
        temp_v0 = param_1 + temp_v3 * 4;
        FUN_0031e438(*(unsigned int *)(*(int *)(temp_v0 + 0xd10) + 8),temp_v7,0);
        FUN_002be7fc(temp_v7,&LAB_00383760,temp_v3 + 1,temp_v6);
        FUN_0031e438(*(unsigned int *)(*(int *)(temp_v0 + 0xd28) + 8),temp_v7,0);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 6);
    }
    *(unsigned int *)(param_1 + 4) = 2;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}
