/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4e14` (_code @ 0x2f4e14, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(unsigned char [12], int *);
int FUN_002e9a64(unsigned int, char [4]);
int FUN_002e9afe(unsigned int, unsigned char *);
int FUN_002f4d2c(unsigned int, int *);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned char sp14; /* 0x14: local_14 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9a64. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002f4d2c. */


void FUN_002f4e14(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [12];
  char temp_v1 [4];
  int temp_v2;
  
  puVar1 = temp_v0;
  temp_v1[0] = -1;
  FUN_002e9a64(param_1,temp_v1);
  if (temp_v1[0] != '\0') {
    if (temp_v1[0] == '\x01') {
      temp_v2 = 0x10001;
    }
    else {
      temp_v2 = 0x80010001;
    }
    puVar1 = (unsigned char *)FUN_002e7908(temp_v0,&temp_v2);
  }
  else {
    FUN_002f4d2c(param_1,&temp_v2);
    FUN_002e7908(temp_v0,&temp_v2);
  }
  FUN_002e9afe(param_2,puVar1);
  return;
}

} /* extern "C" */
