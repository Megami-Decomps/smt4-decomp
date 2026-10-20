/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105824` (_code @ 0x105824, 0x82 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int, int);
int FUN_002e6dd4(int, int);
int FUN_002ea668(int [22]);
int FUN_002ea6bc(int [22], unsigned char *, int);
int FUN_002ea6cc(int [22]);
int rt_memcpy(int, unsigned char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */
extern unsigned char *FUN_002ec674(int);
/* Supplied declaration required: rt_memcpy. */


void FUN_00105824(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2 [22];
  unsigned char temp_v3 [20];
  
  puVar1 = (unsigned char *)FUN_002ec674(param_1 + 0xc);
  temp_v1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  if (temp_v1 >= 0x41) {
    FUN_002ea668(temp_v2);
    FUN_002ea6bc(temp_v2,puVar1,temp_v1);
    FUN_002ea6cc(temp_v2);
    temp_v1 = 0x10;
    puVar1 = temp_v3;
  }
  temp_v2[0] = param_1 + 0x2c;
  FUN_002e6354(temp_v2[0],0x41);
  FUN_002e6dd4(param_1 + 0x6d,0x41);
  rt_memcpy(temp_v2[0],puVar1,temp_v1);
  rt_memcpy(param_1 + 0x6d,puVar1,temp_v1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1;
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v0 + 0x2c) = *(unsigned char *)(temp_v0 + 0x2c) ^ 0x36;
    *(unsigned char *)(temp_v0 + 0x6d) = *(unsigned char *)(temp_v0 + 0x6d) ^ 0x5c;
  } while (temp_v1 < 0x40);
  return;
}

} /* extern "C" */
