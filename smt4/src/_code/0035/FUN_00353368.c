/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353368` (_code @ 0x353368, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp29; /* 0x29: local_29 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern unsigned char DAT_00407e94; /* 0x407e94 */

/* Supplied declaration required: FUN_00100c44. */
extern int FUN_0023a0d8(unsigned int, int *, unsigned int);
/* Supplied declaration required: FUN_0023a154. */
extern unsigned int FUN_002b5c44(void);
/* Supplied declaration required: FUN_002c30c4. */
/* Supplied declaration required: nn_boss_TaskOption_TaskOption. */


int FUN_00353368(unsigned int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int unaff_r11;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [31];
  unsigned char temp_v11;
  int temp_v12;
  
  temp_v2 = FUN_002b5c44();
  temp_v3 = FUN_0023a0d8(temp_v2,&temp_v12,*param_1);
  if (-1 < temp_v3) {
    strncpy(temp_v10,param_3,0x20);
    temp_v11 = 0;
    temp_v3 = FUN_00100c44(temp_v10,&DAT_00407e94,&temp_v8);
    temp_v4 = FUN_00100c44(0,&DAT_00407e94,&temp_v8);
    *(unsigned char *)(param_2 + 0x20) = 0;
    if ((*(unsigned char *)(temp_v12 + 0x94) - 1 < 4) &&
       (temp_v0 = " ,,.  "[*(unsigned char *)(temp_v12 + 0x94)], temp_v0 != 0 && temp_v3 != 0)) {
      temp_v5 = FUN_002c30c4(temp_v3);
      if (temp_v5 != 0) {
        unaff_r11 = 0xaaaaaaab;
      }
      temp_v8 = (unsigned int)temp_v0;
      temp_v6 = 0;
      if (temp_v5 != 0) {
        while( 1 ) {
          temp_v7 = (unsigned int)((unsigned long long)(temp_v5 - temp_v6) * (unsigned long long)unaff_r11 >> 0x21) * -3 +
                  (temp_v5 - temp_v6);
          if (temp_v7 == 0) {
            temp_v7 = 3;
          }
          nn_boss_TaskOption_TaskOption(param_2 + 0x20,temp_v3 + temp_v6,temp_v7);
          temp_v6 = temp_v6 + temp_v7;
          if (temp_v5 <= temp_v6) break;
          if (temp_v6 != 0) {
            nn_boss_TaskOption_TaskOption(param_2 + 0x20,&temp_v8,2);
          }
        }
      }
    }
    else {
      nn_boss_TaskOption_TaskOption(param_2 + 0x20,temp_v3,0x40);
    }
    if ((*(unsigned char *)(temp_v12 + 0x94) - 2 < 6) &&
       (temp_v1 = "  .,.,.,"[*(unsigned char *)(temp_v12 + 0x94)], temp_v1 != 0)) {
      temp_v5 = FUN_002c30c4(param_2 + 0x20);
      if (temp_v5 >= 0x41) {
        temp_v5 = 0x40;
      }
      if (temp_v4 == 0) {
        temp_v9 = 0x407e9c;
        temp_v4 = 0x407ea0;
      }
      else {
        temp_v3 = FUN_002c30c4(temp_v4);
        if (temp_v3 == 1) {
          temp_v9 = 0x407e98;
        }
        else {
          temp_v9 = 0x407e9c;
        }
      }
      temp_v8 = temp_v4;
      FUN_0023a154(param_2 + temp_v5 + 0x20,0x40 - temp_v5,"%c%s%s",(int)temp_v1);
    }
    strncpy(param_2,temp_v12 + 0x54,0x20);
    strncpy(param_2 + 0x60,temp_v12 + 0x74,0x20);
    temp_v3 = 0;
  }
  return temp_v3;
}
