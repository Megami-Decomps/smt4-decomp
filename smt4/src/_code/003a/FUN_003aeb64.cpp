/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeb64` (_code @ 0x3aeb64, 0x3d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00255158(int, int);
int FUN_0027e6f4(int, int);
int btlMainFindEntryByListedId(unsigned int *, int);
int btlGetMainState(void);
int FUN_002b7bca(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_2_stack;

extern unsigned char LAB_0021778c; /* 0x21778c */

extern int FUN_002542ec(int);
/* Supplied declaration required: FUN_00255158. */
/* Supplied declaration required: FUN_0027e6f4. */
/* Supplied declaration required: btlMainFindEntryByListedId. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002b7bca. */


int FUN_003aeb64(unsigned int param_1,int param_2)

{
/* irregular: 2 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar7;
  int temp_v5;
  int *piVar9;
  unsigned int *puVar10;
  int temp_v6;
  int temp_v7;
  int aiStack_8c0 [218];
  unsigned int temp_v8 [218];
  int aiStack_1f0 [109];
  int temp_v9;
  int temp_v10 [4];
  int temp_v11;
  
  temp_v5 = 0;
  temp_v10[0] = 0;
  temp_v10[1] = 0;
  temp_v10[3] = param_1;
  temp_v11 = param_2;
  do {
    aiStack_8c0[temp_v5 * 2] = -1;
    temp_v8[temp_v5 * 2] = 0xffffffff;
    temp_v2 = btlGetMainState();
    piVar9 = (int *)(*(int *)(temp_v2 + 0x1e98) + temp_v5 * 0x114);
    if (piVar9 != (int *)0x0) {
      puVar4 = (unsigned int *)btlGetMainState();
      btlMainFindEntryByListedId(puVar4,(int)*(short *)((int)piVar9 + 0x62));
      if (((puVar4 != (unsigned int *)0x0) && ((*puVar4 & 0x10) != 0)) && (piVar9[0x3c] < 0)) {
        temp_v6 = 0;
        temp_v2 = btlGetMainState();
        FUN_0027e6f4(temp_v2,1);
        if ((temp_v2 < 0) && ((char)piVar9[0xf] != '\x02')) {
          temp_v6 = 1;
        }
        temp_v0 = 0;
        temp_v2 = temp_v10[temp_v6];
        if (0 < temp_v2) {
          piVar7 = aiStack_8c0 + temp_v6 * 0xda;
          temp_v3 = temp_v2;
          do {
            temp_v7 = *piVar7;
            piVar7 = piVar7 + 2;
            if (temp_v7 == *(short *)((int)puVar4 + 0x6e)) {
              temp_v0 = 1;
            }
            temp_v3 = temp_v3 - 1;
          } while (temp_v3 != 0);
          if (!temp_v0) {
            aiStack_8c0[temp_v6 * 0xda + temp_v2 * 2] = (int)*(short *)((int)puVar4 + 0x6e);
            (aiStack_8c0 + temp_v6 * 0xda + temp_v2 * 2)[1] = *piVar9;
            temp_v10[temp_v6] = temp_v2 + 1;
          }
        }
        else {
          aiStack_8c0[temp_v6 * 0xda + temp_v2 * 2] = (int)*(short *)((int)puVar4 + 0x6e);
          (aiStack_8c0 + temp_v6 * 0xda + temp_v2 * 2)[1] = *piVar9;
          temp_v10[temp_v6] = temp_v2 + 1;
        }
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x6d);
  if (temp_v10[0] >= 2) {
    FUN_002b7bca(aiStack_8c0,temp_v10[0],8,&LAB_0021778c);
  }
  if (temp_v10[1] >= 2) {
    FUN_002b7bca(temp_v8,temp_v10[1],8,&LAB_0021778c);
  }
  temp_v2 = 0;
  temp_v5 = 0;
  temp_v9 = 0;
  do {
    temp_v6 = btlGetMainState();
    temp_v6 = *(int *)(temp_v6 + 0x1e98) + temp_v5 * 0x114;
    if (temp_v6 != 0) {
      puVar4 = (unsigned int *)btlGetMainState();
      btlMainFindEntryByListedId(puVar4,(int)*(short *)(temp_v6 + 0x62));
      if ((puVar4 != (unsigned int *)0x0) && (temp_v4 = *puVar4, (temp_v4 & 1) != 0)) {
        puVar10 = (unsigned int *)(temp_v11 + temp_v2 * 0x18);
        if ((temp_v4 & 2) != 0) {
          *puVar10 = 0xffffffff;
          *(unsigned char *)(puVar10 + 1) = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
        }
        else if ((temp_v4 & 8) != 0) {
          temp_v4 = 1;
          *puVar10 = (unsigned int)*(unsigned short *)((int)puVar4 + 0xce);
          *(unsigned char *)(puVar10 + 1) = 0;
          puVar10[2] = 0;
          do {
            temp_v3 = FUN_002542ec(temp_v4 - 1);
            if ((temp_v3 != 0) && ((unsigned int)*(unsigned short *)(temp_v3 + 0x46) == *puVar10)) {
              puVar10[3] = temp_v4;
              break;
            }
            temp_v4 = temp_v4 + 1;
          } while ((int)temp_v4 < 4);
        }
        else {
          if ((temp_v4 & 0x10) == 0) goto LAB_003aef18;
          temp_v0 = 0;
          if (0 < temp_v9) {
            piVar9 = aiStack_1f0;
            temp_v3 = temp_v9;
            do {
              if (*piVar9 == (int)*(short *)((int)puVar4 + 0x6e)) {
                temp_v0 = 1;
              }
              temp_v3 = temp_v3 - 1;
              piVar9 = piVar9 + 1;
            } while (temp_v3 != 0);
            if (temp_v0) goto LAB_003aef18;
          }
          aiStack_1f0[temp_v9] = (int)*(short *)((int)puVar4 + 0x6e);
          *puVar10 = (unsigned int)*(unsigned short *)((int)puVar4 + 0xce);
          *(unsigned char *)(puVar10 + 1) = 1;
          temp_v9 = temp_v9 + 1;
          if (*(int *)(temp_v6 + 0xf0) >= 0) {
            puVar10[2] = 1;
            puVar10[3] = 0;
          }
          else {
            temp_v3 = btlGetMainState();
            FUN_0027e6f4(temp_v3,1);
            if ((temp_v3 < 0) && (*(char *)(temp_v6 + 0x3c) != '\x02')) {
              puVar10[2] = 1;
            }
            else {
              puVar10[2] = 0;
            }
            puVar10[3] = 0;
            temp_v4 = 0;
            if ((int)temp_v4 < temp_v10[puVar10[2]]) {
              do {
                if (aiStack_8c0[puVar10[2] * 0xda + temp_v4 * 2] == -1) break;
                if (aiStack_8c0[puVar10[2] * 0xda + temp_v4 * 2] ==
                    (int)*(short *)((int)puVar4 + 0x6e)) {
                  puVar10[3] = temp_v4;
                  break;
                }
                temp_v4 = temp_v4 + 1;
              } while ((int)temp_v4 < temp_v10[puVar10[2]]);
            }
          }
        }
        *(unsigned short *)(puVar10 + 4) = *(unsigned short *)((int)puVar4 + 0x1c6);
        temp_v1 = FUN_00255158((int)*(short *)(temp_v6 + 0x62),7);
        *(unsigned char *)((int)puVar10 + 0x12) = temp_v1;
        temp_v1 = FUN_00255158((int)*(short *)(temp_v6 + 0x62),10);
        *(unsigned char *)((int)puVar10 + 0x13) = temp_v1;
        temp_v1 = FUN_00255158((int)*(short *)(temp_v6 + 0x62),0xb);
        *(unsigned char *)(puVar10 + 5) = temp_v1;
        temp_v6 = FUN_00255158((int)*(short *)(temp_v6 + 0x62),0x14);
        temp_v2 = temp_v2 + 1;
        *(unsigned char *)((int)puVar10 + 0x15) = temp_v6 != 0;
      }
    }
LAB_003aef18:
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x6d) {
      return temp_v2;
    }
  } while( 1 );
}

} /* extern "C" */
