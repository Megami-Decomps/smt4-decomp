/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb584` (_code @ 0x1eb584, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fa28(int, int);
int libc_strlen(...);

/* stack frame of param_3: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned short DAT_00464da8; /* 0x464da8 */

/* Supplied declaration required: FUN_0017fa28. */
extern int libc_strncmp(unsigned int, int, unsigned int);
/* Supplied declaration required: libc_strlen. */


int FUN_001eb584(int param_1,int param_2,int param_3)

{
/* irregular: 6 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short *puVar11;
  int temp_v10;
  int temp_v11;
  short temp_v12 [2];
  short *temp_v13;
  
  temp_v9 = 0;
  temp_v11 = 0;
LAB_001eb5a0:
  temp_v7 = temp_v11;
  temp_v11 = param_1 + temp_v9;
  temp_v3 = FUN_0017fa28((int)*(char *)(temp_v11 + 1),(int)*(char *)(param_1 + temp_v9));
  if (temp_v3 == 0xffff) {
    if (param_3 == 0) {
      *(unsigned short *)(param_2 + temp_v7 * 2) = 0xffff;
    }
    return temp_v7 + 1;
  }
  puVar11 = &DAT_00464da8;
  temp_v1 = 0;
  temp_v13 = temp_v12;
  temp_v10 = 0;
  temp_v0 = DAT_00464da8;
  while (temp_v0 != 0xf890) {
    if (*(int *)(puVar11 + 6) != 0) {
      temp_v4 = libc_strlen();
      temp_v5 = libc_strncmp(*(unsigned int *)(puVar11 + 6),temp_v11,temp_v4);
      if (temp_v5 == 0) {
        temp_v5 = libc_strlen(*(unsigned int *)(puVar11 + 6));
        temp_v10 = 0;
        if (*(int *)(puVar11 + 2) == 0) goto LAB_001eb788;
        if (*(char *)(temp_v11 + temp_v5) == '\0') goto LAB_001eb774;
        goto LAB_001eb714;
      }
    }
    temp_v10 = temp_v10 + 1;
    puVar11 = &DAT_00464da8 + temp_v10 * 8;
    temp_v0 = *puVar11;
  }
  goto LAB_001eb64c;
  while( 1 ) {
    temp_v10 = temp_v10 * 0x10;
    if (temp_v5 - 0x30U < 10) {
      temp_v10 = (temp_v10 + temp_v5) - 0x30;
    }
    else if (temp_v5 - 0x41U < 6) {
      temp_v10 = (temp_v10 + temp_v5) - 0x37;
    }
    else if (temp_v5 - 0x61U < 6) {
      temp_v10 = (temp_v10 + temp_v5) - 0x57;
    }
    temp_v5 = temp_v6 + 1;
    if (*(char *)(temp_v11 + temp_v6 + 1) == '\0') break;
LAB_001eb714:
    temp_v6 = temp_v5;
    temp_v5 = (int)*(char *)(temp_v11 + temp_v6);
    if (temp_v5 == 0x3e) break;
  }
  temp_v5 = temp_v6 + 1;
  if (temp_v10 == 0xff) {
    temp_v10 = 0;
  }
LAB_001eb774:
  temp_v1 = 1;
  *temp_v13 = (short)temp_v10 + 1;
LAB_001eb788:
  temp_v0 = *puVar11;
  if (temp_v0 == 0xffff) {
LAB_001eb64c:
    if (param_3 == 0) {
      *(short *)(param_2 + temp_v7 * 2) = (short)temp_v3;
    }
    temp_v11 = temp_v7 + 1;
    temp_v9 = temp_v9 + 2;
    temp_v3 = ((temp_v3 >> 0x10) << 0x18) | ((temp_v3 >> 0x18) << 0x10) | ((temp_v3 & 0xff) << 8) |
            ((temp_v3 >> 8) & 0xff);
    if (temp_v3 - 0xf801 < 0x8f) {
      temp_v7 = 0;
      while( 1 ) {
        temp_v8 = (unsigned int)(&DAT_00464da8)[temp_v7 * 8];
        if (temp_v8 == 0xf890) break;
        if (temp_v8 == temp_v3) {
          if (&DAT_00464da8 + temp_v7 * 8 != (unsigned short *)0x0) {
            temp_v7 = *(int *)(temp_v7 * 0x10 + 0x464dac);
            goto LAB_001eb6b0;
          }
          break;
        }
        temp_v7 = temp_v7 + 1;
      }
      temp_v7 = 0;
LAB_001eb6b0:
      temp_v10 = 0;
      if (0 < temp_v7) {
        do {
          temp_v2 = FUN_0017fa28((int)*(char *)(param_1 + temp_v9 + 1),(int)*(char *)(param_1 + temp_v9)
                              );
          if (param_3 == 0) {
            *(unsigned short *)(param_2 + temp_v11 * 2) = temp_v2;
          }
          temp_v10 = temp_v10 + 1;
          temp_v11 = temp_v11 + 1;
          temp_v9 = temp_v9 + 2;
        } while (temp_v10 < temp_v7);
      }
    }
  }
  else {
    if (param_3 == 0) {
      *(unsigned short *)(param_2 + temp_v7 * 2) = (temp_v0 << 8) | (temp_v0 >> 8);
    }
    temp_v9 = temp_v9 + temp_v5;
    temp_v11 = temp_v7 + 1;
    if (temp_v1) {
      if (param_3 == 0) {
        *(short *)(param_2 + (temp_v7 + 1) * 2) = temp_v12[0];
      }
      temp_v11 = temp_v7 + 2;
    }
  }
  goto LAB_001eb5a0;
}

} /* extern "C" */
