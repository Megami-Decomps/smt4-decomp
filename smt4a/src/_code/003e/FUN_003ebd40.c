/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ebd40` (_code @ 0x3ebd40, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_00573980; /* 0x573980 */
extern unsigned int DAT_00573984; /* 0x573984 */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */


unsigned int FUN_003ebd40(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 3 goto(s) */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = 0;
  do {
    temp_v6 = param_1 + temp_v2 * 0xc;
    temp_v5 = (unsigned int)*(short *)(temp_v6 + 0x45c4);
    temp_v7 = temp_v6;
    if (temp_v5 != 0) {
      temp_v7 = *(unsigned int *)(temp_v6 + 0x45c0);
    }
    if (temp_v5 != 0 && temp_v7 != 0) {
      temp_v3 = *param_2;
      temp_v4 = param_2[1];
      if (!((temp_v3 & DAT_00573980) == 0 && (temp_v4 & DAT_00573984) == 0)) {
        if (((temp_v7 & DAT_00573980) != 0) && (temp_v5 == 0xffffffff)) {
LAB_003ebe40:
          if (param_3 != 1) {
            if (param_3 != 2) {
              if (param_3 != 3) {
                temp_v2 = temp_v2 + 1;
                if (temp_v2 >= 0x80) {
                  return 0;
                }
                continue;
              }
              temp_v0 = *(char *)(temp_v6 + 0x45c8);
            }
            else {
              temp_v0 = *(char *)(temp_v6 + 0x45c7);
            }
          }
          else {
            temp_v0 = *(char *)(temp_v6 + 0x45c6);
          }
          if (temp_v0 != '\0') {
            return 1;
          }
        }
      }
      else if (!((temp_v3 & DAT_00573988) == 0 && (temp_v4 & DAT_0057398c) == 0)) {
        if ((temp_v7 & DAT_00573988) != 0) {
          temp_v1 = *(unsigned short *)((int)param_2 + 0x166);
          goto joined_r0x003ebe08;
        }
      }
      else if (!((temp_v3 & DAT_00573990) == 0 && (temp_v4 & DAT_00573994) == 0)) {
        if ((temp_v7 & DAT_00573990) != 0) {
          temp_v1 = *(unsigned short *)((int)param_2 + 0x166);
joined_r0x003ebe08:
          if (temp_v5 == temp_v1) goto LAB_003ebe40;
        }
      }
      else if (((temp_v3 & DAT_00573998) != 0 || (temp_v4 & DAT_0057399c) != 0) &&
              ((temp_v7 & DAT_00573998) != 0)) {
        temp_v1 = *(unsigned short *)((int)param_2 + 0x166);
        goto joined_r0x003ebe08;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x80) {
      return 0;
    }
  } while( 1 );
}
