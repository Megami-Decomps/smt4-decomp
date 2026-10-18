/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141e48` (_code @ 0x141e48, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 8 slot(s), 26 byte(s) */
typedef struct {
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int FUN_0014d530(int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002aa984. */
extern unsigned int *FUN_002ac5d8(unsigned char *);
/* Supplied declaration required: FUN_002ac5f4. */
extern unsigned int FUN_002ac780(int);


unsigned int FUN_00141e48(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5 [5];
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [16];
  
  if ((param_3 & 1) != 0) {
    temp_v0 = FUN_002ac780(param_1[1]);
    temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
    if (temp_v1 == 0) {
      return 0;
    }
  }
  if ((param_3 & 0xc) != 0) {
    temp_v4 = 0;
    temp_v6 = 0;
    temp_v5[4] = 0;
    temp_v7 = 0;
    temp_v5[0] = -1;
    temp_v5[1] = 0xffffffff;
    temp_v5[2] = 0xffffffff;
    temp_v5[3] = 0xffffffff;
    temp_v1 = FUN_0014d530(param_1[1],param_2,(unsigned int *)&temp_v4);
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v3 = 0;
    do {
      if (temp_v5[temp_v3] != -1) {
        temp_v0 = FUN_002ac780(param_1[1]);
        temp_v1 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
        if (((param_3 & 0xc) != 0) && (temp_v1 == 0)) {
          return 0;
        }
        if ((param_3 & 8) != 0) {
          FUN_002ac5f4(temp_v8);
          puVar3 = (unsigned int *)FUN_002ac5d8(temp_v8);
          if (puVar3 == (unsigned int *)0x0) {
            return 0;
          }
          temp_v2 = 0;
          if (temp_v2 < *puVar3) {
            do {
              if (*puVar3 <= temp_v2) {
                return 0;
              }
              if (puVar3 + temp_v2 * 2 + 1 == (unsigned int *)0x0) {
                return 0;
              }
              piVar4 = param_1;
              FUN_002aa984(param_1,puVar3[temp_v2 * 2 + 1],puVar3[temp_v2 * 2 + 2]);
              if (piVar4 == (int *)0x0) {
                return 0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < *puVar3);
          }
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
  }
  return 1;
}
