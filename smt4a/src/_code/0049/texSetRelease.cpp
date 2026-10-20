#include "common.h"

extern "C" {

typedef struct TexUse00493154 {
    /* 0x00 */ s32 users;       /* reference count of the loaded set */
    /* 0x04 */ s32 set;         /* 0x65-0x67 select the texture node */
} TexUse00493154;

void asdTMTexTableReleaseNode(s32 table, s32 node);

extern TexUse00493154 DAT_00587fdc; /* 0x587fdc */

/* Drops one user of the loaded texture set; the last one releases its texture node. */
void texSetRelease(void)
{
    DAT_00587fdc.users = DAT_00587fdc.users - 1;
    if (DAT_00587fdc.users == 0) {
        if (DAT_00587fdc.set == 0x65) {
            asdTMTexTableReleaseNode(0x13, 6);
        }
        if (DAT_00587fdc.set == 0x66) {
            asdTMTexTableReleaseNode(0x13, 7);
        }
        if (DAT_00587fdc.set == 0x67) {
            asdTMTexTableReleaseNode(0x13, 8);
        }
        DAT_00587fdc.set = 0;
    }
}

} /* extern "C" */
