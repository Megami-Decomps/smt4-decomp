/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003398e4` (_code @ 0x3398e4, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable00FindById(void);
int __aeabi_memset4(...);
int memClear(int, int);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int saveGetIndexedMapValue(int);
extern unsigned int FUN_00294090(int, unsigned int);
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: memClear. */


void FUN_003398e4(int param_1)

{
/* irregular: 3 goto(s); 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int aiStack_c0 [42];
  
  temp_v5 = 0;
  temp_v3 = 0x2a;
  do {
    temp_v0 = param_1 + temp_v5 * 8;
    *(unsigned int *)(temp_v0 + 0x1fe4) = 0;
    temp_v3 = temp_v3 - 1;
    temp_v5 = temp_v5 + 1;
    *(unsigned int *)(temp_v0 + 0x1fe8) = 0xffffffff;
  } while (temp_v3 != 0);
  __aeabi_memset4(aiStack_c0,0xa8,0xffffffff);
  __aeabi_memset4(param_1 + 0x43a8,0xa8,0xffffffff);
  memClear(param_1 + 0x357c,0xe10);
  if (((*(unsigned int *)(param_1 + 0x44a8) & 0x40) == 0) && (*(int *)(param_1 + 0x2f34) - 1U >= 4)) {
    temp_v5 = 0;
    temp_v3 = temp_v5;
    do {
      temp_v0 = saveGetIndexedMapValue(temp_v3);
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x48);
      if (temp_v1 != 0) {
        *(unsigned int *)(param_1 + temp_v5 * 4 + 0x43a8) = temp_v1;
        dataTable00FindById();
        aiStack_c0[temp_v5] = (int)*(short *)(temp_v1 + 0x88);
        temp_v5 = temp_v5 + 1;
      }
      temp_v6 = SBORROW4(temp_v5,4);
      temp_v0 = temp_v5 - 4;
      if (temp_v5 < 4) {
        temp_v6 = SBORROW4(temp_v3 + 1,0xc);
        temp_v0 = temp_v3 - 0xb;
        temp_v3 = temp_v3 + 1;
      }
    } while (temp_v0 < 0 != temp_v6);
    *(int *)(param_1 + 0x4390) = temp_v5;
  }
  else {
    temp_v3 = *(int *)(param_1 + 0x2f34);
    if ((*(unsigned int *)(param_1 + 0x44a8) & 0x40) != 0) {
      temp_v3 = 4;
      temp_v5 = 0;
      goto LAB_003399b8;
    }
    temp_v5 = 0;
    if (0 < temp_v3) {
      do {
        *(unsigned int *)(param_1 + 0x43a8) = 0x225;
        while( 1 ) {
          temp_v1 = *(unsigned int *)(param_1 + temp_v5 * 4 + 0x43a8) & 0xffff;
          dataTable00FindById();
          aiStack_c0[temp_v5] = (int)*(short *)(temp_v1 + 0x88);
          temp_v5 = temp_v5 + 1;
          if (temp_v3 <= temp_v5) goto LAB_00339a3c;
LAB_003399b8:
          if (temp_v5 == 0) break;
          if (temp_v5 != 1) {
            if (temp_v5 != 2) {
              if (temp_v5 == 3) {
                *(unsigned int *)(param_1 + 0x43b4) = 0x83;
              }
            }
            else {
              *(unsigned int *)(param_1 + 0x43b0) = 0x218;
            }
          }
          else {
            *(unsigned int *)(param_1 + 0x43ac) = 0x1e1;
          }
        }
      } while( 1 );
    }
LAB_00339a3c:
    *(int *)(param_1 + 0x4390) = temp_v3;
  }
  temp_v5 = 0;
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x4390)) {
    do {
      temp_v0 = 0;
      do {
        temp_v4 = *(int *)(param_1 + temp_v0 * 4 + 0x2134);
        if ((temp_v4 != 0) && (*(int *)(temp_v4 + 4) == aiStack_c0[temp_v3])) goto LAB_00339b20;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x2a);
      temp_v2 = FUN_00294090(aiStack_c0[temp_v3],1);
      temp_v0 = 0;
      do {
        if (*(int *)(param_1 + temp_v0 * 4 + 0x2134) == 0) {
          *(unsigned int *)(param_1 + temp_v0 * 4 + 0x2134) = temp_v2;
          break;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x2a);
      temp_v0 = temp_v5 * 8;
      temp_v5 = temp_v5 + 1;
      *(int *)(param_1 + temp_v0 + 0x1fe8) = aiStack_c0[temp_v3];
LAB_00339b20:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_1 + 0x4390));
  }
  *(int *)(param_1 + 0x438c) = temp_v5;
  return;
}

} /* extern "C" */
