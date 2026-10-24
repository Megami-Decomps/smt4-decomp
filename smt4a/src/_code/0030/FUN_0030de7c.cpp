/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030de7c` (_code @ 0x30de7c, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012575c(int *, int *, int *);
int FUN_00128a54(int *, int, int, int, int *, int *, int, int, int);
int zlibDeflateInitBlock(int *);
int zlibTrStoredBlock(int *, int, int, int);
int zlibBiWindup(int *);
int FUN_0030e3a0(int *, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_001256f4(int *);
/* Supplied declaration required: FUN_0012575c. */
/* Supplied declaration required: FUN_00128a54. */
/* Supplied declaration required: zlibDeflateInitBlock. */
/* Supplied declaration required: zlibTrStoredBlock. */
/* Supplied declaration required: zlibBiWindup. */
/* Supplied declaration required: FUN_0030e3a0. */


void FUN_0030de7c(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  piVar5 = param_1 + 0x20;
  piVar2 = param_1;
  temp_v2 = param_3;
  temp_v6 = param_4;
  if (param_1[0x21] >= 1) {
    if (*(int *)(*param_1 + 0x2c) == 2) {
      temp_v0 = 0xf3ffc07f;
      temp_v5 = 0;
      do {
        if (((temp_v0 & 1) != 0) && ((short)param_1[temp_v5 + 0x25] != 0)) goto LAB_0030def0;
        temp_v5 = temp_v5 + 1;
        temp_v0 = temp_v0 >> 1;
      } while (temp_v5 < 0x20);
      temp_v4 = 1;
      if ((((short)param_1[0x2e] == 0) && ((short)param_1[0x2f] == 0)) &&
         ((short)param_1[0x32] == 0)) {
        temp_v5 = 0x20;
        do {
          if ((short)param_1[temp_v5 + 0x25] != 0) goto LAB_0030def2;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x100);
LAB_0030def0:
        temp_v4 = 0;
      }
LAB_0030def2:
      *(unsigned int *)(*param_1 + 0x2c) = temp_v4;
    }
    FUN_0030e3a0(param_1,param_1 + 0x2c6);
    FUN_0030e3a0(param_1,param_1 + 0x2c9);
    temp_v5 = FUN_001256f4(param_1);
    temp_v0 = (param_1[0x5aa] + 10U) >> 3;
    temp_v1 = (param_1[0x5ab] + 10U) >> 3;
    if (temp_v1 <= temp_v0) {
      temp_v0 = temp_v1;
    }
  }
  else {
    temp_v0 = param_3 + 5;
    temp_v1 = temp_v0;
  }
  if ((temp_v0 >= param_3 + 4U) && (param_2 != 0)) {
    zlibTrStoredBlock(param_1,param_2,param_3,param_4);
  }
  else {
    if ((piVar5[2] == 4) || (temp_v1 == temp_v0)) {
      temp_v0 = param_1[0x5af];
      if ((int)temp_v0 >= 0xe) {
        temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x5ae) | ((param_4 + 2U) << (temp_v0 & 0xff));
        *(short *)(param_1 + 0x5ae) = (short)temp_v0;
        temp_v2 = param_1[5];
        param_1[5] = temp_v2 + 1;
        *(char *)(param_1[2] + temp_v2) = (char)temp_v0;
        temp_v2 = param_1[5];
        param_1[5] = temp_v2 + 1;
        *(char *)(param_1[2] + temp_v2) = (char)((unsigned short)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) =
             (short)(((param_4 + 2U) & 0xffff) >> ((0x10U - param_1[0x5af]) & 0xff));
        param_1[0x5af] = param_1[0x5af] - 0xd;
      }
      else {
        *(unsigned short *)(param_1 + 0x5ae) =
             *(unsigned short *)(param_1 + 0x5ae) | (unsigned short)((param_4 + 2) << (temp_v0 & 0xff));
        param_1[0x5af] = temp_v0 + 3;
      }
      piVar5 = (int *)0x547598;
      piVar2 = (int *)0x547118;
    }
    else {
      temp_v0 = param_1[0x5af];
      if ((int)temp_v0 >= 0xe) {
        temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x5ae) | ((param_4 + 4U) << (temp_v0 & 0xff));
        *(short *)(param_1 + 0x5ae) = (short)temp_v0;
        temp_v3 = param_1[5];
        param_1[5] = temp_v3 + 1;
        *(char *)(param_1[2] + temp_v3) = (char)temp_v0;
        temp_v3 = param_1[5];
        param_1[5] = temp_v3 + 1;
        *(char *)(param_1[2] + temp_v3) = (char)((unsigned short)(short)param_1[0x5ae] >> 8);
        *(short *)(param_1 + 0x5ae) =
             (short)(((param_4 + 4U) & 0xffff) >> ((0x10U - param_1[0x5af]) & 0xff));
        param_1[0x5af] = param_1[0x5af] - 0xd;
      }
      else {
        *(unsigned short *)(param_1 + 0x5ae) =
             *(unsigned short *)(param_1 + 0x5ae) | (unsigned short)((param_4 + 4) << (temp_v0 & 0xff));
        param_1[0x5af] = temp_v0 + 3;
      }
      FUN_00128a54(param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,temp_v5 + 1,piVar5,piVar2,param_2,
                   temp_v2,temp_v6);
      piVar5 = param_1 + 0x262;
      piVar2 = param_1 + 0x25;
    }
    FUN_0012575c(param_1,piVar2,piVar5);
  }
  zlibDeflateInitBlock(param_1);
  if (param_4 != 0) {
    zlibBiWindup(param_1);
  }
  return;
}

} /* extern "C" */
