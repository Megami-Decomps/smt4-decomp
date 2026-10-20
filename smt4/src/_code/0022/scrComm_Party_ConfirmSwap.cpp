/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Party_ConfirmSwap` (_code @ 0x223044, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrWorkGetValue(int);
int scrWorkSetValue(...);
int FUN_00254e2c(int, int, unsigned int, int, int);
int FUN_0028ed3c(int, int, int);
int FUN_0028ee90(void);
int FUN_0028eeb8(int);
int dataTable1bOr1cGetRecord(void);
int FUN_002bff50(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: FUN_00254e2c. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: FUN_0028ed3c. */
/* Supplied declaration required: FUN_0028ee90. */
/* Supplied declaration required: FUN_0028eeb8. */
extern int FUN_0029022c(void);
extern int FUN_002903f0(void);
extern unsigned int scrGetArg(unsigned int);
extern int fileSlotGetBuffer(unsigned int);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: FUN_002bff50. */


unsigned int scrComm_Party_ConfirmSwap(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetCommandFrame();
  if (temp_v2 == 0) {
    FUN_0028eeb8(temp_v1);
    scrWorkSetValue(0);
    scrWorkSetValue(1,0);
  }
  temp_v3 = fileSlotGetBuffer(0x1e);
  temp_v2 = scrWorkGetValue(0);
  if (temp_v2 == 0) {
    FUN_0028ed3c(temp_v1,0,1);
    FUN_002bff50();
    temp_v4 = scrWorkGetValue(1);
    FUN_00254e2c(temp_v3,0,temp_v4,6,0);
    temp_v2 = scrWorkGetValue(1);
    scrWorkSetValue(1,temp_v2 + 1);
    if (temp_v3 == 1) {
      scrWorkSetValue(1,0);
      temp_v2 = FUN_0029022c();
      if (temp_v2 != 0) {
        temp_v2 = FUN_002903f0();
        dataTable1bOr1cGetRecord();
        dataTable1bOr1cGetRecord();
        if ((temp_v2 != 0 && temp_v1 != 0) &&
           ((temp_v0 = *(char *)(temp_v2 + 6), (temp_v0 != '\x05' && temp_v0 != '\x04') && temp_v0 != '\x01'
            || (*(char *)(temp_v1 + 6) != '\0')))) {
          FUN_0028ee90();
        }
      }
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
