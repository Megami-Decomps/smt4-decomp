/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047d904` (_code @ 0x47d904, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fd20(unsigned int *, int);
int FUN_002e3140(void);
int FUN_00426204(void);
int FUN_004262b4(void);
int FUN_004262e4(unsigned int *);
int software_interrupt(int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0017fd20. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_00426204. */
extern int FUN_00426264(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_004262b4. */
/* Supplied declaration required: FUN_004262e4. */
extern int FUN_0042632c(unsigned char *);


unsigned int FUN_0047d904(unsigned int *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2 [512];
  unsigned int temp_v3 [2];
  
  *param_2 = 0;
  *param_3 = 0;
  temp_v0 = (unsigned int)(unsigned char)param_1[1];
  if (temp_v0 != 0) {
    temp_v0 = *param_1;
    software_interrupt(0x24);
    if ((int)temp_v0 < 0) {
      FUN_002e3140();
    }
    temp_v1 = -0x800000;
    if ((temp_v0 & 0x3ff) == 0x3fe) {
      return 0;
    }
    *(unsigned char *)(param_1 + 1) = 0;
    FUN_004262b4();
    *param_2 = temp_v1;
    if (-1 < temp_v1) {
      return 1;
    }
    FUN_004262e4(param_3);
    temp_v0 = *param_1;
  }
  else {
    FUN_00426204();
    if (temp_v0 != 0) {
      return 1;
    }
    temp_v3[0] = 0;
    if (*param_1 != 0) {
      puVar3 = (unsigned int *)0xe0a0183b;
    }
    else {
      puVar3 = temp_v3;
      FUN_0017fd20(puVar3,0);
      if (-1 < (int)puVar3) {
        puVar3 = (unsigned int *)0x0;
        *param_1 = temp_v3[0];
      }
    }
    if ((int)puVar3 < 0) {
      FUN_002e3140();
    }
    temp_v1 = FUN_0042632c(temp_v2);
    *param_2 = temp_v1;
    if (temp_v1 < 0) {
      temp_v0 = *param_1;
    }
    else {
      temp_v1 = FUN_00426264(temp_v2,param_1);
      *param_2 = temp_v1;
      if (-1 < temp_v1) {
        *(unsigned char *)(param_1 + 1) = 1;
        return 0;
      }
      if (*param_2 == -0x36df607c) {
        *param_3 = 0x76bf;
      }
      temp_v0 = *param_1;
    }
  }
  if (temp_v0 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return 0;
}

} /* extern "C" */
