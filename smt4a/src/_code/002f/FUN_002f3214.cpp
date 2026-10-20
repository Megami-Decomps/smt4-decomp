/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3214` (_code @ 0x2f3214, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002eb462(int *, unsigned int, unsigned int);
int FUN_002f9dd4(int, unsigned int [2]);
int FUN_0030337e(unsigned int *, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002eb462. */
/* Supplied declaration required: FUN_002f9dd4. */
/* Supplied declaration required: FUN_0030337e. */


unsigned int FUN_002f3214(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned int temp_v4 [2];
  
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v2,temp_v0);
  FUN_002eb462(&temp_v3,param_2,param_3);
  temp_v4[0] = temp_v3;
  temp_v1 = param_1;
  FUN_002f9dd4(param_1,temp_v4);
  if (temp_v1 != 0) {
    puVar5 = (unsigned int *)(param_1 + 4);
    FUN_0030337e(puVar5,&temp_v3);
    puVar4 = *(unsigned int **)(param_1 + 0xc);
    if ((puVar4 != puVar5) && (*(unsigned int **)(param_1 + 8) != puVar4)) {
      puVar3 = puVar5 + 2;
      if (puVar4 != puVar3) {
        for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
          temp_v0 = puVar3[1];
          *puVar5 = *puVar3;
          puVar5[1] = temp_v0;
          puVar5 = puVar5 + 2;
        }
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - 8;
    }
    FUN_002e6e5c(temp_v2);
    temp_v0 = 1;
  }
  else {
    FUN_002e6e5c(temp_v2);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
