/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a4c74` (_code @ 0x4a4c74, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00184310(void);
int FUN_00184528(int *, int);
int FUN_00202400(void);
int FUN_004a5d5c(int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_00202400. */
extern int sceneTexturesAreLoaded(void);
/* Supplied declaration required: FUN_004a5d5c. */
extern int utilityReturnSuccess(int);
extern int FUN_004cfe4c(int *);


void FUN_004a4c74(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x24))(param_1);
  if (((temp_v0 == 0) || (temp_v0 = utilityReturnSuccess((int)param_1 + 0x96), temp_v0 != 0)) ||
     (((char)param_1[0x218] == '\x01' && (temp_v0 = sceneTexturesAreLoaded(), temp_v0 == 0)))) {
    return;
  }
  param_1[5] = 1;
  param_1[6] = 0;
  FUN_00184528(param_1 + 0x37,8);
  FUN_00184528(param_1 + 0x37,9);
  if ((char)param_1[0x218] != '\0') {
    if ((char)param_1[0x218] != '\x01') {
      FUN_004a5d5c(param_1);
      return;
    }
  }
  else {
    FUN_00202400();
    if ((char)param_1[0x218] == '\0') {
      temp_v0 = FUN_004cfe4c(param_1 + 8);
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v0 * 8 + 0x21a);
      FUN_00184310();
      if ((*(unsigned char *)(temp_v1 + 0xb3) & 2) == 0) {
        temp_v2 = 0x30;
      }
      else {
        temp_v2 = 0x121;
      }
      sysPlaySe(temp_v2);
      FUN_004a5d5c(param_1);
      return;
    }
  }
  sysPlaySe(0x48);
  FUN_004a5d5c(param_1);
  return;
}

} /* extern "C" */
