#ifndef SHARD_W5_W5MATCH5_TWIN_RECORDS_H
#define SHARD_W5_W5MATCH5_TWIN_RECORDS_H

#include "common.h"
#include <stddef.h>

namespace ResourceIdentity {

struct ResourceInfo {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u16 value;
};

struct ObjectResource {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ResourceInfo *resource;
};

} // namespace ResourceIdentity

namespace CecMessageSize {

struct CecMessageHeader {
    u32 unk00;       // 0x00
    u32 messageSize; // 0x04
};

} // namespace CecMessageSize

namespace DecoderGlobals {

struct DecoderState {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

} // namespace DecoderGlobals

namespace ResourceSampleLookup {

struct LookupEntry {
    u8 unk00[0x10];
    u16 index; // 0x10
};

struct LookupOwner {
    u8 unk00[0x10];
    LookupEntry* entry; // 0x10
};

} // namespace ResourceSampleLookup

namespace SampleRange {

struct Sample {
    u16 unk00;       // 0x00
    u16 value;       // 0x02
};

struct SampleTransform {
    u32 unk00;       // 0x00
    u32 unk04;       // 0x04
    f32 scale;       // 0x08
    f32 bias;        // 0x0C
};

} // namespace SampleRange

namespace ResourceTableLookup {

struct ResourceHeader {
    u8 unk00[0x0E];
    u16 count; // 0x0E
};

struct ResourceIndex {
    u16 recordIndex; // 0x00
    u16 unk02;
};

struct ResourceRecord {
    void* value; // 0x00
    u8 unk04[0x14];
};

struct ResourceAttribute {
    const char *name;  // 0x00
    const char *value; // 0x04
};

struct ResourceItemIdentity {
    u32 id;        // 0x00
    char code[32]; // 0x04
};

struct ResourceTable {
    u8 unk00[0x10];
    ResourceHeader* header; // 0x10
    union {
        u8 unk14[0x0C];
        struct {
            u32 unk14;
            ResourceAttribute *entries; // 0x18
            u32 count;                 // 0x1C
        } attributes;
    };
    ResourceRecord* records; // 0x20
    ResourceIndex* indices; // 0x24
};

typedef char ResourceTableAttributeOffsetsCheck[
    offsetof(ResourceTable, attributes.entries) == 0x18 &&
    offsetof(ResourceTable, attributes.count) == 0x1C &&
    sizeof(ResourceTable) == 0x28 ? 1 : -1];
typedef char ResourceItemIdentityLayoutCheck[
    offsetof(ResourceItemIdentity, code) == 4 && sizeof(ResourceItemIdentity) == 36 ? 1 : -1];

} // namespace ResourceTableLookup

namespace SampleValueDecoding {

struct ValueDecoder {
    u8 unk00[8]; // 0x00
    f32 scale;   // 0x08
    f32 bias;    // 0x0C
};

struct EncodedValue {
    u8 unk00; // 0x00
    u8 low;   // 0x01
    u8 high;  // 0x02
};

} // namespace SampleValueDecoding

namespace PackedSampleDecoding {

struct SampleTransform {
    u8 unk00[8]; // 0x00
    f32 scale;   // 0x08
    f32 bias;    // 0x0C
};

struct PackedSample {
    u8 unk00;    // 0x00
    u8 low;      // 0x01
    u8 high;     // 0x02; low nibble contains sample bits 8â€“11
};

} // namespace PackedSampleDecoding

namespace ResourceKeyLookup {

struct LookupEntry {
    u32 unk00;  // 0x00
    u32 unk04;  // 0x04
    u32 value;  // 0x08
};

} // namespace ResourceKeyLookup

#endif
