/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002277d4` (_code @ 0x2277d4, 0x2e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00228220(unsigned int, int, int, int, int, int, unsigned int, unsigned char [8]);
int FUN_0022899c(unsigned int, int, int, int, int, unsigned int);

/* stack frame of param_7: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_7_stack;

/* Supplied declaration required: FUN_00228220. */
/* Supplied declaration required: FUN_0022899c. */
extern int FUN_0029e9cc(unsigned short);
extern unsigned short FUN_003be64c(unsigned char);


unsigned int
FUN_002277d4(unsigned int param_1,int param_2,int param_3,int param_4,unsigned int param_5,int param_6,
            int param_7)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int unaff_r11;
  unsigned char temp_v7 [8];
  
  switch(*(unsigned char *)(param_3 + 0x23)) {
  case 0:
  case 1:
    if (param_7 != 2) goto LAB_00227840;
    break;
  case 2:
    if (param_7 != 1) goto LAB_00227840;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    break;
  default:
LAB_00227840:
    temp_v6 = 0;
    switch((*(unsigned int *)(param_3 + 0x28) & 0x1ff) >> 5) {
    case 1:
    case 6:
      temp_v6 = 1;
    default:
      temp_v5 = 0;
      if (param_5 != 0) {
        unaff_r11 = 1;
      }
      temp_v1 = 0;
      temp_v7[0] = 0;
      if (param_5 != 0) {
        do {
          puVar4 = *(unsigned int **)(param_4 + temp_v5 * 4);
          if (((*puVar4 & 0x400) != 0) &&
             (temp_v3 = FUN_0029e9cc(*(unsigned short *)((int)puVar4 + 0xce)), temp_v3 != 0)) {
            *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 2;
            *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e) = *(unsigned short *)(param_3 + 0x20);
            temp_v4 = (unsigned int)*(unsigned short *)(param_3 + 0x20);
            FUN_00228220(temp_v4,0,2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),
                         (int)*(short *)(*(int *)(param_4 + temp_v5 * 4) + 8),0,unaff_r11,temp_v7);
            temp_v0 = (temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 3;
            if ((unsigned char)(temp_v0 & temp_v6)) {
              return 0;
            }
            if (!(unsigned char)(temp_v0 & ~temp_v6)) {
              temp_v4 = (unsigned int)*(unsigned short *)(param_3 + 0x20);
              FUN_0022899c(temp_v4,0,0,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x62),
                           (int)*(short *)(*(int *)(param_4 + temp_v5 * 4) + 8),unaff_r11);
              if ((((param_6 == 0) || (temp_v4 == 2)) &&
                  (temp_v2 = FUN_003be64c(*(unsigned char *)(param_3 + 0x2f)),
                  (temp_v2 & *(unsigned short *)(*(int *)(param_4 + temp_v5 * 4) + 0x1c6)) == 0)) &&
                 (temp_v1 = 1, !temp_v6)) {
                *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 2;
                *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e) = *(unsigned short *)(param_3 + 0x20);
                *(char *)((int)*(short *)(*(int *)(param_4 + temp_v5 * 4) + 0x6e) + param_2 + 0x38) =
                     (char)unaff_r11;
                return 1;
              }
            }
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < param_5);
      }
      if ((unsigned char)(temp_v1 & temp_v6)) {
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14c) = 2;
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x14e) = *(unsigned short *)(param_3 + 0x20);
        if (param_5 == 0) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = param_5 & 1;
          temp_v3 = 0;
          if (temp_v5 != 0) {
            do {
              puVar4 = *(unsigned int **)(param_4 + temp_v3 * 4);
              temp_v3 = temp_v3 + 1;
              if ((*puVar4 & 0x400) != 0) {
                *(unsigned char *)((int)*(short *)((int)puVar4 + 0x6e) + param_2 + 0x38) = 1;
              }
            } while (temp_v3 < (int)temp_v5);
          }
        }
        if (temp_v5 < param_5) {
          do {
            puVar4 = *(unsigned int **)(param_4 + temp_v5 * 4);
            if ((*puVar4 & 0x400) != 0) {
              *(unsigned char *)((int)*(short *)((int)puVar4 + 0x6e) + param_2 + 0x38) = 1;
            }
            temp_v3 = temp_v5 * 4;
            temp_v5 = temp_v5 + 2;
            puVar4 = *(unsigned int **)(param_4 + temp_v3 + 4);
            if ((*puVar4 & 0x400) != 0) {
              *(unsigned char *)((int)*(short *)((int)puVar4 + 0x6e) + param_2 + 0x38) = 1;
            }
          } while (temp_v5 < param_5);
        }
        return 1;
      }
      return 0;
    case 2:
    case 3:
    case 4:
    case 7:
    case 8:
      break;
    }
  }
  return 0;
}

} /* extern "C" */
