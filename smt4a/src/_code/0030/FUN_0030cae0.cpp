/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030cae0` (_code @ 0x30cae0, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(int, int);
int FUN_002ea43c(int);
int FUN_002f3dc4(int, unsigned int **, unsigned int, unsigned char *);
int FUN_002f3dde(int, unsigned int **, unsigned int, unsigned char *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
extern int FUN_002f4e86(unsigned int *);


void FUN_0030cae0(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned char uStack_14;
  
  temp_v2 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    temp_v1 = FUN_002f4e86(param_2);
    if (temp_v1 != 0) {
      if (*(unsigned int **)(param_1 + 0x188) != (unsigned int *)0x0) {
        **(unsigned int **)(param_1 + 0x188) = *(unsigned int *)(param_1 + 0x13c);
      }
      temp_v2 = (unsigned int *)*param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      FUN_002f3dc4(temp_v0,&temp_v2,uStack_18,&uStack_14);
    }
    else {
      temp_v2 = (unsigned int *)*param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      FUN_002f3dde(temp_v0,&temp_v2,uStack_18,&uStack_14);
    }
  }
  else {
    FUN_002e9f00(param_1 + 0x98,4);
  }
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
