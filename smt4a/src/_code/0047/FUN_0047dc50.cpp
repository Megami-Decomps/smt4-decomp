/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047dc50` (_code @ 0x47dc50, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(int, int [3], int);
int FUN_00239b10(int);
int FUN_003b5050(void);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: FUN_00239b10. */
/* Supplied declaration required: FUN_003b5050. */


unsigned int FUN_0047dc50(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0 [3];
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    temp_v0[0] = (int)*(short *)(param_1 + 0x1c);
    *(unsigned char *)(param_1 + 0x1a) = 0;
    temp_v0[1] = 0xffffffff;
    temp_v0[2] = *(unsigned int *)(param_1 + 0x1e);
    temp_v1 = *(unsigned int *)(param_1 + 0x22);
    temp_v2 = *(unsigned int *)(param_1 + 0x26);
    temp_v3 = *(unsigned int *)(param_1 + 0x2a);
    temp_v4 = *(unsigned int *)(param_1 + 0x2e);
    temp_v5 = *(unsigned int *)(param_1 + 0x32);
    FUN_003b5050();
    FUN_00239b10(2);
    asdSequenceRequest(4,temp_v0,0x20);
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  return 0;
}

} /* extern "C" */
