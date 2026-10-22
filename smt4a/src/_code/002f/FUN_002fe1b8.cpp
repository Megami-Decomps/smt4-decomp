/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe1b8` (_code @ 0x2fe1b8, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int FUN_002ee938(...);
int FUN_002ee978(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002ee978. */
extern int wordRefsDiffer_002ee988(unsigned int **, unsigned int *);


unsigned int * FUN_002fe1b8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [8];
  int temp_v6;
  
  temp_v3 = *(unsigned int **)(param_1 + 0x14);
  do {
    temp_v3 = (unsigned int *)*temp_v3;
    temp_v6 = *(unsigned int *)(param_1 + 0x14);
    temp_v2 = wordRefsDiffer_002ee988(&temp_v3,(unsigned int *)&temp_v6);
    if (temp_v2 == 0) {
      return (unsigned int *)0x0;
    }
    FUN_002ee938(temp_v5,param_2);
    FUN_002ee938(temp_v4,temp_v3 + 3);
    temp_v2 = FUN_002ee96a(temp_v4,temp_v5);
    if (temp_v2 != 0) {
      temp_v2 = FUN_002ee978(temp_v3 + 3);
      temp_v1 = FUN_002ee978(param_2);
      if (temp_v2 != temp_v1) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 0;
    }
    _ZN9Obj55aff4D1Ev(temp_v4);
    _ZN9Obj55aff4D1Ev(temp_v5);
    if (temp_v0) {
      return temp_v3 + 2;
    }
  } while( 1 );
}

} /* extern "C" */
