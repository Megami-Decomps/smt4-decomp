/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3db4` (_code @ 0x4c3db4, 0x374 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_00261424(void);
int asdOperatorNewD(void);
int FUN_002e6490(unsigned int *);
int VectorSignedToFloat(...);
int __aeabi_idivmod(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00571448; /* 0x571448 */
extern unsigned int DAT_0057144c; /* 0x57144c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int btlGetMainState(void);
extern unsigned int FUN_0014bef4(unsigned int);
extern int lcgRandomRange(unsigned int);
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_00261424. */
extern int FUN_002626e0(void);
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: FUN_002e6490. */
extern int FUN_003e8244(int, unsigned int);
extern int valueAtF0IsReady(int);
extern int FUN_003eaea0(int, int);
extern unsigned int FUN_003eaf04(int);
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_004c3db4(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar11;
  int temp_v9;
  int *piVar12;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  
  temp_v1 = btlGetMainState();
  piVar12 = (int *)(temp_v1 + 0x1b0);
  temp_v2 = (unsigned int)*(unsigned short *)((int)param_1 + 0x166);
  FUN_0019cac4();
  if (temp_v2 != 0) {
    temp_v10 = *(int *)(temp_v2 + 0x74);
    temp_v3 = FUN_002626e0();
    if (temp_v3 != 0) {
      temp_v4 = FUN_00261424();
      temp_v15 = 0.0f;
      temp_v14 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f < temp_v14) << 0x1f) |
              ((unsigned int)(temp_v14 == 0.0f) << 0x1e);
      in_fpscr = temp_v6 | ((unsigned int)(temp_v14 != temp_v14) << 0x1c);
      temp_v0 = (unsigned char)(temp_v6 >> 0x18);
      if (((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) &&
         (temp_v15 = temp_v14, (int)temp_v14 >= 0x41100001)) {
        temp_v15 = 9.0f;
      }
      temp_v14 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (int)((temp_v15 * 0.3f + 1.0f) * temp_v14 + temp_v15 * temp_v15 * 0.033333335f);
      if (temp_v10 >= 0x98967f) {
        temp_v10 = 9999999;
      }
    }
    *(int *)(temp_v1 + 0x1e4) = *(int *)(temp_v1 + 0x1e4) + temp_v10;
    *(int *)(temp_v1 + 0x1e0) = *(int *)(temp_v1 + 0x1e0) + *(int *)(temp_v2 + 0x7c);
    temp_v8 = *(unsigned short *)(temp_v2 + 2) & 0xffff7fff;
    temp_v6 = *(unsigned int *)(temp_v1 + 0x1e8);
    if (*(unsigned int *)(temp_v1 + 0x1e8) <= temp_v8) {
      temp_v6 = temp_v8;
    }
    *(unsigned int *)(temp_v1 + 0x1e8) = temp_v6;
    temp_v10 = valueAtF0IsReady(temp_v1);
    if (temp_v10 != 0) {
      temp_v10 = FUN_00261424();
      temp_v10 = temp_v10 + 1;
      if (temp_v10 >= 6) {
        temp_v10 = 6;
      }
      temp_v5 = FUN_00261424();
      temp_v3 = 0;
      temp_v15 = (float)VectorSignedToFloat(temp_v5 << 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (0 < temp_v10) {
        temp_v5 = FUN_00261424();
        if ((temp_v5 >= 2) &&
           (temp_v5 = FUN_003eaea0(temp_v1,(int)*(short *)((int)param_1 + 0x166)), 0 < temp_v5)) {
          temp_v4 = FUN_0014bef4(99);
          temp_v14 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          if (temp_v14 <= temp_v15) {
            *(unsigned int *)(temp_v1 + 0x1c8) = 1;
            temp_v3 = 1;
            *piVar12 = temp_v5;
          }
        }
        if (temp_v3 < temp_v10) {
          temp_v2 = FUN_003eaf04(temp_v1);
          puVar7 = (unsigned int *)(temp_v2 << 2);
          asdOperatorNewD();
          if (0 < (int)temp_v2) {
            temp_v13 = (temp_v2 & 1) != 0;
            puVar11 = puVar7 + -1;
            if (temp_v13) {
              *puVar7 = 0;
              puVar11 = puVar7;
            }
            temp_v6 = (unsigned int)temp_v13;
            for (temp_v5 = (int)temp_v2 >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
              puVar11[1] = temp_v6;
              puVar11[2] = temp_v6 + 1;
              puVar11 = puVar11 + 2;
              temp_v6 = temp_v6 + 2;
            }
          }
          temp_v5 = 0;
          if (temp_v5 < (int)temp_v2) {
            do {
              temp_v4 = FUN_0014bef4(temp_v2 & 0xffff);
              __aeabi_idivmod(temp_v4,temp_v2);
              temp_v4 = puVar7[temp_v5];
              puVar7[temp_v5] = puVar7[temp_v9];
              temp_v5 = temp_v5 + 1;
              puVar7[temp_v9] = temp_v4;
            } while (temp_v5 < (int)temp_v2);
          }
          temp_v5 = 0;
          temp_v12 = 0;
          if (temp_v12 < temp_v10) {
            do {
              if (temp_v10 <= temp_v3) break;
              temp_v7 = FUN_003e8244(temp_v1,puVar7[temp_v5]);
              temp_v11 = temp_v3;
              if (0 < temp_v7) {
                piVar12[temp_v3] = temp_v7;
                temp_v11 = temp_v3 + 1;
                piVar12[temp_v3 + 6] = 1;
              }
              temp_v5 = temp_v5 + 1;
              if ((int)(temp_v2 - 1) < temp_v5) {
                temp_v5 = 0;
              }
              temp_v12 = temp_v12 + 1;
              temp_v3 = temp_v11;
            } while (temp_v12 < temp_v10);
          }
          FUN_002e6490(puVar7);
          return;
        }
      }
    }
    else {
      temp_v3 = 0;
      temp_v10 = 0;
      if (*(char *)(temp_v1 + 0x45bb) != '\0') {
        temp_v3 = 0x32;
      }
      do {
        temp_v1 = temp_v2 + temp_v10 * 6;
        if (((*(unsigned short *)(temp_v1 + 0x60) != 0) &&
            ((*(short *)(temp_v1 + 100) == 0 || (temp_v5 = FUN_0018719c(), temp_v5 != 0)))) &&
           ((temp_v5 = lcgRandomRange(99), temp_v5 < (int)((unsigned int)*(unsigned short *)(temp_v1 + 0x62) + temp_v3) ||
            ((*param_1 & DAT_00571448) != 0 || (param_1[1] & DAT_0057144c) != 0)))) {
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60);
          temp_v1 = 0;
          do {
            if (piVar12[temp_v1] == 0 || piVar12[temp_v1] == temp_v6) {
              piVar12[temp_v1] = temp_v6;
              piVar12[temp_v1 + 6] = piVar12[temp_v1 + 6] + 1;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 6);
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 3);
    }
  }
  return;
}

} /* extern "C" */
