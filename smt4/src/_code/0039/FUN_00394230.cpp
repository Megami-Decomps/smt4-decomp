/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394230` (_code @ 0x394230, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023793c(void);
int FUN_002b5820(int *, int);
int FUN_002c40f8(unsigned char *, int *, int, int);
int FUN_002c526c(void);
int FUN_00351c58(void);
int FUN_00351c88(unsigned int *);
int software_interrupt(int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp220; /* 0x220: local_220 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0023793c. */
/* Supplied declaration required: FUN_002b5820. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern int FUN_00351c08(unsigned int *, int *);
/* Supplied declaration required: FUN_00351c58. */
/* Supplied declaration required: FUN_00351c88. */
extern int FUN_00351cd0(unsigned int *);


unsigned int FUN_00394230(int *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  unsigned int uStack_21c;
  int iStack_218;
  unsigned char temp_v3 [500];
  int temp_v4 [2];
  
  *param_2 = 0;
  *param_3 = 0;
  temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 1);
  if (temp_v0 != 0) {
    iStack_218 = *param_1;
    temp_v2 = 0;
    uStack_21c = 0;
    puVar2 = temp_v3;
    FUN_002c40f8(puVar2,&iStack_218,1,0);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    temp_v1 = -0x800000;
    if (((unsigned int)puVar2 & 0x3ff) == 0x3fe) {
      return 0;
    }
    *(unsigned char *)(param_1 + 1) = 0;
    FUN_00351c58();
    *param_2 = temp_v1;
    if (-1 < temp_v1) {
      return 1;
    }
    FUN_00351c88(param_3);
    temp_v1 = *param_1;
  }
  else {
    FUN_0023793c();
    if (temp_v0 != 0) {
      return 1;
    }
    piVar4 = temp_v4;
    temp_v4[0] = 0;
    FUN_002b5820(piVar4,0);
    if (-1 < (int)piVar4) {
      piVar4 = (int *)0x0;
      *param_1 = temp_v4[0];
    }
    if ((int)piVar4 < 0) {
      FUN_002c526c();
    }
    temp_v1 = FUN_00351cd0((unsigned int *)&temp_v2);
    *param_2 = temp_v1;
    if (temp_v1 < 0) {
      temp_v1 = *param_1;
    }
    else {
      temp_v1 = FUN_00351c08((unsigned int *)&temp_v2,param_1);
      *param_2 = temp_v1;
      if (-1 < temp_v1) {
        *(unsigned char *)(param_1 + 1) = 1;
        return 0;
      }
      if (*param_2 == -0x36df607c) {
        *param_3 = 0x76bf;
      }
      temp_v1 = *param_1;
    }
  }
  if (temp_v1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return 0;
}

} /* extern "C" */
