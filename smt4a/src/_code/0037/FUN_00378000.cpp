/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378000` (_code @ 0x378000, 0x918 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00281b94(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00580ca0; /* 0x580ca0 */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00281b94. */


void FUN_00378000(void)

{
/* irregular: 4 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  unsigned long long temp_v5;
  
  temp_v0 = FUN_00162e8c();
  temp_v5 = 0x42f00000;
  temp_v4 = 0x3c8efa3500000000;
  temp_v2 = 0;
  do {
    temp_v1 = DAT_00580ca0 + temp_v2 * 0x3c;
    if (*(char *)(temp_v1 + 0x90) != '\0') {
      if (*(short *)(temp_v1 + 0xa6) == 0x10) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 10) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0xb) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0xc) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x17) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x15) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x14) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x19) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x1a) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x1d) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x27) {
        if (*(char *)(temp_v0 + 0x1525) != '\0') goto LAB_003788d0;
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x28) {
        if (*(char *)(temp_v0 + 0x1524) != '\0') goto LAB_003788d0;
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x29) {
        if (*(char *)(temp_v0 + 0x1526) != '\0') goto LAB_003788d0;
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x2e) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x33) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x36) {
        *(unsigned int *)(temp_v1 + 0xb8) = *(unsigned int *)(temp_v1 + 0x94);
        *(unsigned int *)(temp_v1 + 0xc0) = *(unsigned int *)(temp_v1 + 0x9c);
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        FUN_001bc124();
        *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) - temp_v3 * (float)temp_v5;
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        FUN_001bbf0c();
        *(float *)(temp_v1 + 0xc0) = *(float *)(temp_v1 + 0xc0) - temp_v3 * (float)temp_v5;
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x38) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x39) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x3a) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x3b) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x5f) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x55) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x56) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x57) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4e) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x44) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4f) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x60) {
        *(unsigned int *)(temp_v1 + 0xc0) = *(unsigned int *)(temp_v1 + 0x9c);
        *(unsigned int *)(temp_v1 + 0xb8) = *(unsigned int *)(temp_v1 + 0x94);
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        FUN_001bc124();
        *(float *)(temp_v1 + 0xb8) = *(float *)(temp_v1 + 0xb8) - temp_v3 * (float)temp_v5;
        temp_v3 = *(float *)(temp_v1 + 0xc4) * (float)((unsigned long long)temp_v4 >> 0x20);
        FUN_001bbf0c();
        *(float *)(temp_v1 + 0xc0) = *(float *)(temp_v1 + 0xc0) - temp_v3 * (float)temp_v5;
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x50) {
        if (*(short *)(temp_v1 + 0xa4) == 2) goto LAB_003788d0;
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x25) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x45) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x46) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x47) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x48) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x49) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4c) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4a) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x4b) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
      if (*(short *)(temp_v1 + 0xa6) == 0x67) {
        FUN_00281b94((int)(short)*(unsigned int *)(temp_v1 + 0xac));
      }
    }
LAB_003788d0:
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x23) {
      if (*(char *)(DAT_00580ca0 + 0x9b4) != '\0') {
        FUN_00281b94(0x201e);
        return;
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
