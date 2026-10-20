/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d7a70` (_code @ 0x4d7a70, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_005738a0; /* 0x5738a0 */
extern unsigned int DAT_005738a4; /* 0x5738a4 */
extern unsigned int DAT_005738a8; /* 0x5738a8 */
extern unsigned int DAT_005738ac; /* 0x5738ac */
extern unsigned int DAT_005738b0; /* 0x5738b0 */
extern unsigned int DAT_005738b4; /* 0x5738b4 */
extern unsigned int DAT_005738b8; /* 0x5738b8 */
extern unsigned int DAT_005738bc; /* 0x5738bc */

extern int btlGetMainState(void);
extern int FUN_00357bc8(int, unsigned char *);
extern int isOutsideRange4To53(int);


unsigned int FUN_004d7a70(int *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 5 goto(s) */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned char *pbVar5;
  int temp_v3;
  
  if ((*param_1 == 0) || ((*param_1 == 10 && (param_1[10] < 1)))) {
    if (param_1[6] == 0) {
      return 0;
    }
    if (param_4 == 0) {
      param_1[9] = 0;
      param_1[8] = -1;
      param_1[1] = 0;
    }
    temp_v0 = btlGetMainState();
    pbVar5 = (unsigned char *)param_1[6];
    temp_v3 = 0;
    if (temp_v3 < param_1[7]) {
      do {
        if (*pbVar5 == param_2) {
          if (((!(param_2 != 3 && param_2 != 4)) || (!(param_2 != 7 && param_2 != 5))) &&
             (param_3 >= 0)) {
            temp_v1 = isOutsideRange4To53(param_3);
            puVar3 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + param_3 * 0x408);
            switch(pbVar5[1]) {
            case 1:
              if ((temp_v1 == 0) && (*(short *)((int)puVar3 + 0x166) == *(short *)(pbVar5 + 2)))
              break;
              goto LAB_004d7c88;
            case 2:
              if ((temp_v1 == 0) || (*(short *)((int)puVar3 + 0x166) != *(short *)(pbVar5 + 2)))
              goto LAB_004d7c88;
              break;
            case 3:
              if ((*puVar3 & DAT_005738a0) == 0 && (DAT_005738a4 & puVar3[1]) == 0)
              goto LAB_004d7c88;
              break;
            case 4:
              if ((DAT_005738b4 & puVar3[1]) == 0 && (*puVar3 & DAT_005738b0) == 0)
              goto LAB_004d7c88;
              break;
            case 5:
              if ((DAT_005738ac & puVar3[1]) == 0 && (DAT_005738a8 & *puVar3) == 0)
              goto LAB_004d7c88;
            }
          }
          if ((param_4 == 0) && ((param_2 == 0 || param_2 == 6 || (param_2 == 7 || param_2 == 8))))
          {
            temp_v2 = *(unsigned int *)(temp_v0 + 0x45a4) | DAT_005738bc;
            *(unsigned int *)(temp_v0 + 0x45a0) = *(unsigned int *)(temp_v0 + 0x45a0) | DAT_005738b8;
            *(unsigned int *)(temp_v0 + 0x45a4) = temp_v2;
          }
          temp_v1 = FUN_00357bc8(param_1[4],pbVar5 + 4);
          if (-1 < temp_v1) {
            if (param_4 == 0) {
              param_1[8] = temp_v1;
              *(unsigned char *)(param_1 + 0xb) = 0;
              param_1[9] = param_2;
            }
            return 1;
          }
        }
LAB_004d7c88:
        temp_v3 = temp_v3 + 1;
        pbVar5 = pbVar5 + 0x24;
      } while (temp_v3 < param_1[7]);
    }
  }
  return 0;
}

} /* extern "C" */
