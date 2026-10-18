/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e668` (_code @ 0x27e668, 0x1ec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_00291018(int, unsigned char *);
extern int FUN_00293c98(void);
extern int FUN_003bf798(int);


unsigned int FUN_0027e668(int *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 4 goto(s) */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  int temp_v3;
  
  if ((*param_1 == 0) || ((*param_1 == 10 && (param_1[10] < 1)))) {
    if (param_1[6] == 0) {
      return 0;
    }
    if (param_4 == 0) {
      param_1[8] = -1;
      param_1[9] = 0;
      param_1[1] = 0;
    }
    temp_v1 = FUN_00293c98();
    pbVar5 = (unsigned char *)param_1[6];
    temp_v3 = 0;
    if (temp_v3 < param_1[7]) {
      do {
        if (*pbVar5 == param_2) {
          if (((param_2 != 3 && param_2 != 4) && (param_2 != 7 && param_2 != 5)) || (param_3 < 0))
          goto LAB_0027e7ac;
          temp_v2 = FUN_003bf798(param_3);
          puVar4 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + param_3 * 0x288);
          switch(pbVar5[1]) {
          case 1:
            if ((temp_v2 == 0) && (*(short *)((int)puVar4 + 0xce) == *(short *)(pbVar5 + 2)))
            goto LAB_0027e7ac;
            break;
          case 2:
            if ((temp_v2 == 0) || (*(short *)((int)puVar4 + 0xce) != *(short *)(pbVar5 + 2))) break;
          default:
LAB_0027e7ac:
            if (param_4 == 0) {
              switch(param_2) {
              case 0:
              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
                *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x100000;
              }
            }
            temp_v2 = FUN_00291018(param_1[4],pbVar5 + 4);
            if (-1 < temp_v2) {
              if (param_4 == 0) {
                param_1[8] = temp_v2;
                *(unsigned char *)(param_1 + 0xb) = 0;
                param_1[9] = param_2;
              }
              return 1;
            }
            break;
          case 3:
            temp_v0 = *puVar4 & 2;
            goto joined_r0x0027e7a8;
          case 4:
            temp_v0 = *puVar4 & 0x20;
joined_r0x0027e7a8:
            if (temp_v0 != 0) goto LAB_0027e7ac;
          }
        }
        temp_v3 = temp_v3 + 1;
        pbVar5 = pbVar5 + 0x24;
      } while (temp_v3 < param_1[7]);
    }
  }
  return 0;
}
