/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d386c` (_code @ 0x3d386c, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned char [4], int);
int FUN_003341b0(unsigned int);
int __aeabi_idivmod(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0057f108; /* 0x57f108 */

extern int FUN_001801a4(void);
extern unsigned int FUN_0019e130(int);
extern int FUN_001ab854(int);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
extern int FUN_002c2c68(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003341b0. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_003d386c(int param_1)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [4];
  int aiStack_8c [25];
  int temp_v11;
  
  temp_v0 = DAT_0057f108;
  temp_v11 = param_1;
  temp_v1 = FUN_002c2c68(DAT_0057f108 + 0x1ec);
  temp_v2 = FUN_002c2c68(temp_v0 + 0x1ec);
  if (temp_v2 < temp_v1) {
    temp_v1 = FUN_002c2c68(temp_v0 + 0x1ec);
  }
  sysMemClear(temp_v10,100);
  temp_v2 = 0;
  if (temp_v2 < temp_v1) {
    do {
      temp_v9 = *(int *)(temp_v0 + temp_v2 * 8 + 0x1b74);
      if (aiStack_8c[temp_v9] == 0) {
        temp_v8 = 0;
        aiStack_8c[temp_v9] = 1;
        if (-1 < temp_v9) {
          temp_v5 = FUN_001ab854(temp_v9);
          temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + 0x60);
          temp_v3 = 1;
          temp_v5 = 0xd;
          do {
            if ((temp_v7 & (1 << (temp_v3 & 0xff))) != 0) {
              temp_v8 = temp_v8 + 1;
            }
            do {
              temp_v5 = temp_v5 - 1;
              temp_v3 = temp_v3 + 1;
              if (temp_v5 == 0) {
                if (temp_v8 != 0) goto LAB_003d3940;
                goto LAB_003d395c;
              }
            } while (temp_v3 == 2);
          } while( 1 );
        }
        temp_v8 = FUN_001801a4();
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v8 + 0x5e);
LAB_003d3940:
        temp_v8 = 0;
        if (temp_v7 != 0) {
          temp_v5 = temp_v0 + temp_v9 * 4;
          temp_v3 = 1;
          while( 1 ) {
            if ((temp_v7 & (1 << (temp_v3 & 0xff))) != 0) {
              if (*(int *)(temp_v5 + 0x31e4) == temp_v8) {
                temp_v4 = FUN_0019e130((int)(short)temp_v3);
                *(unsigned int *)(temp_v5 + 0x3248) = temp_v4;
                break;
              }
              temp_v8 = temp_v8 + 1;
            }
            temp_v3 = temp_v3 + 1;
            if ((int)temp_v3 >= 0xe) break;
            while (temp_v3 == 2) {
              temp_v3 = 3;
            }
          }
        }
        else {
LAB_003d395c:
          temp_v8 = 0;
          *(unsigned int *)(temp_v0 + temp_v9 * 4 + 0x3248) = 0xffffffff;
        }
        temp_v9 = temp_v0 + temp_v9 * 4;
        temp_v5 = *(int *)(temp_v9 + 0x3180) + 1;
        *(int *)(temp_v9 + 0x3180) = temp_v5;
        if (temp_v5 >= 0x18) {
          __aeabi_idivmod(*(int *)(temp_v9 + 0x31e4) + 1,temp_v8);
          *(unsigned int *)(temp_v9 + 0x3180) = 0;
          *(unsigned int *)(temp_v9 + 0x31e4) = temp_v6;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v1);
  }
  if (temp_v11 == 0) {
    temp_v1 = *(int *)(temp_v0 + 0xbc);
  }
  else {
    temp_v2 = FUN_002a4860(temp_v0 + 0x1ec);
    temp_v1 = FUN_002a4894(temp_v0 + 0x1ec);
    temp_v1 = temp_v1 + temp_v2;
  }
  FUN_003341b0(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + temp_v1 * 8 + 0x1b74) * 4 + 0x3248));
  return;
}

} /* extern "C" */
