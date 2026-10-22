/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305298` (_code @ 0x305298, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj559edc.h"

extern "C" {

int FUN_00117906(int, unsigned char [184]);
int FUN_00133394(int, int, unsigned char [184]);
int FUN_00133478(int, unsigned int);
int FUN_0030d2fc(...);
int FUN_00311458(int, int);
int FUN_00311490(unsigned char [184]);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spD0; /* 0xd0: local_d0 */
} param_2_stack;

/* Supplied declaration required: FUN_00117906. */
/* Supplied declaration required: FUN_00133394. */
/* Supplied declaration required: FUN_00133478. */
extern int streamReadU32(int, unsigned int *);
/* Supplied declaration required: FUN_0030d2fc. */
/* Supplied declaration required: FUN_00311458. */
/* Supplied declaration required: FUN_00311490. */


void FUN_00305298(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [2];
  unsigned char temp_v3 [184];
  
  FUN_0030d2fc(param_2);
  temp_v0 = streamReadU32(param_1,temp_v2);
  if (temp_v0 != 0) {
    FUN_00133478(param_2,temp_v2[0]);
    temp_v1 = 0;
    while( 1 ) {
      if (temp_v2[0] <= temp_v1) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      FUN_00311490(temp_v3);
      FUN_00117906(param_1,temp_v3);
      if (*(char *)(param_1 + 4) != '\0') break;
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0xb8;
        FUN_00311458(param_2,temp_v0);
      }
      else {
        FUN_00133394(param_2,temp_v0,temp_v3);
      }
      ((Obj559edc *)temp_v3)->Obj559edc::~Obj559edc();
      temp_v1 = temp_v1 + 1;
    }
    FUN_0030d2fc();
    ((Obj559edc *)temp_v3)->Obj559edc::~Obj559edc();
  }
  return;
}

} /* extern "C" */
