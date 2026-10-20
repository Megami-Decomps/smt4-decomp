/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a3cc` (_code @ 0x37a3cc, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013041c(int, int, int);
int FUN_002b4e00(int, unsigned int, unsigned int, int *);
int nw_io_FileStream_FilePosition_Skip(void);

typedef struct fn_0037a3cc_arg0 fn_0037a3cc_arg0;
struct fn_0037a3cc_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x2f];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    int field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
    int field_0x44; /* +0x44 */
};

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0013041c. */
/* Supplied declaration required: FUN_002b4e00. */
/* Supplied declaration required: nw_io_FileStream_FilePosition_Skip. */


int FUN_0037a3cc(fn_0037a3cc_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  romwright_code *pcVar5;
  int temp_v4;
  
  temp_v3 = param_1->field_0x3c;
  temp_v0 = param_1->field_0x40 + param_1->field_0x44;
  if (temp_v0 < temp_v3 + param_3) {
    param_3 = ((temp_v0 - temp_v3) + 0x1f) & 0xffffffe0;
  }
  temp_v1 = param_1->field_0x34;
  temp_v4 = param_4;
  FUN_0013041c(temp_v1,temp_v3,0);
  if (temp_v1 != 0) {
    temp_v4 = 0;
    temp_v3 = param_1->field_0x34;
    FUN_002b4e00(temp_v3,param_2,param_3,&temp_v4);
    if (temp_v3 != 0) {
      if (0 < temp_v4) {
        nw_io_FileStream_FilePosition_Skip();
      }
      return temp_v4;
    }
    pcVar5 = *(romwright_code **)(param_1 + 1);
    temp_v2 = *(unsigned int *)(param_1->field_0x34 + 0x18);
  }
  else {
    pcVar5 = *(romwright_code **)(param_1 + 1);
    temp_v2 = *(unsigned int *)(param_1->field_0x34 + 0x18);
  }
  if (pcVar5 != (romwright_code *)0x0) {
    (*pcVar5)(temp_v2,*(unsigned int *)&param_1[1].field_0x4);
  }
  return -1;
}

} /* extern "C" */
