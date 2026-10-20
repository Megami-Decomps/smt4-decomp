/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf880` (_code @ 0x4cf880, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001807a0(int);
int FUN_00181948(int);
int FUN_00182348(int);
int FUN_00184758(int, int, int);
int FUN_004cf8dc(int, int);
int FUN_004d0310(int);
int FUN_004d0738(int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int __aeabi_idivmod(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001807a0. */
/* Supplied declaration required: FUN_00181948. */
/* Supplied declaration required: FUN_00182348. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_004cf8dc. */
/* Supplied declaration required: FUN_004d0310. */
/* Supplied declaration required: FUN_004d0738. */
/* Supplied declaration required: __aeabi_idivmod. */


/* WARNING: Removing unreachable block (ram,0x004cf8ec) */

int FUN_004cf880(int param_1)

{
/* irregular: 6 unstructured edge(s); irregular input(s): in_d8, in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  unsigned int unaff_r4;
  short *psVar8;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  unsigned long long in_d8;
  
  FUN_004d0738(param_1 + 0x818,param_1 + 0x20);
  (**(romwright_code **)(**(int **)(param_1 + 0x84c) + 0xc))(*(int **)(param_1 + 0x84c),param_1 + 0x20);
  FUN_004d0310(param_1 + 0x20);
  FUN_004cf8dc(param_1 + 0xdc,2);
  FUN_004cf8dc(param_1 + 0xdc,3);
  temp_v3 = param_1 + 0x78c;
  if (temp_v3 == 0) {
    return 1;
  }
  temp_v2 = *(int *)(param_1 + 0x790);
  temp_v6 = temp_v2 < 0;
  if (temp_v6) {
    temp_v2 = *(int *)(param_1 + 0x794);
  }
  if (temp_v6 && temp_v2 < 0) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x812) == '\0') && (*(int *)(param_1 + 0x7d8) != 0)) {
    temp_v4 = (int)*(short *)(param_1 + 0x7dc);
    temp_v2 = (int)*(short *)(param_1 + 0x7de);
    psVar8 = (short *)(*(int *)(param_1 + 0x7d8) + temp_v4 * 0xc);
    temp_v8 = (float)VectorUnsignedToFloat((unsigned int)(unsigned short)psVar8[4],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v8 / 1.0f,3);
    if (temp_v2 >= (int)(temp_v7 & 0xffff)) {
      if ((char)psVar8[5] != '\0') {
        if (*(char *)(param_1 + 0x7e0) != '\0') {
          *(int *)(param_1 + 0x798) = (int)psVar8[2] << 0xc;
          *(int *)(param_1 + 0x79c) = (int)psVar8[3] << 0xc;
        }
        else {
          *(int *)(param_1 + 0x798) = (int)*psVar8 << 0xc;
          *(int *)(param_1 + 0x79c) = (int)psVar8[1] << 0xc;
        }
        *(unsigned short *)(param_1 + 0x7de) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x7e0) != '\0') {
          *(int *)(param_1 + 0x798) = (int)*psVar8 << 0xc;
          *(int *)(param_1 + 0x79c) = (int)psVar8[1] << 0xc;
        }
        else {
          *(int *)(param_1 + 0x798) = (int)psVar8[2] << 0xc;
          *(int *)(param_1 + 0x79c) = (int)psVar8[3] << 0xc;
        }
        temp_v6 = *(char *)(param_1 + 0x810) != '\0';
        temp_v2 = 0;
        if (temp_v6) {
          temp_v2 = *(int *)(param_1 + 0x804);
        }
        if ((temp_v6 && temp_v2 != 0) && (*(int *)(temp_v2 + *(short *)(param_1 + 0x808) * 0x1c) != -1)) {
          temp_v0 = *(short *)(param_1 + 0x808) + 1;
          *(short *)(param_1 + 0x808) = temp_v0;
          piVar5 = (int *)(*(int *)(param_1 + 0x804) + temp_v0 * 0x1c);
          temp_v2 = *piVar5;
          if (temp_v2 != -1 && temp_v2 != -3) {
            if (temp_v2 != -2) {
              FUN_00184758(temp_v3,(int)(short)temp_v2,(int)(char)piVar5[1]);
            }
            else {
              *(unsigned short *)(param_1 + 0x808) = 0;
              FUN_00184758(temp_v3,(int)(short)**(unsigned int **)(param_1 + 0x804),
                           (int)*(char *)(*(unsigned int **)(param_1 + 0x804) + 1));
            }
          }
          else {
            *(unsigned char *)(param_1 + 0x812) = 1;
          }
        }
        else {
          *(unsigned char *)(param_1 + 0x812) = 1;
        }
      }
    }
    else {
      temp_v8 = (float)VectorUnsignedToFloat((unsigned int)(unsigned short)psVar8[4],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = VectorFloatToUnsigned(temp_v8 / 1.0f,3) & 0xffff;
      if (*(char *)(param_1 + 0x7e0) != '\0') {
        temp_v2 = __aeabi_idivmod(((int)*psVar8 - (int)psVar8[2]) * 0x1000,temp_v7,temp_v2,temp_v4,in_d8,
                              unaff_r4);
        *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + temp_v2;
        temp_v2 = __aeabi_idivmod(((int)psVar8[1] - (int)psVar8[3]) * 0x1000,temp_v7);
        *(int *)(param_1 + 0x79c) = *(int *)(param_1 + 0x79c) + temp_v2;
      }
      else {
        temp_v2 = __aeabi_idivmod(((int)psVar8[2] - (int)*psVar8) * 0x1000,temp_v7,temp_v2,temp_v4,in_d8,
                              unaff_r4);
        *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + temp_v2;
        temp_v2 = __aeabi_idivmod(((int)psVar8[3] - (int)psVar8[1]) * 0x1000,temp_v7);
        *(int *)(param_1 + 0x79c) = *(int *)(param_1 + 0x79c) + temp_v2;
      }
      temp_v6 = *(char *)(param_1 + 0x7e0) != '\0';
      psVar8 = (short *)(*(int *)(param_1 + 0x7d8) + *(short *)(param_1 + 0x7dc) * 0xc);
      temp_v2 = (int)psVar8[2];
      temp_v4 = (int)*psVar8;
      temp_v5 = temp_v2 - temp_v4;
      if (temp_v6) {
        temp_v5 = temp_v4 - temp_v2;
      }
      if (temp_v6) {
        temp_v2 = temp_v4;
      }
      temp_v4 = *(int *)(param_1 + 0x798) >> 0xc;
      if (temp_v5 >= 1) {
        if (temp_v2 <= temp_v4) {
          *(int *)(param_1 + 0x798) = temp_v2 << 0xc;
        }
      }
      else if (temp_v4 <= temp_v2) {
        *(int *)(param_1 + 0x798) = temp_v2 << 0xc;
      }
      temp_v6 = *(char *)(param_1 + 0x7e0) != '\0';
      temp_v4 = *(int *)(param_1 + 0x7d8) + *(short *)(param_1 + 0x7dc) * 0xc;
      temp_v2 = (int)*(short *)(temp_v4 + 6);
      temp_v4 = (int)*(short *)(temp_v4 + 2);
      temp_v5 = temp_v2 - temp_v4;
      if (temp_v6) {
        temp_v5 = temp_v4 - temp_v2;
      }
      if (temp_v6) {
        temp_v2 = temp_v4;
      }
      temp_v4 = *(int *)(param_1 + 0x79c) >> 0xc;
      if (temp_v5 >= 1) {
        if (temp_v2 <= temp_v4) {
          *(int *)(param_1 + 0x79c) = temp_v2 << 0xc;
        }
      }
      else if (temp_v4 <= temp_v2) {
        *(int *)(param_1 + 0x79c) = temp_v2 << 0xc;
      }
      *(short *)(param_1 + 0x7de) = *(short *)(param_1 + 0x7de) + 1;
    }
  }
  else {
    *(unsigned char *)(param_1 + 0x812) = 1;
  }
  FUN_001807a0(temp_v3);
  FUN_00182348(temp_v3);
  FUN_00181948(temp_v3);
  temp_v6 = *(char *)(param_1 + 0x812) != '\0';
  temp_v1 = '\0';
  if (temp_v6) {
    temp_v1 = *(char *)(param_1 + 0x813);
  }
  if (temp_v6 && temp_v1 != '\0') {
    temp_v6 = *(char *)(param_1 + 0x814) != '\0';
    temp_v1 = '\0';
    if (temp_v6) {
      temp_v1 = *(char *)(param_1 + 0x815);
    }
    if (temp_v6 && temp_v1 != '\0') {
      *(unsigned char *)(param_1 + 0x816) = 1;
      *(unsigned char *)(param_1 + 0x811) = 1;
      return (int)*(char *)(param_1 + 0x816);
    }
  }
  *(unsigned char *)(param_1 + 0x816) = 0;
  *(unsigned char *)(param_1 + 0x811) = 1;
  return (int)*(char *)(param_1 + 0x816);
}

} /* extern "C" */
