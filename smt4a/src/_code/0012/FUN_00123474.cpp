/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123474` (_code @ 0x123474, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002f3dc4(void);
int FUN_002f3dde(int, int *, unsigned int, unsigned char [4]);
int FUN_002f674e(unsigned int);

/* stack frame of param_3: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned char sp30; /* 0x30: local_30 */
} param_3_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern int FUN_002ea6fc(unsigned int *);
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: FUN_002f674e. */


void FUN_00123474(unsigned int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned char temp_v5 [4];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v3,temp_v0 + 0x58);
  temp_v2 = *param_3;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,temp_v2);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ea6fc(param_2);
    temp_v4 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (temp_v1 != 0) {
      FUN_002f3dc4();
    }
    else {
      FUN_002f3dde(temp_v0,&temp_v4,uStack_18,temp_v5);
    }
  }
  FUN_002f674e(param_1);
  FUN_002e6e5c(temp_v3);
  return;
}

} /* extern "C" */
