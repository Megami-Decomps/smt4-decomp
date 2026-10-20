/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001624b8` (_code @ 0x1624b8, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00182a9c(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char g_asdTextDefaults; /* 0x5b3d54 */
#ifndef ROMWRIGHT_STORAGE_s________005b3d7c_13_1_DEFINED
#define ROMWRIGHT_STORAGE_s________005b3d7c_13_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s________005b3d7c_13_1 {
    char whole[13];
    unsigned char u1[13];
    signed char s1[13];
};
typedef char romwright_storage_s________005b3d7c_13_1_size_check[(sizeof(union romwright_storage_s________005b3d7c_13_1) == 13) ? 1 : -1];
typedef char romwright_storage_s________005b3d7c_13_1_u1_width_check[(sizeof(((union romwright_storage_s________005b3d7c_13_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s________005b3d7c_13_1_s1_width_check[(sizeof(((union romwright_storage_s________005b3d7c_13_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s________005b3d7c_13_1 s________005b3d7c; /* 0x5b3d7c */

extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_00182a9c. */


void FUN_001624b8(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = param_1[0xd];
  if ((temp_v0 & 8) == 0) {
    switch((char)param_1[0x11]) {
    case 1:
      temp_v3 = 0;
      if (((temp_v0 & 0x80) != 0) || (temp_v1 = (*(romwright_code *)(*(unsigned int *)&s________005b3d7c.u1[0]))(param_1), temp_v1 == 1)
         ) {
        temp_v3 = 1;
      }
      if ((param_1[8] == -1) || ((temp_v3 && ((param_1[0xd] & 2U) != 0)))) {
        do {
          piVar2 = param_1;
          FUN_00182a9c();
        } while (piVar2 == (int *)0x0);
        *(unsigned char *)((int)param_1 + 0xad) = 1;
        return;
      }
      temp_v1 = param_1[8];
      *(unsigned char *)((int)param_1 + 0xad) = 0;
      if (temp_v1 < -1) {
        temp_v2 = 0;
        if (temp_v1 != 0 && -1 < -temp_v1) {
          do {
            piVar2 = param_1;
            FUN_00182a9c();
            if (piVar2 != (int *)0x0) break;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < -temp_v1);
        }
        param_1[9] = 0;
        return;
      }
      temp_v1 = param_1[9];
      param_1[9] = temp_v1 + 1;
      if (param_1[8] < temp_v1 + 1) {
        FUN_00182a9c(param_1);
        param_1[9] = 0;
        return;
      }
      break;
    case 2:
      param_1[0xc] = param_1[0xc] + 1;
      if ((temp_v0 & 0x20) != 0) {
        if (*(short *)(*param_1 + param_1[2] * 0x20) == -1) {
          param_1[0xd] = temp_v0 | 0x40;
        }
        else if (((temp_v0 & 0x80) == 0) &&
                (temp_v1 = (*(romwright_code *)(*(unsigned int *)&s________005b3d7c.u1[4]))(param_1), temp_v1 != 0)) {
          *(unsigned char *)(param_1 + 0x11) = 1;
          param_1[3] = param_1[2];
          param_1[4] = 0;
          if (temp_v1 == 1) {
            temp_v3 = (param_1[0xd] & 0x400U) != 0;
            UNRECOVERED_JUMPTABLE = (romwright_code *)param_1[2];
            if (temp_v3) {
              UNRECOVERED_JUMPTABLE = (*(romwright_code * *)((unsigned char *)&g_asdTextDefaults + 0x1c));
            }
            if (temp_v3 && UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001626e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(0);
              return;
            }
          }
        }
      }
      else if (((temp_v0 & 0x80) == 0) &&
              (temp_v1 = (*(romwright_code *)(*(unsigned int *)&s________005b3d7c.u1[4]))(param_1), temp_v1 != 0)) {
        if (*(short *)(*param_1 + param_1[2] * 0x20) == -1) {
          *(unsigned char *)(param_1 + 0x11) = 5;
          param_1[0xd] = param_1[0xd] | 0x10;
        }
        else {
          *(unsigned char *)(param_1 + 0x11) = 1;
          param_1[3] = param_1[2];
          param_1[4] = 0;
        }
        if (((temp_v1 == 1) && ((param_1[0xd] & 0x400U) != 0)) &&
           (UNRECOVERED_JUMPTABLE = (*(romwright_code * *)((unsigned char *)&g_asdTextDefaults + 0x1c)), (*(romwright_code * *)((unsigned char *)&g_asdTextDefaults + 0x1c)) != (romwright_code *)0x0)) {
          (*UNRECOVERED_JUMPTABLE)(0);
          return;
        }
      }
      break;
    case 3:
      temp_v1 = padButtonIsPressed(0);
      if (temp_v1 != 0) {
        *(unsigned char *)(param_1 + 0x11) = 1;
      }
      return;
    case 4:
      if (param_1[10] < param_1[0xb]) {
        param_1[10] = param_1[10] + 1;
      }
      else {
        param_1[10] = 0;
        *(unsigned char *)(param_1 + 0x11) = 1;
        param_1[0xb] = 0;
      }
      return;
    case 5:
      param_1[0xc] = param_1[0xc] + 1;
      return;
    }
  }
  return;
}

} /* extern "C" */
