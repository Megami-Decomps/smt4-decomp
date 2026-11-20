#ifndef SYS_PLATFORMFAULT_H
#define SYS_PLATFORMFAULT_H

#include "common.h"

/* Report a failure and the caller's PC. Some checks also pass the failure bit;
 * the reporter itself only consumes the first two arguments. */
extern "C" void sysReportCheckFailure(s32 result, u32 location, ...);

/* The pending fault record (smt4 DAT_004d4200, smt4a DAT_0062d200) the reporters fill before
 * running the fault handler on it. */
struct FaultRecord {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 flags;
    /* 0x02 */ u16 magic;    /* a per-build stamp: 0xBCA3 in smt4, 0xEDAC in smt4a */
    /* 0x04 */ u32 key;      /* the failed result or check key */
    /* 0x08 */ u32 address;  /* where the failure was detected */
};
typedef char FaultRecordSizeCheck[sizeof(FaultRecord) == 0xc ? 1 : -1];

#endif
