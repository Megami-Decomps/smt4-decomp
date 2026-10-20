/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9720` (_code @ 0x3b9720, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003689d0(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int randRange(unsigned int);
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_003689d0. */
extern int FUN_003b57f4(void);


void FUN_003b9720(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  char *pcVar5;
  char *pcVar6;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v2 = gameFlagsGetBlock();
  temp_v4 = 0;
  pcVar6 = (char *)0x0;
  temp_v3 = FUN_003b57f4();
  if (0 < temp_v3) {
    do {
      pcVar5 = pcVar6;
      FUN_003689d0();
      if (((*pcVar5 != -1) && (*pcVar5 == param_1)) && (pcVar5[1] == param_2)) {
        temp_v3 = temp_v2 + ((int)(pcVar6 + ((unsigned int)((int)pcVar6 >> 0x1f) >> 0x1b)) >> 5) * 4;
        *(unsigned int *)(temp_v3 + 0x7c8) = *(unsigned int *)(temp_v3 + 0x7c8) & ~(1 << (((int)pcVar6 % 0x20) & 0xffU))
        ;
        temp_v1 = pcVar5[0xb];
        if ((temp_v1 == '\0') || (temp_v1 == '\x06' || temp_v1 == '\x0e')) {
          temp_v4 = temp_v4 + 1;
        }
      }
      pcVar6 = pcVar6 + 1;
      temp_v3 = FUN_003b57f4();
    } while ((int)pcVar6 < temp_v3);
    if (temp_v4 != 0) {
      if (temp_v4 == 1) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = randRange((temp_v4 - 1U) & 0xffff);
      }
      temp_v5 = 0;
      pcVar6 = (char *)0x0;
      temp_v4 = FUN_003b57f4();
      if (0 < temp_v4) {
        do {
          pcVar5 = pcVar6;
          FUN_003689d0();
          if (((*pcVar5 != -1) && (*pcVar5 == param_1)) &&
             ((pcVar5[1] == param_2 &&
              ((temp_v1 = pcVar5[0xb], temp_v1 == '\0' || (temp_v1 == '\x06' || temp_v1 == '\x0e')))))) {
            temp_v0 = (int)pcVar6 >> 0x1f;
            if ((*(short *)(pcVar5 + 0x28) != 0) ||
               ((temp_v5 == temp_v3 &&
                (temp_v4 = temp_v2 + ((int)(pcVar6 + (temp_v0 >> 0x1b)) >> 5) * 4,
                *(unsigned int *)(temp_v4 + 0x7c8) =
                     *(unsigned int *)(temp_v4 + 0x7c8) | (1 << (((int)pcVar6 % 0x20) & 0xffU)),
                *(short *)(pcVar5 + 0x28) != 0)))) {
              temp_v6 = (int)*(short *)(pcVar5 + 0x28);
              temp_v4 = gameFlagsGetBlock();
              if ((*(unsigned int *)(temp_v4 + ((int)(temp_v6 + ((unsigned int)(temp_v6 >> 0x1f) >> 0x1b)) >> 5) * 4 +
                            0xd4c) & (1 << ((temp_v6 % 0x20) & 0xffU))) == 0) {
                temp_v4 = temp_v2 + ((int)(pcVar6 + (temp_v0 >> 0x1b)) >> 5) * 4;
                *(unsigned int *)(temp_v4 + 0x7c8) =
                     *(unsigned int *)(temp_v4 + 0x7c8) | (1 << (((int)pcVar6 % 0x20) & 0xffU));
              }
            }
            if (*(short *)(pcVar5 + 0x2a) != 0) {
              temp_v4 = temp_v2 + ((int)(pcVar6 + (temp_v0 >> 0x1b)) >> 5) * 4;
              *(unsigned int *)(temp_v4 + 0x7c8) =
                   *(unsigned int *)(temp_v4 + 0x7c8) | (1 << (((int)pcVar6 % 0x20) & 0xffU));
            }
            temp_v5 = temp_v5 + 1;
          }
          pcVar6 = pcVar6 + 1;
          temp_v4 = FUN_003b57f4();
        } while ((int)pcVar6 < temp_v4);
      }
    }
  }
  return;
}

} /* extern "C" */
