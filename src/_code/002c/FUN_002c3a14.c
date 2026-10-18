/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3a14` (_code @ 0x2c3a14, 0x3e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0011a3cc. */
/* Supplied declaration required: FUN_00126d14. */
/* Supplied declaration required: FUN_002b634c. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c3a14(int param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  *(unsigned char *)(param_1 + 0x11e8) = 1;
  *(unsigned char *)(param_1 + 0x11e9) = 3;
  *(unsigned char *)(param_1 + 0x5b0) = 1;
  *(unsigned char *)(param_1 + 0x11dc) = 1;
  *(unsigned char *)(param_1 + 0x11e1) = 1;
  temp_v3 = 0;
  temp_v2 = 0;
  *(unsigned char *)(param_1 + 0x5f4) = 0;
  do {
    temp_v4 = temp_v3 + 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(param_1 + temp_v3 * 0x20 + 0x1204) = 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(param_1 + temp_v4 * 0x20 + 0x1204) = 1;
  } while (temp_v2 < 0xc);
  FUN_00126d14(*(unsigned int *)(param_1 + 0x52c));
  if ((((*(char *)(param_1 + 0x11dc) != '\0') || (*(float *)(param_1 + 0x11cc) != 1.0f)) ||
      (*(float *)(param_1 + 0x11d0) != 1.0f)) ||
     ((*(float *)(param_1 + 0x11d4) != 1.0f || (*(float *)(param_1 + 0x11d8) != 1.0f)))) {
    *(unsigned int *)(param_1 + 0x11cc) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d0) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d4) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x11d8) = 0x3f800000;
    FUN_002b634c(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x11cc);
  }
  *(unsigned char *)(param_1 + 0x11dc) = 0;
  temp_v0 = *(char *)(param_1 + 0x11e1);
  puVar6 = (unsigned short *)0x0;
  temp_v5 = temp_v0 == '\0';
  if (temp_v5) {
    temp_v0 = *(char *)(param_1 + 0x11dd);
  }
  if (temp_v5 && temp_v0 == '\0') {
    temp_v0 = *(char *)(param_1 + 0x11de);
    temp_v5 = temp_v0 == '\0';
    if (temp_v5) {
      temp_v0 = *(char *)(param_1 + 0x11df);
    }
    temp_v6 = temp_v5 && temp_v0 == '\0';
    if (temp_v5 && temp_v0 == '\0') {
      temp_v6 = *(char *)(param_1 + 0x11e0) == '\0';
    }
    if (!temp_v6) {
      FUN_0011a3cc(0,0,0,0);
    }
  }
  else {
    FUN_0011a3cc(0,0,0,0);
  }
  temp_v1 = (unsigned short)*(unsigned char *)(param_1 + 0x5b0);
  if ((*(unsigned char *)(param_1 + 0x5b0) == 0) &&
     (temp_v1 = (short)param_1 + 0x530, *(int *)(param_1 + 0x530) == 0x3f800000)) {
    temp_v5 = 0;
    if (*(float *)(param_1 + 0x534) == 0.0f) {
      temp_v5 = *(float *)(param_1 + 0x538) == 0.0f;
    }
    if (temp_v5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *puVar6 = temp_v1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
