/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e3e8` (_code @ 0x27e3e8, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00290d74(int, char *);
extern int FUN_002939f4(void);
extern int FUN_003bf570(int);


/* WARNING: Removing unreachable block (ram,0x0027e54c) */

unsigned int FUN_0027e3e8(int *param_1,int param_2,int param_3)

{
/* irregular: 4 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  char *pcVar6;
  int temp_v4;
  
  temp_v3 = (int)*(short *)(param_2 + 0x60);
  if ((*param_1 == 0) || ((*param_1 == 10 && (param_1[10] < 1)))) {
    if (param_1[6] == 0) {
      return 0;
    }
    if (param_3 == 0) {
      param_1[8] = -1;
      param_1[9] = 0;
      param_1[1] = 0;
    }
    temp_v1 = FUN_002939f4();
    pcVar6 = (char *)param_1[6];
    temp_v4 = 0;
    if (temp_v4 < param_1[7]) {
      do {
        if (*pcVar6 == '\x05') {
          if (temp_v3 < 0) goto LAB_0027e53c;
          temp_v2 = FUN_003bf570(temp_v3);
          puVar4 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
          switch(pcVar6[1]) {
          case '\x01':
            if ((temp_v2 == 0) && (*(short *)((int)puVar4 + 0xce) == *(short *)(pcVar6 + 2)))
            goto LAB_0027e53c;
            break;
          case '\x02':
            if ((temp_v2 == 0) || (*(short *)((int)puVar4 + 0xce) != *(short *)(pcVar6 + 2))) break;
          default:
LAB_0027e53c:
            if (param_3 == 0) {
              *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x100000;
            }
            temp_v2 = FUN_00290d74(param_1[4],pcVar6 + 4);
            if (-1 < temp_v2) {
              if (param_3 == 0) {
                param_1[8] = temp_v2;
                *(unsigned char *)(param_1 + 0xb) = 0;
                param_1[9] = 5;
              }
              return 1;
            }
            break;
          case '\x03':
            temp_v0 = *puVar4 & 2;
            goto joined_r0x0027e538;
          case '\x04':
            temp_v0 = *puVar4 & 0x20;
joined_r0x0027e538:
            if (temp_v0 != 0) goto LAB_0027e53c;
          }
        }
        temp_v4 = temp_v4 + 1;
        pcVar6 = pcVar6 + 0x24;
      } while (temp_v4 < param_1[7]);
    }
  }
  return 0;
}

} /* extern "C" */
