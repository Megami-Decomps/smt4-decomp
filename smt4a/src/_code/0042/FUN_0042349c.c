/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042349c` (_code @ 0x42349c, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

/* Supplied declaration required: FUN_00425fb4. */
extern int FUN_00426124(void);
/* Supplied declaration required: FUN_005133e0. */


unsigned int FUN_0042349c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [11];
  int temp_v6;
  unsigned int temp_v7 [12];
  
  temp_v0 = param_1[0x16];
  temp_v2 = param_1[0x17];
  if (temp_v0 != temp_v2) {
    temp_v3 = 0;
    do {
      temp_v4 = (param_1[0x17] + temp_v3) & 3;
      (**(romwright_code **)(*(int *)param_1[temp_v4 * 5 + 2] + 0x10))((int *)param_1[temp_v4 * 5 + 2],&temp_v6);
      if (((char)param_1[temp_v4 * 5 + 6] == '\0') && (0 < temp_v6)) {
        if (*(char *)((int)param_1 + 6) != '\x01') {
          temp_v1 = temp_v6;
          if (*(unsigned int *)(param_1[temp_v4 * 5 + 3] + 8) < 2) {
            temp_v1 = (temp_v6 + 1) >> 1;
          }
          (**(romwright_code **)(*(int *)param_1[temp_v4 * 5 + 2] + 0x18))
                    ((int *)param_1[temp_v4 * 5 + 2],temp_v5);
          if ((temp_v1 < 3) || (*(char *)((int)param_1 + 5) != '\x01')) {
            puVar2 = temp_v5;
          }
          else {
            temp_v0 = *param_1;
            FUN_005133e0(temp_v0,temp_v5,temp_v7);
            if ((temp_v0 & 0xff) != 0) {
              return 0;
            }
            puVar2 = temp_v7;
          }
          temp_v0 = puVar2[6];
          FUN_00425fb4(temp_v0,puVar2[7],1,(char)param_1[1],1,*puVar2,puVar2[1],puVar2[2],
                       puVar2[3] - temp_v0,puVar2[4] - (temp_v0 >> 1),puVar2[5] - (temp_v0 >> 1),
                       param_1[temp_v4 * 5 + 4],param_1[temp_v4 * 5 + 5] - temp_v0);
          *(unsigned char *)((int)param_1 + 6) = 1;
          return 1;
        }
        temp_v1 = FUN_00426124();
        if (temp_v1 == 0) {
          return 1;
        }
        *(unsigned char *)(param_1 + temp_v4 * 5 + 6) = 1;
        (**(romwright_code **)(*(int *)param_1[temp_v4 * 5 + 2] + 0x1c))();
        *(unsigned char *)((int)param_1 + 6) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v0 - temp_v2);
  }
  return 1;
}
