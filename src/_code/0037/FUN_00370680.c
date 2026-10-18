/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370680` (_code @ 0x370680, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
extern unsigned int FUN_002378c4(void);
extern unsigned int *FUN_00368ab0(void);
extern unsigned int *FUN_0036be60(unsigned int);
extern unsigned int FUN_00370808(unsigned int, unsigned int);
extern unsigned int FUN_00370a94(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00370ca4. */
/* Supplied declaration required: FUN_0037122c. */
/* Supplied declaration required: FUN_003717a0. */


unsigned int FUN_00370680(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int *piVar5;
  unsigned int *temp_v3;
  char temp_v4;
  unsigned char uStack_1b [3];
  
  temp_v0 = FUN_002378c4();
  if (-1 < (int)temp_v0) {
    temp_v1 = param_1;
    FUN_00370ca4(param_1,param_2);
    temp_v0 = temp_v1 | temp_v0;
    if (-1 < (int)temp_v0) {
      temp_v1 = param_1;
      FUN_003717a0(param_1,param_2);
      temp_v0 = temp_v1 | temp_v0;
      if (-1 < (int)temp_v0) {
        temp_v1 = FUN_00370a94(param_1,param_2);
        temp_v0 = temp_v1 | temp_v0;
        if (-1 < (int)temp_v0) {
          temp_v1 = FUN_00370808(param_1,param_2);
          temp_v0 = temp_v1 | temp_v0;
          if (-1 < (int)temp_v0) {
            temp_v1 = param_1;
            FUN_0037122c(param_1,param_2);
            temp_v0 = temp_v1 | temp_v0;
            if (-1 < (int)temp_v0) {
              temp_v1 = 0;
              if ((~*(unsigned char *)(param_1 + 0x1f7) & 1) != 0) {
                temp_v2 = *(int *)(*(int *)(param_1 + 0x218) + 0x10);
                if (!(temp_v2 == 0 || temp_v2 == 0x1000)) {
                  puVar3 = (unsigned int *)FUN_00368ab0();
                }
                else {
                  puVar3 = (unsigned int *)FUN_0036be60(param_2);
                }
                if (puVar3 == (unsigned int *)0x0) {
                  temp_v1 = 0x80000000;
                }
                else {
                  piVar5 = (int *)(param_1 + 0x1ec);
                  (*(unsigned int *)&temp_v4) = romwright_piece_3_1(uStack_1b,1);
                  temp_v3 = puVar3;
                  if ((unsigned int **)piVar5 != &temp_v3) {
                    temp_v3 = (unsigned int *)*piVar5;
                    (*(unsigned int *)&temp_v4) = romwright_piece_3_1(uStack_1b,*(unsigned char *)(param_1 + 0x1f0));
                    *(unsigned char *)(param_1 + 0x1f0) = 1;
                    *piVar5 = (int)puVar3;
                  }
                  puVar3 = temp_v3;
                  if ((temp_v3 != (unsigned int *)0x0) && (temp_v4 != '\0')) {
                    (**(romwright_code **)*temp_v3)(temp_v3);
                    piVar5 = (int *)puVar3[1];
                    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,puVar3);
                  }
                }
              }
              temp_v0 = temp_v1 | temp_v0;
            }
          }
        }
      }
    }
  }
  return temp_v0;
}
