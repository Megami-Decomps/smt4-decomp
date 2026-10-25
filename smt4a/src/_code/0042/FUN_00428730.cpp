/* NON_MATCHING: paired parameter store uses strd instead of stm; zero and output-pointer allocation differ. */
#include "common.h"
#include <stddef.h>

struct DiagnosticRequest {
    /* 0x00 */ u8 *buffer;
    /* 0x04 */ u32 capacity;
    /* 0x08 */ u32 count;
    /* 0x0C */ u32 type;
    /* 0x10 */ u32 code;
    /* 0x14 */ char name[0x40];
    /* 0x54 */ u8 detail[0x44];
    /* 0x98 */ u8 active;
};
typedef char DiagnosticRequestLayoutCheck[offsetof(DiagnosticRequest, name) == 0x14 &&
    offsetof(DiagnosticRequest, detail) == 0x54 && offsetof(DiagnosticRequest, active) == 0x98 ? 1 : -1];
extern "C" {
u8 DAT_006426e4[0x200];
DiagnosticRequest DAT_006428e4;
}
extern "C" char *strncpy(char *destination, const char *source, u32 size);
extern "C" void *rt_memcpy(void *destination, const void *source, u32 size);

// Publish a diagnostic request and return its new serial number to the caller.
extern "C" s32 FUN_00428730(u32 *serial, u32 *resultSerial, u32 type, u32 code,
    const char *name, const void *detail)
{
    ++*serial;
    DiagnosticRequest *request = &DAT_006428e4;
    request->capacity = 0x40;
    request->count = 0;
    request->buffer = DAT_006426e4;
    request->active = 0;
    request->type = type;
    request->code = code;
    strncpy(request->name, name, sizeof(request->name));
    request->name[0x3f] = '\0';
    rt_memcpy(request->detail, detail, sizeof(request->detail));
    *resultSerial = *serial;
    return 0;
}
