#include "classes/Obj558b24.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f208` (_code @ 0x10f208, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateTimed(int, int);
int FUN_002ea704(void);
int onlineTimeGetNow(unsigned char [8]);
int FUN_002fa434(unsigned char [40], unsigned int);

extern unsigned char LAB_0010f1e9; /* 0x10f1e9 */
extern unsigned char LAB_0010f2ac; /* 0x10f2ac */
extern unsigned char LAB_0010f425; /* 0x10f425 */

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateTimed. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: onlineTimeGetNow. */
extern int FUN_002eba9c(unsigned char *, int);
/* Supplied declaration required: FUN_002fa434. */


void FUN_0010f208(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [40];
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [20];
  
  temp_v0 = FUN_002ea704();
  if (temp_v0 != 0) {
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
    if (temp_v0 != 0) {
      onlineTimeGetNow(temp_v3);
      temp_v0 = FUN_002eba9c(temp_v3,param_1 + 0xd0);
      if (temp_v0 == 0) {
        if (*(char *)(param_1 + 0x80) != '\x02') {
          if (*(char *)(param_1 + 0x80) == '\x03') {
            temp_v1 = FUN_002ea3c0(temp_v2,&LAB_0010f1e9,0,&LAB_0010f2ac);
            FUN_002ea3d0(param_1,temp_v1);
          }
          onlineJobSetStateTimed(param_1,0x32);
          return;
        }
        temp_v1 = FUN_002ea704();
        FUN_002fa434(temp_v2,temp_v1);
        temp_v1 = FUN_002ea3c0(temp_v4,&LAB_0010f425,0,&LAB_0010f2ac);
        FUN_002ea3d0(param_1,temp_v1);
        (((Obj558b24 *)(temp_v2))->Obj558b24::~Obj558b24(), (int)(temp_v2));
        return;
      }
    }
  }
  temp_v1 = FUN_002ea3c0(temp_v2,&LAB_0010f1e9,0,&LAB_0010f2ac);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
