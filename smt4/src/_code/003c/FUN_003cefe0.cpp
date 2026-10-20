/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cefe0` (_code @ 0x3cefe0, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a5d8(int, int, int);
int FUN_0022a918(unsigned int, int);
int FUN_00246134(unsigned int, int, int, unsigned int);
int FUN_00246e24(unsigned int, unsigned int, int, int, int);
int FUN_00250d74(int);
int FUN_00282924(int, int);
int asdOperatorNewC(void);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a5d8. */
/* Supplied declaration required: FUN_0022a918. */
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_00246134. */
/* Supplied declaration required: FUN_00246e24. */
/* Supplied declaration required: FUN_00250d74. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: asdOperatorNewC. */


void FUN_003cefe0(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  
  if ((*(unsigned int *)(*param_1 + 0x44a0) & 4) != 0) {
    return;
  }
  temp_v1 = 1;
  temp_v6 = 0;
  temp_v2 = 1;
  temp_v3 = 0x10;
  asdOperatorNewC();
  temp_v7 = 0;
  do {
    puVar8 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v6 * 0x288);
    if ((((*puVar8 & 1) != 0) && ((*puVar8 & 0x40) == 0)) &&
       (temp_v0 = *(unsigned short *)((int)puVar8 + 0x1c6), (temp_v0 & 0x400) == 0 && (temp_v0 & 4) == 0)) {
      if ((temp_v0 & 0x200) != 0) {
        temp_v2 = 0;
      }
      else {
        temp_v4 = (unsigned int)(short)puVar8[2];
        FUN_00246134(temp_v4,0xf,2,0xffffffff);
        temp_v5 = (unsigned int)(short)puVar8[2];
        FUN_0022a918(temp_v5,0xf);
        if (((temp_v4 | temp_v5) & 0x170000) == 0) {
          temp_v1 = 0;
          *(int *)(temp_v3 + temp_v7 * 4) = (int)(short)puVar8[2];
          temp_v7 = (int)(char)((char)temp_v7 + '\x01');
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 4);
  if (((!temp_v1 && !temp_v2) && (temp_v7 != 0)) &&
     ((temp_v6 = randRange(99), temp_v6 < 0xf || ((*(unsigned int *)(*param_1 + 0x44a8) & 0x1000000) != 0))))
  {
    temp_v6 = randRange((temp_v7 - 1U) & 0xffff);
    temp_v7 = *(int *)(*param_1 + 0x1e98) + *(int *)(temp_v3 + temp_v6 * 4) * 0x114;
    FUN_00246e24(param_3,param_2,temp_v7,0x200,1);
    temp_v6 = *param_1;
    FUN_00282924(temp_v6,(int)*(short *)(temp_v7 + 0x62));
    *(unsigned short *)(temp_v6 + 0x1c8) = 0;
    *(unsigned short *)(temp_v6 + 0x1ca) = *(unsigned short *)(temp_v6 + 0x1ca) | 0x10;
    FUN_0022a5d8(0x1c,temp_v6,1);
  }
  FUN_00250d74(temp_v3);
  return;
}

} /* extern "C" */
