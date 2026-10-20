/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114504` (_code @ 0x114504, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00120faa(unsigned int, unsigned int *);
int FUN_002f8728(unsigned char [16]);
int FUN_002f8760(unsigned char [16]);
int FUN_002ff78c(int, unsigned char [16]);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00120faa. */
extern int *FUN_002ea704(void);
extern int FUN_002eb5f4(void);
extern int FUN_002ee774(unsigned int **, unsigned int **);
extern int FUN_002ee978(unsigned int *);
/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002f8760. */
extern int FUN_002fd454(unsigned int *);
/* Supplied declaration required: FUN_002ff78c. */


void FUN_00114504(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned char temp_v2 [16];
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  
  FUN_002f8728(temp_v2);
  temp_v0 = FUN_002eb5f4();
  FUN_002ff78c(temp_v0 + 0x54,temp_v2);
  temp_v4 = temp_v3;
  while( 1 ) {
    temp_v4 = (unsigned int *)*temp_v4;
    temp_v5 = temp_v3;
    temp_v0 = FUN_002ee774(&temp_v4,&temp_v5);
    if (temp_v0 == 0) break;
    temp_v0 = FUN_002fd454(temp_v4 + 2);
    if ((temp_v0 != 0) && (temp_v0 = FUN_002ee978(temp_v4 + 2), temp_v0 != 0)) {
      puVar4 = temp_v4 + 2;
      piVar2 = (int *)FUN_002ea704();
      temp_v1 = (**(romwright_code **)(*piVar2 + 0x2c))();
      FUN_00120faa(temp_v1,puVar4);
    }
  }
  FUN_002f8760(temp_v2);
  return;
}

} /* extern "C" */
