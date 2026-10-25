#ifndef ADDON_AOCBUFFERREQUEST_H
#define ADDON_AOCBUFFERREQUEST_H

#include "common.h"
#include <stddef.h>

extern "C" void *asdOperatorNew(u32 size);
extern "C" void asdOperatorDelete(void *memory);

// The nonvirtual source-handle prefix shared by application buffer requests.
class AocRequestBase {
public:
    AocRequestBase(u32 source);
    ~AocRequestBase();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    static void operator delete(void *memory) { asdOperatorDelete(memory); }
    /* 0x00 */ u32 source;
};

class AocBufferRequest : public AocRequestBase {
public:
    AocBufferRequest(u32 source, void *buffer, u32 size);
    ~AocBufferRequest();
    /* 0x04 */ u32 state;
    /* 0x08 */ void *buffer;
    /* 0x0C */ u32 size;
};

class AocAuxBufferRequest : public AocRequestBase {
public:
    AocAuxBufferRequest(u32 source, void *buffer, u32 size);
    ~AocAuxBufferRequest();
    /* 0x04 */ u32 state;
    /* 0x08 */ void *buffer;
    /* 0x0C */ u32 size;
};

class AocCatalogRequest : public AocRequestBase {
public:
    AocCatalogRequest(u32 source, void *buffer, u32 size);
    ~AocCatalogRequest();
    /* 0x04 */ u32 state;
    /* 0x08 */ void *buffer;
    /* 0x0C */ u32 size;
};


// Known application prefix containing both independently owned request buffers.
struct AocApplicationRequestView {
    u8 prefix[0x80];
    /* 0x080 */ u32 source;
    u8 padding084[0x524];
    /* 0x5A8 */ AocBufferRequest *primary;
    /* 0x5AC */ void *primaryBuffer;
    /* 0x5B0 */ AocAuxBufferRequest *auxiliary;
    /* 0x5B4 */ void *auxiliaryBuffer;
};
typedef char AocApplicationRequestOffsets[
    sizeof(AocApplicationRequestView) == 0x5B8 &&
    offsetof(AocApplicationRequestView, source) == 0x80 &&
    offsetof(AocApplicationRequestView, primary) == 0x5A8 &&
    offsetof(AocApplicationRequestView, primaryBuffer) == 0x5AC &&
    offsetof(AocApplicationRequestView, auxiliary) == 0x5B0 &&
    offsetof(AocApplicationRequestView, auxiliaryBuffer) == 0x5B4 ? 1 : -1];
typedef char AocRequestBaseSizeCheck[sizeof(AocRequestBase) == 4 ? 1 : -1];
typedef char AocBufferRequestLayoutCheck[
    sizeof(AocBufferRequest) == 0x10 && offsetof(AocBufferRequest, source) == 0 &&
    offsetof(AocBufferRequest, state) == 4 && offsetof(AocBufferRequest, buffer) == 8 &&
    offsetof(AocBufferRequest, size) == 0xC ? 1 : -1];
typedef char AocAuxBufferRequestLayoutCheck[
    sizeof(AocAuxBufferRequest) == 0x10 && offsetof(AocAuxBufferRequest, state) == 4 &&
    offsetof(AocAuxBufferRequest, buffer) == 8 && offsetof(AocAuxBufferRequest, size) == 0xC ? 1 : -1];
typedef char AocCatalogRequestLayoutCheck[
    sizeof(AocCatalogRequest) == 0x10 && offsetof(AocCatalogRequest, state) == 4 &&
    offsetof(AocCatalogRequest, buffer) == 8 && offsetof(AocCatalogRequest, size) == 0xC ? 1 : -1];

#endif
