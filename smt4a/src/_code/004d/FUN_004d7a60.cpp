/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d7a60` (_code @ 0x4d7a60, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005738a0; /* 0x5738a0 */
extern unsigned int DAT_005738a4; /* 0x5738a4 */
extern unsigned int DAT_005738a8; /* 0x5738a8 */
extern unsigned int DAT_005738ac; /* 0x5738ac */
extern unsigned int DAT_005738b0; /* 0x5738b0 */
extern unsigned int DAT_005738b4; /* 0x5738b4 */

extern int btlGetMainState(void);
extern int FUN_00357bc8(int, char *);
extern int FUN_004c6e10(int);


/* WARNING: Removing unreachable block (ram,0x004d7c34) */

unsigned int FUN_004d7a60(int *param_1,int param_2,int param_3)

{
/* irregular: 5 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  char *pcVar5;
  int temp_v3;
  
  temp_v2 = (int)*(short *)(param_2 + 0x68);
  if ((*param_1 == 0) || ((*param_1 == 10 && (param_1[10] < 1)))) {
    if (param_1[6] == 0) {
      return 0;
    }
    if (param_3 == 0) {
      param_1[9] = 0;
      param_1[8] = -1;
      param_1[1] = 0;
    }
    temp_v0 = btlGetMainState();
    pcVar5 = (char *)param_1[6];
    temp_v3 = 0;
    if (temp_v3 < param_1[7]) {
      do {
        if (*pcVar5 == '\x05') {
          if (temp_v2 >= 0) {
            temp_v1 = FUN_004c6e10(temp_v2);
            puVar3 = (unsigned int *)(*(int *)(temp_v0 + 0x1ffc) + temp_v2 * 0x408);
            switch(pcVar5[1]) {
            case '\x01':
              if ((temp_v1 == 0) && (*(short *)((int)puVar3 + 0x166) == *(short *)(pcVar5 + 2)))
              break;
              goto LAB_004d7c88;
            case '\x02':
              if ((temp_v1 == 0) || (*(short *)((int)puVar3 + 0x166) != *(short *)(pcVar5 + 2)))
              goto LAB_004d7c88;
              break;
            case '\x03':
              if ((*puVar3 & DAT_005738a0) == 0 && (DAT_005738a4 & puVar3[1]) == 0)
              goto LAB_004d7c88;
              break;
            case '\x04':
              if ((DAT_005738b4 & puVar3[1]) == 0 && (*puVar3 & DAT_005738b0) == 0)
              goto LAB_004d7c88;
              break;
            case '\x05':
              if ((DAT_005738ac & puVar3[1]) == 0 && (DAT_005738a8 & *puVar3) == 0)
              goto LAB_004d7c88;
            }
          }
          temp_v1 = FUN_00357bc8(param_1[4],pcVar5 + 4);
          if (-1 < temp_v1) {
            if (param_3 == 0) {
              param_1[8] = temp_v1;
              *(unsigned char *)(param_1 + 0xb) = 0;
              param_1[9] = 5;
            }
            return 1;
          }
        }
LAB_004d7c88:
        temp_v3 = temp_v3 + 1;
        pcVar5 = pcVar5 + 0x24;
      } while (temp_v3 < param_1[7]);
    }
  }
  return 0;
}

} /* extern "C" */
