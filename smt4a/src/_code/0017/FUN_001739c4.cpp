#include "common.h"

extern "C" {

typedef struct Global59dba4 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 value;
} Global59dba4;
extern Global59dba4 DAT_0059dba4;

/* Returns the signed byte at 0x1 of the global at 0x59DBA4. */
s32 FUN_001739c4(void)
{
    return DAT_0059dba4.value;
}

} /* extern "C" */
