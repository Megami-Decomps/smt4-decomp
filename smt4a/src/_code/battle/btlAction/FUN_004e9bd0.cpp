/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e9bd0` (_code @ 0x4e9bd0, 0x39c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bfcfc(unsigned int, int, int, int, int, unsigned int, unsigned int);
int FUN_004c4604(unsigned int, int, int, int, int, int, unsigned int, unsigned char [8]);

/* stack frame of param_7: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_7_stack;

extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_0026264c(unsigned short);
extern int FUN_002626e0(void);
extern int FUN_003e9b28(int);
/* Supplied declaration required: FUN_004bfcfc. */
extern unsigned short FUN_004c3a10(unsigned char);
/* Supplied declaration required: FUN_004c4604. */


unsigned int
FUN_004e9bd0(int *param_1,int param_2,int param_3,int param_4,unsigned int param_5,int param_6,int param_7)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int unaff_r11;
  unsigned char temp_v8 [8];
  int *temp_v9;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  switch(*(unsigned char *)(param_3 + 0x23)) {
  case 0:
  case 1:
    if (param_7 != 2) goto LAB_004e9c3c;
    break;
  case 2:
    if (param_7 != 1) goto LAB_004e9c3c;
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
LAB_004e9c3c:
    temp_v7 = 0;
    switch((*(unsigned int *)(param_3 + 0x28) & 0x1ff) >> 5) {
    case 1:
    case 6:
      temp_v7 = 1;
    default:
      temp_v6 = 0;
      if (param_5 != 0) {
        unaff_r11 = 1;
      }
      temp_v1 = 0;
      temp_v8[0] = 0;
      temp_v9 = param_1;
      iStack_30 = param_2;
      iStack_2c = param_3;
      iStack_28 = param_4;
      if (param_5 != 0) {
        do {
          puVar4 = *(unsigned int **)(param_4 + temp_v6 * 4);
          if ((*puVar4 & DAT_00571190) != 0 || (puVar4[1] & DAT_00571194) != 0) {
            temp_v3 = FUN_0026264c(*(unsigned short *)((int)puVar4 + 0x166));
            if (temp_v3 == 0) {
              temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_4 + temp_v6 * 4) + 0x166);
              if ((*(int *)(*temp_v9 + 0xec) < 0) || ((*(unsigned int *)(*temp_v9 + 0x110) & 0x80) == 0))
              {
                temp_v3 = 0;
                if (temp_v4 != 0x493) {
                  temp_v3 = temp_v4 - 0x400;
                }
                if (((temp_v4 != 0x493 && temp_v3 != 0x94) && (temp_v4 != 0x495 && temp_v4 != 0x496)) &&
                   ((temp_v3 = FUN_002626e0(), temp_v3 == 0 ||
                    (temp_v3 = FUN_003e9b28(*temp_v9), temp_v3 != 0)))) goto LAB_004e9e34;
              }
            }
            *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
            *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = *(unsigned short *)(param_3 + 0x20);
            temp_v4 = (unsigned int)*(unsigned short *)(param_3 + 0x20);
            FUN_004c4604(temp_v4,0,2,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x6a),
                         (int)*(short *)(*(int *)(param_4 + temp_v6 * 4) + 8),0,unaff_r11,temp_v8);
            temp_v0 = (temp_v4 == 1 || temp_v4 == 2) || temp_v4 == 3;
            if ((unsigned char)(temp_v0 & temp_v7)) {
              return 0;
            }
            if (!(unsigned char)(temp_v0 & ~temp_v7)) {
              temp_v4 = (unsigned int)*(unsigned short *)(param_3 + 0x20);
              FUN_004bfcfc(temp_v4,0,0,(int)*(short *)(*(int *)(param_2 + 0x24) + 0x6a),
                           (int)*(short *)(*(int *)(param_4 + temp_v6 * 4) + 8),unaff_r11,unaff_r11);
              if ((((param_6 == 0) || (temp_v4 == 2)) &&
                  (temp_v2 = FUN_004c3a10(*(unsigned char *)(param_3 + 0x2f)),
                  (temp_v2 & *(unsigned short *)(*(int *)(param_4 + temp_v6 * 4) + 0x274)) == 0)) &&
                 (temp_v1 = 1, !temp_v7)) {
                *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
                *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = *(unsigned short *)(param_3 + 0x20);
                *(char *)((int)*(short *)(*(int *)(param_4 + temp_v6 * 4) + 0x6e) + param_2 + 0x38) =
                     (char)unaff_r11;
                return 1;
              }
            }
          }
LAB_004e9e34:
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < param_5);
      }
      if ((unsigned char)(temp_v1 & temp_v7)) {
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = *(unsigned short *)(param_3 + 0x20);
        temp_v4 = DAT_00571194;
        temp_v6 = DAT_00571190;
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
              if ((*puVar4 & temp_v6) != 0 || (puVar4[1] & temp_v4) != 0) {
                *(unsigned char *)((int)*(short *)((int)puVar4 + 0x6e) + param_2 + 0x38) = 1;
              }
            } while (temp_v3 < (int)temp_v5);
          }
        }
        temp_v4 = DAT_00571194;
        temp_v6 = DAT_00571190;
        if (temp_v5 < param_5) {
          do {
            puVar4 = *(unsigned int **)(param_4 + temp_v5 * 4);
            if ((*puVar4 & temp_v6) != 0 || (puVar4[1] & temp_v4) != 0) {
              *(unsigned char *)((int)*(short *)((int)puVar4 + 0x6e) + param_2 + 0x38) = 1;
            }
            temp_v3 = temp_v5 * 4;
            temp_v5 = temp_v5 + 2;
            puVar4 = *(unsigned int **)(param_4 + temp_v3 + 4);
            if ((puVar4[1] & temp_v4) != 0 || (*puVar4 & temp_v6) != 0) {
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
