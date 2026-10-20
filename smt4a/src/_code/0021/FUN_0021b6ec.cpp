/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b6ec` (_code @ 0x21b6ec, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(int *, int, int, unsigned char *);
int FUN_002e6354(int *, int);
int FUN_0031f208(int);

extern unsigned char LAB_00221a6c; /* 0x221a6c */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031f208. */


void FUN_0021b6ec(int param_1)

{
/* irregular: 19 unstructured edge(s); 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char *puVar6;
  int iStack_d8;
  unsigned char temp_v5 [176];
  
  FUN_002e6354(&iStack_d8,0xb0);
  temp_v4 = 0;
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x600)) {
    do {
      temp_v1 = param_1 + temp_v0 * 4;
      temp_v3 = (int)**(short **)(temp_v1 + 0x5a8);
      if (temp_v3 >= 201) {
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        temp_v5[temp_v3] = 0x3e;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (temp_v3 == 0x16) {
        temp_v5[temp_v4 * 8] = 0x42;
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (temp_v3 < 0x17) {
        switch(**(short **)(temp_v1 + 0x5a8)) {
        case 1:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x35;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 2:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x36;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 3:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x37;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 4:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x38;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 5:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x39;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 6:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x3a;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 7:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x3b;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 8:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x3c;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 10:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x41;
          puVar6[4] = temp_v2;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
          break;
        case 0xc:
          temp_v5[temp_v4 * 8] = 0x4d;
          temp_v3 = temp_v4 * 8;
          temp_v4 = temp_v4 + 1;
          *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
        }
      }
      else if (temp_v3 == 0x20) {
        temp_v5[temp_v4 * 8] = 0x49;
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (0x20 >= temp_v3) {
        switch(temp_v3) {
        case 0x17:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x43;
          puVar6[4] = temp_v2;
          break;
        default:
          goto LAB_0021b914;
        case 0x1a:
          temp_v5[temp_v4 * 8] = 0x44;
          break;
        case 0x1b:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x45;
          puVar6[4] = temp_v2;
          break;
        case 0x1c:
          puVar6 = temp_v5 + (temp_v4 * 8 - 4);
          temp_v2 = 0x47;
          puVar6[4] = temp_v2;
          break;
        case 0x1f:
          temp_v5[temp_v4 * 8] = 0x48;
        }
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (temp_v3 == 0x21) {
        temp_v5[temp_v4 * 8] = 0x4a;
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (temp_v3 == 0x22) {
        puVar6 = temp_v5 + (temp_v4 * 8 - 4);
        temp_v2 = 0x4b;
        puVar6[4] = temp_v2;
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (temp_v3 == 0x25) {
        puVar6 = temp_v5 + (temp_v4 * 8 - 4);
        temp_v2 = 0x4c;
        puVar6[4] = temp_v2;
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
      else if (temp_v3 == 0x65) {
        temp_v5[temp_v4 * 8] = 0x46;
        temp_v3 = temp_v4 * 8;
        temp_v4 = temp_v4 + 1;
        *(int *)(temp_v5 + (temp_v3 - 4)) = (int)*(char *)(*(int *)(temp_v1 + 0x5a8) + 6);
      }
LAB_0021b914:
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x600));
  }
  FUN_0010063a(&iStack_d8,temp_v4,8,&LAB_00221a6c);
  temp_v0 = 0;
  if (temp_v0 < temp_v4) {
    do {
      FUN_0031f208(temp_v5[temp_v0 * 8]);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v4);
  }
  return;
}

} /* extern "C" */
