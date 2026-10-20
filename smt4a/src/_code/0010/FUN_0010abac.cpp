/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010abac` (_code @ 0x10abac, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010ac08(int *, unsigned char *);
int FUN_002e7908(unsigned char [12], int *);
int FUN_002e9ec8(int, int);
int FUN_002ea446(int *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Supplied declaration required: FUN_0010ac08. */
/* Supplied declaration required: FUN_002e7908. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea446. */


void FUN_0010abac(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char temp_v1 [12];
  int temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4;
  
  puVar2 = temp_v1;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,param_1[0x1a]);
  if (temp_v0 != 0) {
    temp_v2 = 0x80010001;
    FUN_002e7908(temp_v1,&temp_v2);
    temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,temp_v1);
    if (temp_v0 == 0) {
      FUN_002ea446(param_1,0x10);
      return;
    }
  }
  else {
    temp_v4 = 0x80010004;
    puVar2 = (unsigned char *)FUN_002e7908(temp_v3,&temp_v4);
  }
  FUN_0010ac08(param_1,puVar2);
  return;
}

} /* extern "C" */
