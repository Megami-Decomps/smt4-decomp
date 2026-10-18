/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c982c` (_code @ 0x2c982c, 0x25c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned short spF8; /* 0xf8: local_f8 */
    unsigned short sp12C; /* 0x12c: local_12c */
    unsigned short sp12E; /* 0x12e: local_12e */
} param_1_stack;

/* Supplied declaration required: FUN_0019e130. */
/* Supplied declaration required: FUN_0024101c. */
/* Supplied declaration required: FUN_002a7324. */
extern short *FUN_002c7e24(void);
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: FUN_0036d318. */
/* Supplied declaration required: FUN_0037e09c. */
/* Supplied declaration required: FUN_003b076c. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_002c982c(int param_1)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  unsigned char temp_v5 [42];
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  int *temp_v9;
  
  temp_v4 = 0;
  temp_v9 = (int *)(param_1 + 0x4850);
  if (0 < *temp_v9) {
    do {
      temp_v0 = param_1 + temp_v4 * 0x40;
      if (*(char *)(temp_v0 + 0x4894) != '\0') {
        puVar4 = (unsigned short *)(temp_v0 + 0x4858);
        psVar2 = (short *)FUN_002c7e24();
        if (*(short *)(temp_v0 + 0x485e) != 0) {
          if ((int)*psVar2 == (unsigned int)*puVar4) {
            temp_v3 = 0;
            temp_v2 = 1;
            piVar6 = (int *)(param_1 + 0x4ae0);
            do {
              if (((unsigned int)*(unsigned short *)(temp_v0 + 0x485e) & (1 << (temp_v2 & 0xff))) != 0) {
                if (*piVar6 == temp_v3) {
                  FUN_0019e130((int)(short)temp_v2);
                  FUN_003b076c();
                  FUN_0037e09c(1);
                  if (*(short *)(temp_v0 + 0x485e) != psVar2[0xe]) {
                    FUN_0036d318(*puVar4,temp_v5);
                    temp_v6 = *(unsigned short *)(temp_v0 + 0x485a);
                    temp_v7 = *(unsigned short *)(temp_v0 + 0x485c);
                    temp_v8 = *(unsigned short *)(temp_v0 + 0x485e);
                    FUN_00334214(temp_v5,1,0,temp_v0 + 0x4871);
                    FUN_0037e09c(1);
                    FUN_002a7324(1);
                  }
                }
                temp_v3 = temp_v3 + 1;
              }
              temp_v2 = temp_v2 + 1;
            } while ((int)temp_v2 < 0xe);
            if (*(int *)(param_1 + 0x4adc) >= 0x18) {
              aeabi_idivmod(*piVar6 + 1,temp_v3);
              *piVar6 = temp_v1;
              *(int *)(param_1 + 0x4adc) = 0;
            }
            if (*(short *)(temp_v0 + 0x485e) == 0) goto LAB_002c998c;
          }
        }
        else {
LAB_002c998c:
          FUN_0019e130(0);
          FUN_003b076c();
          if (*(short *)(temp_v0 + 0x485e) != psVar2[0xe]) {
            FUN_0036d318(*puVar4,temp_v5);
            temp_v6 = *(unsigned short *)(temp_v0 + 0x485a);
            temp_v7 = *(unsigned short *)(temp_v0 + 0x485c);
            temp_v8 = *(unsigned short *)(temp_v0 + 0x485e);
            FUN_00334214(temp_v5,1,0,temp_v0 + 0x4871);
            FUN_0037e09c(1);
            FUN_002a7324(1);
          }
        }
        temp_v3 = temp_v0 + 0x4871;
        FUN_0024101c(temp_v3,psVar2 + 0x30d);
        if ((temp_v3 != 0) && ((int)*psVar2 == (unsigned int)*puVar4)) {
          FUN_0036d318((unsigned int)*puVar4,temp_v5);
          temp_v6 = *(unsigned short *)(temp_v0 + 0x485a);
          temp_v7 = *(unsigned short *)(temp_v0 + 0x485c);
          temp_v8 = *(unsigned short *)(temp_v0 + 0x485e);
          FUN_00334214(temp_v5,1,0,temp_v0 + 0x4871);
          FUN_002a7324(1);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *temp_v9);
  }
  return;
}
