/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d320` (_code @ 0x28d320, 0x270 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Supplied declaration required: FUN_0023d488. */
/* Supplied declaration required: FUN_0023d9b8. */
extern int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002ae164. */


unsigned int FUN_0028d320(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  
  if ((param_1 != 0) && (FUN_002ae164(), param_1 != 0)) {
    temp_v6 = 2;
    temp_v8 = (*(unsigned int *)(param_1 + 0x28) & 0x7ff) >> 9 != 2;
    if (temp_v8) {
      temp_v6 = 3;
    }
    if (!temp_v8 || temp_v6 == (*(unsigned int *)(param_1 + 0x28) & 0x7ff) >> 9) {
      switch(*(unsigned char *)(param_1 + 0x23)) {
      case 0:
      case 1:
      case 2:
      case 5:
      case 6:
      case 10:
        break;
      default:
        temp_v4 = FUN_002939f4();
        if ((*(unsigned int *)(temp_v4 + 0x44a8) & 0x2000000) == 0) {
          temp_v8 = 0;
          temp_v0 = 0;
          temp_v1 = 0;
          temp_v2 = 0;
          switch((*(unsigned int *)(param_1 + 0x28) & 0x1ff) >> 5) {
          case 0:
          case 1:
            temp_v0 = 1;
            temp_v8 = 0;
            break;
          case 2:
          case 3:
            temp_v8 = 1;
            break;
          case 4:
            temp_v1 = 1;
            temp_v8 = 0;
            break;
          case 5:
          case 6:
            temp_v0 = 1;
            temp_v8 = 1;
            break;
          case 7:
          case 8:
            temp_v2 = 1;
            temp_v8 = 1;
          }
          temp_v7 = 0;
          if ((*(unsigned int *)(param_1 + 0x38) & 0x4000) != 0) {
            temp_v1 = 1;
          }
          if (temp_v8) {
            do {
              puVar6 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v7 * 0x288);
              temp_v6 = *puVar6;
              if ((((temp_v6 & 2) != 0) || (((temp_v6 & 1) != 0 && ((temp_v6 & 0x40) == 0)))) &&
                 (FUN_0023d488(puVar6,param_1,0), puVar6 == (unsigned int *)0x0)) {
                return 0;
              }
              temp_v7 = temp_v7 + 1;
            } while (temp_v7 < 4);
          }
          if (temp_v0) {
            temp_v7 = 4;
            do {
              puVar6 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v7 * 0x288);
              if ((((*puVar6 & 1) != 0) && ((*puVar6 & 0x40) == 0)) &&
                 (FUN_0023d488(puVar6,param_1,0), puVar6 == (unsigned int *)0x0)) {
                return 0;
              }
              temp_v7 = temp_v7 + 1;
            } while (temp_v7 < 0x36);
          }
          if (temp_v1) {
            temp_v7 = FUN_0027e928(DAT_0043427c);
            temp_v4 = 0;
            if (temp_v7 != 0) {
              temp_v4 = *(int *)(temp_v7 + 0x20);
            }
            if ((temp_v7 != 0 && temp_v4 != 0) && (FUN_0023d488(temp_v4,param_1,1), temp_v4 == 0)) {
              return 0;
            }
          }
          if (temp_v2) {
            temp_v4 = FUN_002a8764();
            temp_v7 = -1;
            if (*(unsigned char *)(temp_v4 + 0x910b) != 0xffffffff &&
                !SCARRY4((unsigned int)*(unsigned char *)(temp_v4 + 0x910b),1)) {
              do {
                temp_v5 = temp_v7;
                FUN_0023d9b8(temp_v7,0,param_1);
                if (temp_v5 == 0) {
                  return 0;
                }
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < (int)(unsigned int)*(unsigned char *)(temp_v4 + 0x910b));
            }
          }
          return 3;
        }
      }
      return 0;
    }
    temp_v3 = 2;
  }
  else {
    temp_v3 = 1;
  }
  return temp_v3;
}
