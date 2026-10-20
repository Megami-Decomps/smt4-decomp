/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310ec8` (_code @ 0x310ec8, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9598(...);
int FUN_002e9ec8(...);
int FUN_002e9f00(...);
int FUN_002ea43c(...);
int FUN_002f3dc4(...);
int FUN_002f3dde(...);
int FUN_002f76ca(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002e9598. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
extern int FUN_002f4e86(unsigned int *);
/* Supplied declaration required: FUN_002f76ca. */


void FUN_00310ec8(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *temp_v3;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned char uStack_14;
  
  temp_v3 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    temp_v1 = FUN_002f4e86(param_2);
    if (temp_v1 != 0) {
      if (*(char *)(param_1 + 0x168) != '\0') {
        FUN_002f76ca(*(unsigned int *)(param_1 + 0x78),"invalidurl");
        puVar4 = *(unsigned int **)(param_1 + 0x108);
        *puVar4 = 0;
        puVar4[1] = 0;
        **(unsigned int **)(param_1 + 0x118) = 0;
      }
      else {
        FUN_002e9598(*(unsigned int *)(param_1 + 0x78),param_1 + 0x7c);
        puVar4 = *(unsigned int **)(param_1 + 0x108);
        temp_v2 = *(unsigned int *)(param_1 + 0x114);
        *puVar4 = *(unsigned int *)(param_1 + 0x110);
        puVar4[1] = temp_v2;
        **(unsigned int **)(param_1 + 0x118) = *(unsigned int *)(param_1 + 0x11c);
      }
      temp_v3 = (unsigned int *)*param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      FUN_002f3dc4(temp_v0,&temp_v3,uStack_18,&uStack_14);
    }
    else {
      temp_v3 = (unsigned int *)*param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      FUN_002f3dde(temp_v0,&temp_v3,uStack_18,&uStack_14);
    }
  }
  else {
    FUN_002e9f00(param_1 + 0x90,4);
  }
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
