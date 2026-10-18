/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dcb50` (_code @ 0x3dcb50, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_4_stack;

/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_0027dd20(unsigned int, int);
extern unsigned int FUN_0028549c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_003db108. */


void FUN_003dcb50(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v10 = param_1;
  temp_v0 = FUN_00293c98();
  temp_v9 = 0;
LAB_003dccc4:
  do {
    do {
      do {
        do {
          do {
            do {
              temp_v9 = temp_v9 + 1;
              if (temp_v9 >= 0x6d) {
                return;
              }
            } while (temp_v9 < 4);
            temp_v1 = FUN_00293c98();
            temp_v2 = temp_v9 * 0x114 + 0x50;
          } while ((*(unsigned int *)(*(int *)(temp_v1 + 0x1e98) + temp_v2) & 1) == 0);
          temp_v3 = *(unsigned int *)(*(int *)(temp_v0 + 0x1e98) + temp_v2);
          if (param_3 != 0) {
            if ((temp_v3 & 0x8000) == 0) goto LAB_003dccc4;
          }
          else if ((temp_v3 & 0x400) == 0) goto LAB_003dccc4;
        } while (!(param_2 != 0 && param_2 != 0x16));
        FUN_003db108(param_1,temp_v9,temp_v9 * 5,param_4,temp_v10);
        temp_v1 = FUN_00293c98();
        temp_v1 = *(int *)(temp_v1 + 0x1e98) + temp_v9 * 0x114;
        temp_v2 = (int)*(short *)(temp_v1 + 0x62);
      } while (*(int *)(param_1 + temp_v9 * 8 + 0x1034) >= 0);
      temp_v4 = FUN_00293c98();
      temp_v1 = FUN_0027dd20(temp_v4,temp_v1);
      if (temp_v1 < 0) {
        temp_v1 = 0;
      }
      temp_v5 = FUN_00293c98();
      FUN_0027dca0(temp_v5,temp_v2);
    } while (temp_v5 == 0);
    temp_v8 = 0;
    do {
      temp_v7 = param_1 + temp_v8 * 0x28;
      if ((*(int *)(temp_v5 + temp_v1 * 4 + 0xc) == *(int *)(temp_v7 + 0x194)) &&
         (temp_v6 = FUN_00293c98(),
         *(int *)(*(int *)(temp_v6 + 0x1e98) + temp_v9 * 0x114 + 0x5c) == *(int *)(temp_v7 + 0x198))) {
        temp_v4 = FUN_0028549c(*(unsigned int *)(temp_v7 + 400),1);
        temp_v1 = param_1 + temp_v9 * 0x10;
        *(unsigned int *)(temp_v1 + 0x960) = temp_v4;
        *(int *)(temp_v1 + 0x964) = temp_v2;
        break;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x32);
  } while( 1 );
}
