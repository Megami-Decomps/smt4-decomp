/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428428` (_code @ 0x428428, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00500254(int, unsigned int *);
int FUN_0050028c(int, unsigned int *, unsigned int, int);
int FUN_00500350(int, unsigned char [4], unsigned int *, int, unsigned int);

/* stack frame of param_3: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int DAT_00589368; /* 0x589368 */
extern unsigned char DAT_0062d000; /* 0x62d000 */

/* Supplied declaration required: FUN_00500254. */
/* Supplied declaration required: FUN_0050028c. */
/* Supplied declaration required: FUN_00500350. */


void FUN_00428428(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = param_1;
  FUN_00500254(param_1,&temp_v3);
  temp_v1 = DAT_00589368;
  if ((-1 < temp_v0) && (temp_v3 != 0)) {
    if (param_3 != 0) {
      temp_v2 = 0;
      do {
        temp_v0 = param_1;
        FUN_0050028c(param_1,&temp_v5,param_2 + temp_v2 * 8,1);
        if (temp_v0 < 0) {
          return;
        }
        switch(temp_v6) {
        case 0:
          temp_v1 = 0x8c;
          break;
        case 1:
          temp_v1 = 0xd;
          break;
        default:
          temp_v1 = 0;
          break;
        case 3:
          temp_v1 = 0x10;
          break;
        case 4:
          temp_v1 = 0x30;
        }
        temp_v0 = temp_v2 * 8;
        temp_v2 = temp_v2 + 1;
        *(unsigned int *)(&DAT_0062d000 + temp_v0) = (unsigned int)temp_v7 | ((temp_v5 & 0xff0fffff) << 8);
        *(unsigned int *)(temp_v0 + 0x62d004) = temp_v1 | 0x40000;
        temp_v1 = param_3;
      } while (temp_v2 < param_3);
    }
    else {
      temp_v2 = 0;
      temp_v1 = temp_v3;
      if (temp_v3 != 0) {
        do {
          temp_v0 = param_1;
          FUN_00500350(param_1,temp_v4,&temp_v5,1,temp_v2);
          if (temp_v0 < 0) {
            return;
          }
          switch(temp_v6) {
          case 0:
            temp_v1 = 0x8c;
            break;
          case 1:
            temp_v1 = 0xd;
            break;
          default:
            temp_v1 = 0;
            break;
          case 3:
            temp_v1 = 0x10;
            break;
          case 4:
            temp_v1 = 0x30;
          }
          *(unsigned int *)(&DAT_0062d000 + temp_v2 * 8) = (unsigned int)temp_v7 | ((temp_v5 & 0xff0fffff) << 8);
          *(unsigned int *)(temp_v2 * 8 + 0x62d004) = temp_v1 | 0x40000;
          temp_v2 = temp_v2 + 1;
          temp_v1 = temp_v3;
        } while (temp_v2 < temp_v3);
      }
    }
  }
  DAT_00589368 = temp_v1;
  return;
}

} /* extern "C" */
