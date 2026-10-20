/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aeb38` (_code @ 0x2aeb38, 0x198 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(...);
int FUN_002a5ee4(...);
int FUN_002a60cc(...);
int FUN_002a880c(...);
int asdTMTexTableReleaseNode(...);

typedef struct fn_002aeb38_arg0 fn_002aeb38_arg0;
struct fn_002aeb38_arg0 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    float field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    byte field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x4b];
    byte field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    int field_0x80; /* +0x80 */
    int field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x5];
    byte field_0x8d; /* +0x8d */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
/* Supplied declaration required: FUN_002a5ee4. */
extern int asdTMTexTableNodeIsLoaded(unsigned int);
/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002a880c. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
extern int FUN_002ae98c(int, unsigned int, int, unsigned int);
extern int FUN_002c1d5c(void);


void FUN_002aeb38(fn_002aeb38_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x14 != param_2) {
    if (param_1->field_0x7c != 0) {
      if (param_1->field_0x84 != -1) {
        asdTMTexTableReleaseNode(param_1->field_0x10);
        FUN_002a60cc(g_aocSystem,param_1->field_0x10,param_1->field_0x84);
        param_1->field_0x84 = -1;
        param_1->field_0x80 = 0;
      }
      param_1->field_0x14 = param_2;
    }
    else if (param_1->field_0x8d == 0) {
      if ((param_1->field_0x14 != -1) && (temp_v0 = asdTMTexTableNodeIsLoaded(param_1->field_0x10), temp_v0 == 0)) {
        if (param_1->field_0x18 == -1) {
          param_1->field_0x18 = param_2;
        }
        return;
      }
      if (((param_1->field_0x30 == 0) || (param_1->field_0x28 == 0.0f)) && (param_1->field_0xc != 0))
      {
        asdTMTexTableReleaseNode(param_1->field_0x10,param_1->field_0x14);
        FUN_002a60cc(g_aocSystem,param_1->field_0x10,param_1->field_0x14);
        param_1->field_0xc = 0;
      }
      temp_v0 = FUN_002c1d5c();
      if (temp_v0 != 0) {
        param_1->field_0x7c = 1;
      }
      else {
        if (param_1->field_0xc != 0) {
          param_1->field_0x80 = param_1->field_0xc;
          param_1->field_0x84 = param_1->field_0x14;
        }
        param_1->field_0x14 = param_2;
        temp_v0 = FUN_002ae98c(g_aocSystem,param_1->field_0x10,param_2,1);
        if (temp_v0 != 0) {
          temp_v0 = g_aocSystem;
          FUN_002a5ee4(g_aocSystem,param_1->field_0x10,param_1->field_0x14,0x10000);
        }
        else {
          temp_v0 = param_1->field_0x10;
          asdTMTexTableLoadEntryAsync(temp_v0,param_1->field_0x14);
        }
        param_1->field_0xc = temp_v0;
        if (param_1->field_0x80 != 0) {
          if (-1 < param_3) {
            FUN_002a880c(param_1,4,0);
            return;
          }
          FUN_002a880c(param_1,3,0);
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
