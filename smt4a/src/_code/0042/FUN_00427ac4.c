/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427ac4` (_code @ 0x427ac4, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
    unsigned char sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_00427bec(); /* 0x427bec */

/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_004268ec. */
extern int FUN_00426a80(char *);


void FUN_00427ac4(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  char *pcVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned char *unaff_r8;
  unsigned int temp_v4;
  char temp_v5 [8];
  char temp_v6 [12];
  
  temp_v1 = FUN_00426a80(temp_v6);
  if (temp_v6[0] == '\x01' && -1 < temp_v1) {
    if (param_2 != 0) {
      unaff_r8 = (unsigned char *)0xd8a083fa;
    }
    temp_v3 = 0;
    if (temp_v3 < param_2) {
      do {
        puVar5 = (unsigned int *)(param_1 + temp_v3 * 8);
        switch((char)puVar5[1]) {
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
        temp_v4 = *puVar5;
        temp_v0 = *(unsigned char *)((int)puVar5 + 5);
        temp_v2 = 0;
        if (*(char *)((int)puVar5 + 6) != '\0') {
          if (*(char *)((int)puVar5 + 6) == '\x01') {
            temp_v2 = 2;
          }
          else {
            FUN_00195fc8();
            temp_v2 = 0;
          }
        }
        if (temp_v1 == 0x8c) {
          pcVar4 = temp_v5;
          FUN_004268ec(temp_v5,1,(unsigned int)temp_v0 | ((temp_v4 & 0xfffff) << 8) | (temp_v2 << 0x1c));
          if (pcVar4 == unaff_r8) {
            pcVar4 = (char *)0x0;
          }
          else if ((-1 < (int)pcVar4) && (pcVar4 = (char *)0x0, temp_v5[0] != '\0')) {
            pcVar4 = FUN_00427bec.whole;
          }
          if ((int)pcVar4 < 0) {
            return;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < param_2);
    }
  }
  return;
}
