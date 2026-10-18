/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f364c` (_code @ 0x2f364c, 0x268 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0049f91c; /* 0x49f91c */

extern int FUN_001fc270(int);
extern int FUN_00248320(void);
extern int FUN_00248f6c(void);
extern int FUN_0024f7a8(int);
/* Supplied declaration required: FUN_0024f7e8. */
/* Supplied declaration required: FUN_0025b8a8. */
/* Supplied declaration required: FUN_0027f094. */
extern int FUN_002c0bcc(unsigned int);
extern int FUN_002c2b1c(void);


void FUN_002f364c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  int temp_v3;
  char *pcVar6;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = FUN_002c2b1c();
  temp_v7 = 0;
  temp_v1 = temp_v0;
  FUN_0024f7e8();
  if (0 < temp_v1) {
    do {
      temp_v1 = FUN_0024f7a8(temp_v7);
      temp_v4 = (int)*(short *)(temp_v1 + 0x20);
      if (temp_v4 == -1) {
        return;
      }
      if ((DAT_0049f91c == temp_v4) &&
         (temp_v2 = temp_v0 + *(short *)(temp_v1 + 0x28) * 4, *(int *)(temp_v2 + 0xe60) == 0)) {
        temp_v3 = 0;
        *(int *)(temp_v2 + 0xe60) = *(short *)(temp_v1 + 0x26) * 0x708;
        temp_v1 = FUN_00248320();
        if (0 < temp_v1) {
          do {
            temp_v1 = temp_v3;
            FUN_0025b8a8();
            if ((*(int *)(temp_v1 + 0x20) != -1) && (*(char *)(temp_v1 + 0x26) == temp_v4)) {
              temp_v2 = (int)*(short *)(temp_v1 + 0x24);
              temp_v1 = FUN_002c2b1c();
              temp_v1 = temp_v1 + ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1b)) >> 5) * 4;
              *(unsigned int *)(temp_v1 + 0xc98) = *(unsigned int *)(temp_v1 + 0xc98) | (1 << ((temp_v2 % 0x20) & 0xffU));
            }
            temp_v3 = temp_v3 + 1;
            temp_v1 = FUN_00248320();
          } while (temp_v3 < temp_v1);
        }
        temp_v1 = 0;
        do {
          temp_v2 = FUN_002c2b1c();
          temp_v5 = 0;
          pcVar6 = (char *)0x0;
          temp_v3 = FUN_00248f6c();
          if (0 < temp_v3) {
            do {
              pcVar3 = pcVar6;
              FUN_0027f094();
              if (((*pcVar3 != -1) && (*pcVar3 == temp_v4)) && (pcVar3[1] == temp_v1)) {
                temp_v3 = temp_v2 + ((int)(pcVar6 + ((unsigned int)((int)pcVar6 >> 0x1f) >> 0x1b)) >> 5) * 4;
                *(unsigned int *)(temp_v3 + 0x794) =
                     *(unsigned int *)(temp_v3 + 0x794) & ~(1 << (((int)pcVar6 % 0x20) & 0xffU));
                if ((pcVar3[0xb] == '\0') || (pcVar3[0xb] == '\x06')) {
                  temp_v5 = temp_v5 + 1;
                }
              }
              pcVar6 = pcVar6 + 1;
              temp_v3 = FUN_00248f6c();
            } while ((int)pcVar6 < temp_v3);
            if (temp_v5 != 0) {
              if (temp_v5 == 1) {
                temp_v3 = 0;
              }
              else {
                temp_v3 = FUN_002c0bcc((temp_v5 - 1U) & 0xffff);
              }
              temp_v6 = 0;
              pcVar6 = (char *)0x0;
              temp_v5 = FUN_00248f6c();
              if (0 < temp_v5) {
                do {
                  pcVar3 = pcVar6;
                  FUN_0027f094();
                  if (((*pcVar3 != -1) && (*pcVar3 == temp_v4)) &&
                     ((pcVar3[1] == temp_v1 && ((pcVar3[0xb] == '\0' || (pcVar3[0xb] == '\x06')))))) {
                    if (temp_v6 == temp_v3) {
                      temp_v5 = temp_v2 + ((int)(pcVar6 + ((unsigned int)((int)pcVar6 >> 0x1f) >> 0x1b)) >> 5) *
                                      4;
                      *(unsigned int *)(temp_v5 + 0x794) =
                           *(unsigned int *)(temp_v5 + 0x794) | (1 << (((int)pcVar6 % 0x20) & 0xffU));
                    }
                    temp_v6 = temp_v6 + 1;
                  }
                  pcVar6 = pcVar6 + 1;
                  temp_v5 = FUN_00248f6c();
                } while ((int)pcVar6 < temp_v5);
              }
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x10);
        temp_v1 = FUN_001fc270(temp_v4);
      }
      temp_v7 = temp_v7 + 1;
      FUN_0024f7e8();
    } while (temp_v7 < temp_v1);
  }
  return;
}
