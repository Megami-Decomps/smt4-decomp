/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cfd8` (_code @ 0x28cfd8, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Supplied declaration required: FUN_0023dc38. */
extern unsigned int FUN_0028d320(void);
extern int FUN_002939f4(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_0033fe6c. */


unsigned int FUN_0028cfd8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned int temp_v7;
  
  if ((param_1 != 0) && (temp_v7 = param_4, FUN_002b4670(), param_1 != 0)) {
    if ((*(char *)(param_1 + 0x6d) != '\x02' && *(char *)(param_1 + 0x6d) != '\x03') ||
       (*(char *)(param_1 + 0x6b) != '\x01')) {
      return 2;
    }
    if (*(short *)(param_1 + 0x62) != 0) {
      temp_v0 = FUN_0028d320();
      return temp_v0;
    }
    temp_v1 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x2000000) == 0) {
      temp_v6 = 0;
      do {
        puVar7 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v6 * 0x288);
        if (((*puVar7 & 1) != 0) && ((*puVar7 & 0x40) == 0)) {
          temp_v4 = 0;
          temp_v3 = *(char *)(param_1 + 0x68) != '\0' || *(short *)(param_1 + 100) != 0;
          if (*(short *)(param_1 + 0x66) != 0) {
            temp_v3 = temp_v3 | 2;
          }
          if (*(char *)(param_1 + 0x69) != '\0') {
            temp_v3 = temp_v3 | 2;
          }
          if ((*(unsigned char *)(param_1 + 0x6a) & 0x7f) != 0) {
            temp_v3 = temp_v3 | 4;
          }
          if ((((temp_v3 & 1) != 0) && ((*(unsigned short *)((int)puVar7 + 0x1c6) & 2) == 0)) &&
             ((short)puVar7[0x6d] != *(short *)((int)puVar7 + 0x1b6))) {
            temp_v4 = 1;
          }
          if (((temp_v3 & 2) != 0) && ((short)puVar7[0x6e] != *(short *)((int)puVar7 + 0x1ba))) {
            temp_v4 = temp_v4 | 2;
          }
          temp_v5 = temp_v4;
          if (((temp_v3 & 1) != 0 && (temp_v3 & 2) != 0) &&
             ((((temp_v4 & 1) == 0 || (((temp_v4 & 2) == 0 && (temp_v5 = temp_v4 | 2, (temp_v4 & 1) == 0))))
              && ((temp_v5 & 2) != 0)))) {
            temp_v5 = temp_v5 | 1;
          }
          if ((temp_v3 & 4) != 0) {
            temp_v7 = temp_v7 & 0xffff0000;
            FUN_0023dc38(&temp_v7,*(unsigned char *)(param_1 + 0x6a) & 0x7f);
            if (((unsigned short)temp_v7 & *(unsigned short *)((int)puVar7 + 0x1c6)) != 0) {
              temp_v5 = temp_v5 | 4;
            }
          }
          if (temp_v3 == temp_v5) {
            return 0;
          }
        }
        temp_v6 = temp_v6 + 1;
        if (temp_v6 >= 4) {
          if ((*(unsigned char *)(param_1 + 0x6a) & 0x7f) == 1) {
            temp_v1 = FUN_002a8764();
            temp_v6 = -1;
            if (*(unsigned char *)(temp_v1 + 0x910b) != 0xffffffff &&
                !SCARRY4((unsigned int)*(unsigned char *)(temp_v1 + 0x910b),1)) {
              do {
                temp_v2 = temp_v6;
                FUN_0033fe6c(temp_v6,0,param_1);
                if (temp_v2 == 0) {
                  return 0;
                }
                temp_v6 = temp_v6 + 1;
              } while (temp_v6 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x910b));
            }
          }
          return 3;
        }
      } while( 1 );
    }
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
